cmake_minimum_required(VERSION 3.22)
project(project
  VERSION 0.0.1)

SET (CMAKE_CXX_FLAGS_INIT "-Wall -std=c++20")
set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake/Modules")
enable_testing()


set(PROJECT_SOURCE_DIR "src")
set(PROJECT_INCLUDE_DIR "include")
set(PROJECT_SPHINX_DIR "docs_sphinx")

file (GLOB SRC_FILES
  "${PROJECT_SOURCE_DIR}/*.cpp")

file (GLOB INCLUDE_FILES
  "${PROJECT_INCLUDE_DIR}/*.h*")

file (GLOB test_glb
  "tests/*.cpp")

add_executable(project ${SRC_FILES} ${INCLUDE_FILES})

find_package(OpenSSL 3.1 REQUIRED)
target_link_libraries(project PUBLIC OpenSSL::SSL OpenSSL::Crypto)


find_package(Catch2 3 REQUIRED)
# These tests can use the Catch2-provided main
add_executable(tests ${SRC_FILES} ${INCLUDE_FILES})
target_link_libraries(tests PUBLIC OpenSSL::SSL OpenSSL::Crypto)
target_link_libraries(tests PRIVATE Catch2 Catch2::Catch2WithMain)

# These tests need their own main
list (REMOVE_ITEM SRC_FILES main.cpp)
add_executable(tests-main ./tests/main.cpp ./src/Hash.cpp)
target_link_libraries(tests-main PUBLIC OpenSSL::SSL OpenSSL::Crypto)
target_link_libraries(tests-main PRIVATE Catch2::Catch2)

source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${SOURCE_FILES})

include(CTest)
include(Catch)
catch_discover_tests(tests)

