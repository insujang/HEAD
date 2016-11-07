cmake_minimum_required(VERSION 2.8)
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
    src/rabinKarp.h
    src/getopt_pp.cpp
    src/getopt_pp.h)

set(LIB_DIR ${CMAKE_SOURCE_DIR}/lib)

add_custom_command(OUTPUT ${LIB_DIR}/x86_64/libleveldb.a
        COMMAND $(MAKE) 2> /dev/null
        COMMAND mv out-static/libleveldb.a ../x86_64
        WORKING_DIRECTORY ${LIB_DIR}/leveldb)
add_custom_target(libleveldb ALL
        DEPENDS ${LIB_DIR}/x86_64/libleveldb.a)

add_custom_command(OUTPUT ${LIB_DIR}/x86_64/libcrypto.a
        COMMAND ./config --prefix=${LIB_DIR}/openssl/out
        COMMAND $(MAKE) 2> /dev/null
        COMMAND mv libcrypto.a ../x86_64
        WORKING_DIRECTORY ${LIB_DIR}/openssl)
add_custom_target(libcrypto ALL
        DEPENDS ${LIB_DIR}/x86_64/libcrypto.a)

include_directories(${CMAKE_SOURCE_DIR}/lib/leveldb/include
        ${CMAKE_SOURCE_DIR}/lib/openssl/include
        ${CMAKE_C_FLAGS}/lib/snappy)
add_executable(cs710_dedup_yadl ${SOURCE_FILES})
add_dependencies(cs710_dedup_yadl libleveldb)
add_dependencies(cs710_dedup_yadl libcrypto)


target_link_libraries(cs710_dedup_yadl ${LIB_DIR}/x86_64/libcrypto.a ${LIB_DIR}/x86_64/libleveldb.a)
target_link_libraries(cs710_dedup_yadl -lstdc++ -lm -lpthread -ldl -lsnappy)