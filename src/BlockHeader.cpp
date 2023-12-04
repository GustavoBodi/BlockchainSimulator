#include <chrono>
#include <ctime>
#include <sstream>
#include "../include/BlockHeader.hpp"

BlockHeader::BlockHeader(uint64_t version, uint32_t difficulty, uint32_t nonce,
                         Hash lastBlockHash)
    : timestamp{static_cast<uint64_t>(std::time(nullptr))}, version{version},
      difficulty{difficulty}, nonce{nonce}, lastBlockHash{lastBlockHash}
{
  std::string stringData = toString();
  currentBlockHash.setHash(static_cast<const void*>(stringData.c_str()), stringData.size());
}

std::string BlockHeader::toString() {
  std::stringstream concatenatedHeader;
  concatenatedHeader << "BlockHeader" << std::endl;
  concatenatedHeader << "Version " << version << std::endl;
  concatenatedHeader << "Difficulty " << difficulty << std::endl;
  concatenatedHeader << "Nonce " << nonce << std::endl;
  concatenatedHeader << "lastBlockHash " << lastBlockHash.getBase64() << std::endl;
  return concatenatedHeader.str();
}

std::string BlockHeader::getHash() {
  return currentBlockHash.getBase64();
}

BlockHeader::~BlockHeader()
{
}
