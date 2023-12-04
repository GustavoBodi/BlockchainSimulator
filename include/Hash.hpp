#pragma once
#include <openssl/evp.h>
#include <cstdint>
#include <memory>

/*
 *! @brief Encapsulation of an openssl generated Hash
 */
class Hash {
public:
  /// @brief Hash constructor (uses openssl internally)
  /// @param data Pointer to some kind of infomation to be hashed,
  /// internally will be converted to a unsigned char array,
  /// @param size Size of the data to be hashed (bytes)
  Hash(const void *data, size_t size);
  /// @brief Default constructor, doesn't actually hold a value
  Hash();
  /// @brief Hashes a new value
  void setHash(const void *data, size_t size);
  /// @brief Hash destructor
  ~Hash();
  /// @brief Overloading of the equals operator, compares the hash internally
  /// @param hash Compares a hash using openssl
  bool operator==(const Hash &hash) const;
  /// @brief Overloading of the unequals operator, compares the hash internally
  /// @param hash Compares a hash using openssl
  bool operator!=(const Hash &hash) const;
  /// @brief Overloading of the asignment operator
  /// @param hash Assigns a hash, by changing the internal structure
  Hash& operator=(const Hash &hash);
  /// @brief Gets a string in Base64 for the given Hash
  std::string getBase64();
  /// @brief Return the size of the internal array
  size_t getSize();
  /// @brief Return the beggining of the sequence from the hash
  uint8_t *begin() const;
  /// @brief Return the end of the sequence from the hash
  uint8_t *end() const;
private:
  uint8_t* hashValue;
  size_t md_size;
};
