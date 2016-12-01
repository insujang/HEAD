

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#define WINDOW_LEN 1024
#define BUFFER_LEN 8192
#define INDICES_NUM 7

uint32_t murmurhash ( char* key, uint32_t len, uint32_t seed);
void calcHash(char str[BUFFER_LEN], int indices[INDICES_NUM]);


