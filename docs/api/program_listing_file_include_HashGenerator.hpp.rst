
.. _program_listing_file_include_HashGenerator.hpp:

Program Listing for File HashGenerator.hpp
==========================================

|exhale_lsh| :ref:`Return to documentation for file <file_include_HashGenerator.hpp>` (``include/HashGenerator.hpp``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   #include <openssl/evp.h>
   #include "Hash.h"
   
   class HashGenerator {
   public:
     HashGenerator();
     template <typename A>
     Hash generateSha512(A &info_to_hash);
     ~HashGenerator();
   };
