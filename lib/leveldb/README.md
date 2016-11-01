# How to cross compile levelDB for Zedboard

### 1. Clone levelDB from Github
```
$ sudo apt-get install git
$ git clone https://github.com/google/leveldb.git
```

### 2. Install dependent libraries
```
$ sudo apt-get install lib32z1 lib32ncurses5
```

### 3. Load the functions file provided by Xilinx
This command is verified with the test environment that Xilinx SDK is installed in `/opt/Xilinx` and its  version is 2016.2.
All settings are provided by Xilinx SDK.
```
$ source /opt/Xilinx/Vivado/2016.2/settings64.sh
```

### Build!
```
$ make clean
$ make
```

To see the original README.md in leveldb, refer to [the levelDB Github repository](https://github.com/google/leveldb).