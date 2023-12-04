#pragma once
#include <optional>
#include <cstdint>
#include <mutex>
#include "Block.hpp"

/*!
 * @brief This is a class that represents the entirety of the Blockchain itself, holds
 * a linked list with a pointer to the first and last forged Blocks.
 * @param size Represent the size of the transactions array in a Block.
 */
template <uint64_t size>
class Blockchain {
public:
  /// @brief Constructor for a new Blockchain, should be called when wanting to create
  /// a new genesis block
  Blockchain();
  /// @brief A Blockchain shouldn't be copiable
  Blockchain(Blockchain &other) = delete;
  /// @brief There should not be a way to modify the Blockchain directly
  void operator =(const Blockchain &blockchain) = delete;
  /// @brief Returns an instance (reference) to the Blockchain
  static Blockchain &getInstance();
  /// @brief Blockchain destructor
  ~Blockchain();
  /// @brief Goes to the next block in the Blockchain, returns nullopt_t when there is
  /// none
  std::optional<Block<size>> &next();
  /// @brief Goes to the previous block in the Blockchain, returns nullopt_t when there
  /// is none
  std::optional<Block<size>> &previous();
  /// @brief Goes to the first block in the Blockchain, if the Genesis Block is yet to
  /// be generated returns nullopt_t
  std::optional<Block<size>> &begin() const;
  /// @brief Goes to the last block in the Blockchain, if the Genesis Block is yet to
  /// be generated returns nullopt_t
  std::optional<Block<size>> &end() const;
  /// @brief Inserts a new block in the Blockchain, this interface is meant primarily
  /// for testing purposes for now, the inner logic of nextForging should be
  /// used instead
  /// @param block Aritificially generated block
  bool insert(Block<size> &block);
  /// @brief Forges a new block in the blockchain, this method should create new
  /// threads for the computing
  std::optional<uint64_t> nextForging();
  /// @brief This is a method for searching a certaing block based on its id.
  /// @param id Serial number that represents the position the block was forged
  std::optional<Block<size>> search(uint64_t id);

private:
  static Blockchain<size> *instance;
  static std::mutex mutex;
  Block<size> *first_block;
  Block<size> *last_block;
  Block<size> *current_block;
};
