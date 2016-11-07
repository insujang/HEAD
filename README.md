# C++ Deduplication Library

This deduplication library is a totally refined version of [yadl (Yet Another Deduplication Library)](https://github.com/YADL/yadl).

Faster, Easier to use, Easier to read the source code.

## Profile Result with gprof
Profiling is done with the target file cuda_7.5.18_linux.run (1,195,424,633 bytes, 1.2GB)
- [Deduplication result](./analysis_dedup.txt)
- [Restore result](./analysis_restore.txt)


## Performance Comparision vs YADL
* System: Intel Core i7-6700, 16GB DDR4-2133 DRAM, Micron Crusial MX200 SSD 500GB, Ubuntu 14.04.5 LTS 64-bit
* Target file: cudnn-8.0-linux-x64-v5.1.tgz (100,504,805 bytes, 95.8MB)
* Evaluation: delete all previous data, perform deduplication once, restore the file with the deduped data right before.
* Measurement unit: seconds

|  | ours | yadl |
|:-------|:----:|:-----:|
| dedup | **4** | 339 |
| restore | **1** | 843 |


# Building

### x86_64 Compile
You may use [CLion](https://www.jetbrains.com/clion/) IDE or any other IDEs that support cmake to build the project, or use cmake alone. 

If you use standalone cmake, perform the following instructions in an arbitrary directory. Assume the project is in `/home/user/ldedup` and you are currently in that directory.

```
$ mkdir bin && cd bin
$ cmake ..
$ make
```
The name of output file will be `cs710_dedup_yadl`.

### ARM Zedboard Compile
`Makefile.arm` in the root directory of the project is to compile this project for Xilinx Zynq 7000 Zedboard.

Assume you installed Xilinx Vivado Design Suite version **2016.2 including Xilinx SDK** in `/opt/Xilinx`.

```
$ make -f Makefile.arm
```
The name of output file will be `zed_dedup`.


# Usage

```
Deduplicate a file:
<app_name> -t/--type dedup -f/--filepath <file_path>

Restore a file:
<app_name> -t/--type restore -f/--filepath <file_path>

Restore all files from the DB:
<app_name> -t/--type restore_all

Show usage:
<app_name> -h/--help
```