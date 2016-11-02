# How to corss compile OpenSSL library for Zedboard

### 1. Install cross-compiler toolchain
```
$ sudo apt-get install gcc-arm-linux-gnueabihf
$ sudo apt-get install g++-arm-linux-gnueabihf
```
You can check whether it is installed normally or not by `arm-linux-gnueabihf-gcc -v`.
```
$ arm-linux-gnueabihf-gcc -v
Using built-in specs.
COLLECT_GCC=arm-linux-gnueabihf-gcc
COLLECT_LTO_WRAPPER=/opt/Xilinx/SDK/2016.2/gnu/aarch32/lin/gcc-arm-linux-gnueabi/bin/../libexec/gcc/arm-linux-gnueabihf/4.9.2/lto-wrapper
Target: arm-linux-gnueabihf
Configured with: /proj/esdt_sdk/gnu/linaro/build_a9_linux_arm/src/gcc-linaro-4.9-2014.09/configure --build=x86_64-build_unknown-linux-gnu --host=x86_64-build_unknown-linux-gnu --target=arm-linux-gnueabihf --prefix=/proj/esdt_sdk/gnu/linaro/install_a9_linux_arm --with-sysroot=/proj/esdt_sdk/gnu/linaro/install_a9_linux_arm/arm-linux-gnueabihf/libc --enable-languages=c,c++,fortran --disable-multilib --enable-multiarch --with-arch=armv7-a --with-tune=cortex-a9 --with-fpu=vfpv3-d16 --with-float=hard --with-pkgversion='crosstool-NG linaro-1.13.1-4.9-2014.09 - Linaro GCC 4.9-2014.09' --with-bugurl=https://bugs.launchpad.net/gcc-linaro --enable-__cxa_atexit --enable-libmudflap --enable-libgomp --enable-libssp --with-gmp=/proj/esdt_sdk/gnu/linaro/build_a9_linux_arm/arm-linux-gnueabihf/build/static --with-mpfr=/proj/esdt_sdk/gnu/linaro/build_a9_linux_arm/arm-linux-gnueabihf/build/static --with-mpc=/proj/esdt_sdk/gnu/linaro/build_a9_linux_arm/arm-linux-gnueabihf/build/static --with-isl=/proj/esdt_sdk/gnu/linaro/build_a9_linux_arm/arm-linux-gnueabihf/build/static --with-cloog=/proj/esdt_sdk/gnu/linaro/build_a9_linux_arm/arm-linux-gnueabihf/build/static --with-libelf=/proj/esdt_sdk/gnu/linaro/build_a9_linux_arm/arm-linux-gnueabihf/build/static --enable-threads=posix --disable-libstdcxx-pch --enable-linker-build-id --enable-plugin --enable-gold --with-local-prefix=/proj/esdt_sdk/gnu/linaro/install_a9_linux_arm/arm-linux-gnueabihf/libc --enable-c99 --enable-long-long --disable-multilib --with-float=hard
Thread model: posix
gcc version 4.9.2 20140904 (prerelease) (crosstool-NG linaro-1.13.1-4.9-2014.09 - Linaro GCC 4.9-2014.09) 
```

### 2. Download OpenSSL source
Download OpenSSL source from https://www.openssl.org/source. Currently the latest version is 1.0.2j.
```
$ wget http://www.openssl.org/source/openssl-1.0.2j.tar.gz
```

Unzip it with the root directory name 'openssl'.

### 3. Configure
OpenSSL provides `configure` file to make configuration. Run it by the following options.
```
$ ./Configure linux-generic32 shared -DL_ENDIAN --prefix=<build_target_directory> --openssldir=<openSSL_directory>
```

In the test environment, the following command is used.
```
$ ./Configure linux-generic32 shared -DL_ENDIAN --prefix=/home/insujang/cs710/cs710_dedup_yadl/lib/openssl/build --openssldir=/home/insujang/cs710/cs710_dedup_yadl/openssl
```
This will build the source courde in ..../lib/openssl and save the compiled library in ..../lib/openssl/build directory.

### 4. Build
Build OpenSSL library, not with standard gcc but with cross compiler.
```
$ make install CC=arm-linux-gnueabihf-gcc  RANLIB=arm-linux-gnueabihf-gcc-ranlib LD=arm-linux-gnueabihf-ld MAKEDEPPROG=arm-linux-gnueabihf-gcc PROCESSOR=ARM
```
It takes about less than 5 minutes. 

After finishing build, the shared library `libssl.so` file will be generated in ..../lib/openssl/build/lib directory.