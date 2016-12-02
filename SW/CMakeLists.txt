cmake_minimum_required(VERSION 2.8)
project(dedup)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        src/main.cpp
        src/DeduplicateFile.cpp
        src/DeduplicateFile.h
        src/levelDBWrapper.h
        src/levelDBWrapper.cpp
        src/RestoreFileDedup.cpp
        src/RestoreFileDedup.h
        src/getopt_pp.cpp
        src/getopt_pp.h
        lib/sha1/TinySHA1.hpp)

set(LIB_DIR ${CMAKE_SOURCE_DIR}/lib)

add_custom_command(OUTPUT ${LIB_DIR}/x86_64/libleveldb.a
        COMMAND $(MAKE)
        COMMAND mv out-static/libleveldb.a ../x86_64
        WORKING_DIRECTORY ${LIB_DIR}/leveldb)
add_custom_target(libleveldb ALL
        DEPENDS ${LIB_DIR}/x86_64/libleveldb.a)

#add_custom_command(OUTPUT ${LIB_DIR}/x86_64/libcrypto.a
#        COMMAND ./config --prefix=${LIB_DIR}/openssl/out
#        COMMAND $(MAKE) 2> /dev/null
#        COMMAND mv libcrypto.a ../x86_64
#        WORKING_DIRECTORY ${LIB_DIR}/openssl)
#add_custom_target(libcrypto ALL
#        DEPENDS ${LIB_DIR}/x86_64/libcrypto.a)

include_directories(${CMAKE_SOURCE_DIR}/lib/leveldb/include
        # ${CMAKE_SOURCE_DIR}/lib/openssl/include
        # ${CMAKE_C_FLAGS}/lib/snappy
        )
add_executable(dedup ${SOURCE_FILES})
add_dependencies(dedup libleveldb)
#add_dependencies(cs710_dedup_yadl libcrypto)


target_link_libraries(dedup ${LIB_DIR}/x86_64/libleveldb.a)
target_link_libraries(dedup -lstdc++ -lm -lpthread -ldl -lsnappy)