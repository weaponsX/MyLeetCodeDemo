
#include <stdio.h>

enum ExampleName {
    TwoSumExample = 1, // 两数之和
    ReverseIntegerExample, // 反转整数
    PalindromeNumberExample, // 回文数字
    RomanToIntegerExample, // 罗马数字转Int
    LongestCommonPrefixExample, // 字符串最长相同前缀
};

void runExample(enum ExampleName name);
