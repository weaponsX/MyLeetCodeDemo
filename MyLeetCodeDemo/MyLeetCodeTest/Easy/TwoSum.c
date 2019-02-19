#include "TwoSum.h"
#include <stdlib.h>

/// 穷举
/// 最常规的解法，两个数相加，穷举所有数进行对比，总能得到正确答案。时间复杂度O(n^n)。
int* twoSum1(int* nums, int numsSize, int target) {
    int *a = (int*)malloc(2*sizeof(int));
    for(int i = 0;i<numsSize;i++)
    {
        for(int j = i+1;(j<numsSize && j != i);j++)
        {
            if(nums[i] + nums[j] == target)
            {
                a[0] = i;
                a[1] = j;
            }
        }
    }
    return a;
}

/// Hash法
/// 原理是先取一段len长度的hash表，len为数组中最小的数min和符合条件的最大数max（由目标数减去最小数确定）之差。将满足条件的数组元素放入Hash表中，通过hash表中target-nums[i]-min来确定是否已经找到满足条件的下标，使用Hash法可以把时间复杂度降低到O(n)，不过在数组内值差别很大时不太适合此方法。例如数组有两个元素[-1000,1000],，分配空间就太大，效率不高。
int* twoSum2(int* nums, int numsSize, int target) {
    int min = 2147483647;
    int i = 0;
    for (i = 0; i < numsSize; i++) {
        if (nums[i] < min)
            min = nums[i];
    }
    int max = target - min;
    int len = max - min + 1;   //确定hash长度
    int *table = (int*)malloc(len*sizeof(int));
    int *indice = (int*)malloc(2*sizeof(int));
    for (i = 0; i < len; i++) {
        table[i] = -1;         //hash初值
    }
    for (i = 0; i < numsSize; i++) {
        if (nums[i]-min < len) {
            if (table[target-nums[i]-min] != -1) {        //满足相加为target
                indice[0] = table[target-nums[i] - min];
                indice[1] = i;
                return indice;
            }
            table[nums[i]-min] = i;
        }
    }
    free(table);
    return indice;
}

void twoSumExample() {
    int nums[4] = {2, 11, 15, 7};
    int *res1 = twoSum1(nums, 4, 9);
    printf("twoSum1: %d---%d", res1[0], res1[1]);
    int *res2 = twoSum2(nums, 4, 9);
    printf("twoSum2: %d---%d", res2[0], res2[1]);
}

