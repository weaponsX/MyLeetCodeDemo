
#include "PalindromeNumber.h"
#include <stdbool.h>

/// 我们可以利用取整和取余来获得我们想要的数字，比如 1221 这个数字，如果 计算 1221 / 1000， 则可得首位1， 如果 1221 % 10， 则可得到末尾1，进行比较，然后把中间的22取出继续比较。
bool isPalindrome1(int x) {
    if (x < 0) {
        return false;
    }
    int div = 1;
    while (x / div >= 10) {
        div *= 10;
    }
    
    while (x > 0) {
        int left = x / div;
        int right = x % 10;
        if (left != right) {
            return false;
        }
        x = x % div / 10;
        div /= 100;
    }
    return true;
}

bool isPalindrome2(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }
    int revertNum = 0;
    while (x > revertNum) {
        revertNum = revertNum * 10 + x % 10;
        x /= 10;
    }
    return x == revertNum || x == revertNum / 10;
}

void palindromeNumberExample(void) {
    int target = 12321;
    if (isPalindrome1(target)) {
        printf("%d是回文数字-1\n", target);
    } else {
        printf("%d不是回文数字-1\n", target);
    }
    if (isPalindrome2(target)) {
        printf("%d是回文数字-2\n", target);
    } else {
        printf("%d不是回文数字-2\n", target);
    }
}
