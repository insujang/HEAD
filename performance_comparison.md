# Performance comparison between ours and original yadl library

* Unit: second
* Target file: cudnn-8.0-linux-x64-v5.1.tgz (100504805 bytes, 96MB)
* Evaluation: delete the previous data, perform deduplication once, restore the file with the deduped data right before.

|  | ours | yadl |
|:-------:|:----:|:-----:|
| dedup | 4 | 339 |
| restore | 1 | 843 |


# Analysis of our dedup library 

### 1. Deduplication
Refer to `profile_dedup.txt` file.

### 2. Restore
Refer to `profile_restore.txt` file.