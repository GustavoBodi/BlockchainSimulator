#include <catch2/catch_test_macros.hpp>
#include <catch2/catch_session.hpp>
#include "../include/Hash.hpp"
#include <iostream>
#include <openssl/sha.h>

int main(int argc, char **argv) {
  int result = Catch::Session().run(argc, argv);
}

TEST_CASE("Test SHA512 hashing") {
  std::string some_data ("The test data");
  Hash hashList =  Hash(static_cast<const void*>(some_data.c_str()), some_data.size());
  std::string result = hashList.getBase64();
  REQUIRE( result == std::string("cvIP5dzfdpAR6cAM5V93cyGxoIKXK66iGW2BxtTgSUllIoMuHpqaes8QpfSTI1RXYngDf9bC8vf32CFQiH81wg=="));
}

TEST_CASE("Test Hash Size ") {
  std::string some_data ("The test data");
  Hash hashList =  Hash(static_cast<const void*>(some_data.c_str()), some_data.length());
  REQUIRE( hashList.getSize() == SHA512_DIGEST_LENGTH );
}

TEST_CASE("Test Hash Equality") {
  std::string data_string("Testing a lot of data");
  std::string data_string_clone("Testing a lot of data");
  Hash hashList =  Hash(static_cast<const void*>(data_string.c_str()), data_string.length());
  Hash hashList_clone =  Hash(static_cast<const void*>(data_string_clone.c_str()), data_string_clone.length());
  REQUIRE(hashList == hashList_clone);
  REQUIRE(!(hashList != hashList_clone));
}

TEST_CASE("Test Hash Inequality") {
  std::string data_string("Testing a lot of data");
  std::string data_string_clone("Testing a lot of data1");
  Hash hashList =  Hash(static_cast<const void*>(data_string.c_str()), data_string.length());
  Hash hashList_clone =  Hash(static_cast<const void*>(data_string_clone.c_str()), data_string_clone.length());
  REQUIRE(!(hashList == hashList_clone));
  REQUIRE((hashList != hashList_clone));
}
