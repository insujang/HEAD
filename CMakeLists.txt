cmake_minimum_required(VERSION 3.6)
project(cs710_dedup_yadl)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
#    inline_dedup/client.c
#    inline_dedup/ydl_clean_buff.c
#    inline_dedup/ydl_clean_buff.h
#    inline_dedup/ydl_namespace.c
#    inline_dedup/ydl_namespace.h
#    inline_dedup_leveldb/client.c
#    inline_dedup_leveldb/ydl_clean_buff.c
#    inline_dedup_leveldb/ydl_clean_buff.h
#    inline_dedup_leveldb/ydl_namespace.c
#    inline_dedup_leveldb/ydl_namespace.h
    src/block.c
    src/block.h
    src/catalog.c
    src/catalog.h
    src/clean_buff.c
    src/clean_buff.h
    src/config.h
    src/dedup.c
    src/dedup.h
#    src/dedup_test.c
    src/delete.c
    src/delete.h
#    src/delete_test.c
    src/hash.c
    src/hash.h
    src/ldb.c
    src/ldb.h
        src/main.cpp
    src/main.h
    src/md5.c
    src/md5.h
    src/min_hash.c
    src/min_hash.h
    src/minhash_restore.c
    src/minhash_restore.h
    src/minhash_stub.c
    src/minhash_stub.h
    src/namespace.c
    src/namespace.h
    src/object_store.c
    src/object_store.h
    src/parsing.c
    src/parsing.h
    src/Rabin_Karp.c
    src/Rabin_Karp.h
    src/restore.h
    src/Restore_file.c
    src/sha1.c
    src/sha1.h
    src/stub.c
    src/stub.h
    src/vector.c
    src/vector.h
    src/levelDBWrapper.h
    src/levelDBWrapper.cpp)


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