
all: check-env build

check-env:
ifndef DMADIR
	$(error DMADIR is undefined)
endif

build: main.cpp
	arm-linux-gnueabihf-g++ -o axidma_test main.cpp \
	-I$(DMADIR)/include \
	-L$(DMADIR)/library -laxidma
