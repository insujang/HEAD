# yadl

<!--
[![Build Status](https://travis-ci.org/YADL/yadl.svg?branch=master)](https://travis-ci.org/YADL/yadl)
-->
Documentation is available in the [Wiki](https://github.com/YADL/yadl/wiki)

# Building

Instruction to install yadl in [here](https://travis-ci.org/YADL/yadl/jobs/93469413)

```
$ bash .travis_cmockery2.sh
$ git clone https://github.com/google/leveldb.git
$ cd leveldb
$ make
$ sudo cp --preserve=links out-shared/libleveldb.* /usr/local/lib
$ sudo cp -rf include/leveldb /usr/local/include
$ sudo ldconfig
$ ./autogen.sh && ./configure && make check
```

Now you have yadl_dedup file in src directory.
Once you run ./yadl_dedup, shared library linked binary is created in src/.libs/lt-yadl_dedup.

# Usage

### Creating a namespace

```
$ src/yadl_dedup --create -n <namespace_name> --store_path <absolute_path> --hash_type sha1 --chunk_scheme variable --store_type default
```

### Deduplicating a file

```
$ src/yadl_dedup --dedup -n <namespace_name> -f <absolute_file_path>
```

### Restoring a file

```
$ src/yadl_dedup --restore -n <namespace_name> -f <absolute_file_path>
```

File path should be exactly same with the path that you used for deduplication.

### Listing deduplicated files

```
$ src/yadl_dedup -l -n <namespace_name>
```


