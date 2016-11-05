TARGET = arm-linux-gnueabihf
CC = $(TARGET)-gcc
CXX = $(TARGET)-g++

XILINX_DIR := /opt/Xilinx
XILINX_VER := 2016.2
LEVELDB_DIR := lib/leveldb
OPENSSL_DIR := lib/openssl

SRC_DIR := src
XILINX_ROOT = $(XILINX_DIR)/SDK/$(XILINX_VER)/gnu/aarch32/lin/gcc-arm-linux-gnueabi/arm-linux-gnueabihf

LDFLAGS =-Llib/arm \
		 -L$(XILINX_ROOT)/libc/usr/lib/arm-linux-gnueabihf \
		 -L$(XILINX_ROOT)/lib

LDLIBS = -l:libleveldb.a -l:libcrypto.a -lstdc++ -lm -lpthread -ldl
CXXFLAGS:= -I$(LEVELDB_DIR)/include -I$(OPENSSL_DIR)/include -std=c++11

SRCS =  $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(SRCS:.cpp=.o)
LEVELDB := lib/arm/libleveldb.a
CRYPTO := lib/arm/libcrypto.a

all: $(LEVELDB) $(CRYPTO) $(OBJS)
	source $(XILINX_DIR)/Vivado/$(XILINX_VER)/settings64.sh && \
	$(CXX) -o zed_yadl $(OBJS) $(LDFLAGS) $(LDLIBS)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Cross-compile leveldb library and
# extract the static library libleveldb.a to lib/arm
$(LEVELDB):
	source $(XILINX_DIR)/Vivado/$(XILINX_VER)/settings64.sh && \
	cd lib/leveldb && \
	make clean && \
	make CC=$(CC) -j 8 && \
	mv out-static/libleveldb.a ../arm && \
	make clean && \
	cd -

# Cross-compile openssl library and
# extract the static library libcrypto.a to lib/arm
$(CRYPTO):
	source $(XILINX_DIR)/Vivado/$(XILINX_VER)/settings64.sh && \
	cd lib/openssl && \
	./Configure linux-generic32 --prefix=`pwd`/out && \
	make install CC=$(CC) RANLIB=$(TARGET)-ranlib LD=$(TARGET)-ld \
			MAKEDEPPROF=$(CC) PROCESSOR=ARM && \
	mv out/lib/libcrypto.a ../arm && \
	make clean && \
	rm -rf out && \
	cd -


clean:
	rm -f $(SRC_DIR)/*.o
	rm -f zed_yadl
	rm -f $(LEVELDB)
	rm -f $(CRYPTO)
