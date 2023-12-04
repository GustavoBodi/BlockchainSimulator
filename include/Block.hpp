#pragma once
#include <array>
#include <optional>
#include "BlockHeader.hpp"
#include "Transaction.hpp"

/*!
 * @brief Class that represent a Block in the Blockchain, contains the header, and a
 * transactions array
 */
template <uint64_t size>
class Block {
public:
  /// @brief Creates a new Block based on the hash of the last Block and
  /// validates the transactions according to it.
  /// @param lastBlock Reference to the last block, will be used for validation
  /// and hashing purposes
  Block(Block &lastBlock);
  /// @brief Creates a Genesis Block for the Blockchain, 
  Block();
  /// @brief Adds a transaction to the Block, if the verification fails returns
  /// nullopt_t
  /// @param transaction Transaction to be added to the block, will be validated
  /// @return Returns the generated id of the transaction
  std::optional<uint64_t> addTransaction(Transaction &&transaction);
  /// @brief Block destructor
  ~Block();

private:
  BlockHeader blockHeader;
  std::array<Transaction, size> transactions;
};
