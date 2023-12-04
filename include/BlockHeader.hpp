#pragma once
#include <cstdint>
#include "Hash.hpp"

/*!
 * @brief Class that represent the Header of a Block
 */
class BlockHeader {
public:
  /// @brief The constructor of a new header
  /// @param version Represents the version of the application (miner)
  /// @param difficulty The difficulty of the hash to be found for this block
  /// @param nonce Valid value to be found by the Proof of Work algorithm
  /// @param lastBlockHash The hash of the last block, it's the primary
  /// validation link between them
  BlockHeader(uint64_t version, uint32_t difficulty, uint32_t nonce, Hash lastBlockHash);
  /// @brief Returns the hash of the block header
  std::string getHash();
  /// @brief BlockHeader destructor
  std::string toString();
  ~BlockHeader();
private:
  uint64_t version;
  uint64_t timestamp;
  uint32_t difficulty;
  uint32_t nonce;
  Hash lastBlockHash;
  Hash currentBlockHash;
};
