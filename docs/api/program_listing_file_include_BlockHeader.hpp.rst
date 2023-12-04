
.. _program_listing_file_include_BlockHeader.hpp:

Program Listing for File BlockHeader.hpp
========================================

|exhale_lsh| :ref:`Return to documentation for file <file_include_BlockHeader.hpp>` (``include/BlockHeader.hpp``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   #include <cstdint>
   #include "Hash.hpp"
   
   class BlockHeader {
   public:
     BlockHeader(uint64_t version, uint64_t difficulty, uint64_t nonce, Hash lastBlockHash);
     ~BlockHeader();
   private:
     uint64_t version;
     uint64_t timestamp;
     uint32_t difficulty;
     uint32_t nonce;
     Hash lastBlockHash;
     Hash currentBlockHash;
   };
