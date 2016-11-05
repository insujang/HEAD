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

set(LIB_DIR ${CMAKE_SOURCE_DIR}/lib)

add_custom_command(OUTPUT ${LIB_DIR}/x86_64/libleveldb.a
        COMMAND $(MAKE) clean &> /dev/null
        COMMAND $(MAKE) 2> /dev/null
        COMMAND mv out-static/libleveldb.a ../x86_64
        COMMAND $(MAKE) clean &> /dev/null
        COMMENT "Generating libleveldb.a static library.."
        WORKING_DIRECTORY ${LIB_DIR}/leveldb)
add_custom_target(libleveldb ALL
        DEPENDS ${LIB_DIR}/x86_64/libleveldb.a)

add_custom_command(OUTPUT ${LIB_DIR}/x86_64/libcrypto.a
        COMMAND $(MAKE) clean &> /dev/null
        COMMAND ./config --prefix=${LIB_DIR}/openssl/out 
        COMMAND $(MAKE) depend 2> /dev/null
        COMMAND $(MAKE) 2> /dev/null
        COMMAND $(MAKE) install_sw 2> /dev/null
        COMMAND mv out/lib/libcrypto.a ../x86_64
        COMMAND $(MAKE) clean &> /dev/null
        COMMAND rm -rf out
        COMMENT "Generating libcrypto.a static library.."
        WORKING_DIRECTORY ${LIB_DIR}/openssl)
add_custom_target(libcrypto ALL
        DEPENDS ${LIB_DIR}/x86_64/libcrypto.a)

include_directories(${CMAKE_SOURCE_DIR}/lib/leveldb/include
        ${CMAKE_SOURCE_DIR}/lib/openssl/include)
add_executable(cs710_dedup_yadl ${SOURCE_FILES})
add_dependencies(cs710_dedup_yadl libleveldb)
add_dependencies(cs710_dedup_yadl libcrypto)

target_link_libraries(cs710_dedup_yadl leveldb crypto)