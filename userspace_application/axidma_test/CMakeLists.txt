cmake_minimum_required(VERSION 3.6)
project(axidma_test)

set(CMAKE_CXX_STANDARD 11)

include_directories(/home/insujang/cs710/dma/xilinx_axidma/include)
include_directories(/home/insujang/cs710/dma/xilinx_axidma/examples)

set(SOURCE_FILES main.cpp)
add_executable(axidma_test ${SOURCE_FILES})