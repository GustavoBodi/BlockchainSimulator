
.. _program_listing_file_include_Block.hpp:

Program Listing for File Block.hpp
==================================

|exhale_lsh| :ref:`Return to documentation for file <file_include_Block.hpp>` (``include/Block.hpp``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   #include <array>
   #include <optional>
   #include "BlockHeader.hpp"
   #include "Transaction.hpp"
   
   template <uint64_t size>
   class Block {
   public:
     Block(Block &lastBlock);
     Block();
     std::optional<uint64_t> addTransaction(Transaction &&transaction);
     ~Block();
   
   private:
     BlockHeader blockHeader;
     std::array<Transaction, size> transactions;
   };
