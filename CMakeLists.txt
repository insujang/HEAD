cmake_minimum_required(VERSION 3.6)
project(cs710_dedup_yadl)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -pg")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pg")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -pg")
set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -pg")

set(SOURCE_FILES
    src/main.cpp
    src/deduplication.cpp
    src/deduplication.h
    src/sha1.cpp
    src/sha1.h
    src/levelDBWrapper.h
    src/levelDBWrapper.cpp
    src/RestoreFileDedup.cpp
    src/RestoreFileDedup.h
    src/rabinKarp.cpp
    src/rabinKarp.h)


# find_library(leveldb
#        NAMES libleveldb.so
#        PATHS ${CMAKE_SOURCE_DIR}/lib/leveldb/out-shared/)

#find_library(openssl
#        NAMES libssl.so
#        PATHS ${CMAKE_SOURCE_DIR}/lib/openssl/build/lib)

#find_library(crypto
#        NAMES libcrypto.so
#        PATHS ${CMAKE_SOURCE_DIR}/lib/openssl/build/lib)

add_executable(cs710_dedup_yadl ${SOURCE_FILES})

# changed from standard libraries installed in /usr/share/lib to compiled libraries
# target_link_libraries(cs710_dedup_yadl ${leveldb})
# target_link_libraries(cs710_dedup_yadl ${openssl})
# target_link_libraries(cs710_dedup_yadl ${crypto})

target_link_libraries(cs710_dedup_yadl leveldb crypto)