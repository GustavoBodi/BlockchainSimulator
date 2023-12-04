
.. _program_listing_file_include_Blockchain.hpp:

Program Listing for File Blockchain.hpp
=======================================

|exhale_lsh| :ref:`Return to documentation for file <file_include_Blockchain.hpp>` (``include/Blockchain.hpp``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   #include <optional>
   #include <cstdint>
   #include <mutex>
   #include "Block.hpp"
   
   template <uint64_t size>
   class Blockchain {
   public:
     Blockchain();
     Blockchain(Blockchain &other) = delete;
     void operator =(const Blockchain &blockchain) = delete;
     static Blockchain &getInstance();
     ~Blockchain();
     std::optional<Block<size>> &next();
     std::optional<Block<size>> &previous();
     std::optional<Block<size>> &first();
     std::optional<Block<size>> &last();
     bool insert(Block<size> &block);
     std::optional<uint64_t> nextForging();
     std::optional<Block<size>> search(uint64_t id);
   
   private:
     static Blockchain<size> *instance;
     static std::mutex mutex;
     Block<size> *first_block;
     Block<size> *last_block;
     Block<size> *current_block;
   };
