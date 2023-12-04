#include "../include/Hash.hpp"
#include <openssl/evp.h>
#include <openssl/sha.h>

Hash::Hash(const void *data, size_t size)
{
  hashValue = new uint8_t[SHA512_DIGEST_LENGTH];
  md_size = SHA512_DIGEST_LENGTH;
  setHash(data, size);
}

Hash::Hash()
{
  hashValue = new uint8_t[SHA512_DIGEST_LENGTH];
  md_size = SHA512_DIGEST_LENGTH;
}

void Hash::setHash(const void *data, size_t size)
{
  SHA512(static_cast<const uint8_t*>(data), size, begin());
}

Hash::~Hash()
{
  delete[] hashValue;
}

bool Hash::operator==(const Hash &hash) const
{
  return std::equal(begin(), end(), hash.begin());
}

bool Hash::operator!=(const Hash &hash) const
{
  return !std::equal(begin(), end(), hash.begin());
}

Hash& Hash::operator=(const Hash &hash)
{
  std::copy(begin(), end(), hash.begin());
  return *this;
}

std::string Hash::getBase64()
{
  char encodedData[1000];
  EVP_EncodeBlock((unsigned char *)encodedData, hashValue, md_size);
  std::string resultString {encodedData};
  return resultString;
}

size_t Hash::getSize()
{
  return md_size;
}

uint8_t* Hash::begin() const
{
  return hashValue;
}

uint8_t* Hash::end() const
{
  return hashValue + SHA512_DIGEST_LENGTH;
}
