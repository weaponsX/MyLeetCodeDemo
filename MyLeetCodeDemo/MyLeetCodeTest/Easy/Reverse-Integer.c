#include "Reverse-Integer.h"


int reverse(int x) {
    if (x == 0) {
        return 0;
    }
    int res = 0;
    int num = x;
    while (num != 0) {
        int tmp = num % 10;
        
        res = res * 10 + tmp;
        num = num/10;
    }
    return res;
}

void reverseIntegerExample(void) {
    int target = -12305;
    printf("target=%d, result=%d\n", target, reverse(target));
    
}

