
.. _program_listing_file_include_Hash.h:

Program Listing for File Hash.h
===============================

|exhale_lsh| :ref:`Return to documentation for file <file_include_Hash.h>` (``include/Hash.h``)

.. |exhale_lsh| unicode:: U+021B0 .. UPWARDS ARROW WITH TIP LEFTWARDS

.. code-block:: cpp

   #include <openssl/evp.h>
   
   class Hash {
   private:
     unsigned char hashValue[EVP_MAX_MD_SIZE];
   public:
     Hash();
     ~Hash();
     bool operator==(const Hash &hash);
     bool operator!=(const Hash &hash);
     Hash& operator=(const Hash &hash);
   };
