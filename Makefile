CC = arm-linux-gnueabihf-gcc

SRC_DIR := src
# INLINE_DEDUP_DIR := inline_dedup
# INLINE_DEDUP_LEVELDB_DIR := inline_dedup_leveldb

LEVELDB_DIR := lib/leveldb
OPENSSL_DIR := lib/openssl

LDFLAGS :=	-L/opt/Xilinx/SDK/2016.2/gnu/aarch32/lin/gcc-arm-linux-gnueabi/arm-linux-gnueabihf/libc/lib/arm-linux-gnueabihf \
			-L$(LEVELDB_DIR)/out-shared -L$(OPENSSL_DIR) \
			-L/opt/Xilinx/SDK/2016.2/gnu/aarch32/lin/gcc-arm-linux-gnueabi/arm-linux-gnueabihf/libc/usr/lib/arm-linux-gnueabihf
LDLIBS := -lleveldb -lcrypto

CFLAGS:= -I$(LEVELDB_DIR)/include -I$(OPENSSL_DIR)/build/include

# LEVELDB_DIR := /usr/local/lib
# CRYPTO_DIR := /usr/lib/x86_64-linux-gnu

# CFLAGS := -I$(LEVELDB_DIR) -I$(CRYPTO_DIR)

# LDFLAGS := -L$(LEVELDB_DIR) -lleveldb -L$(CRYPTO_DIR) -lcrypto

SRCS =  $(wildcard $(SRC_DIR)/*.c)
#		$(wildcard $(INLINE_DEDUP_DIR)/*.c) \
#		$(wildcard $(INLINE_DEDUP_LEVELDB_DIR)/*.c)

OBJS = $(SRCS:.c=.o)

all: $(OBJS)
	$(CC) -o zed_yadl $^ $(LDFLAGS) $(LDLIBS)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# $(INLINE_DEDUP_DIR)/%.o: $(INLINE_DEDUP_DIR)/%.c
#	$(CC) $(CFLAGS) -c $< -o $@

# $(INLINE_DEDUP_LEVELDB_DIR)/%.o: $(INLINE_DEDUP_LEVELDB_DIR)/%.c
#	$(CC) $(CFLAGS) -c $< -o $@



clean:
	@rm -f $(SRC_DIR)/*.o
#	@rm -f $(INLINE_DEDUP_DIR)/*.o
#	@rm -f $(INLINE_DEDUP_LEVELDB_DIR)/*.o
	@rm -f zed_yadl
