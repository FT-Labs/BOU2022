#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define LENGTH(arr) (sizeof(arr) / sizeof(arr[0]))
#define RANDARR(arr, n, limit) for(int i = 0; i < n; i++) arr[i] = rand() % limit;
