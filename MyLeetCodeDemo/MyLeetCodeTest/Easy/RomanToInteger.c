
#include "RomanToInteger.h"

int toNumber(char ch) {
    switch (ch) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
    }
    return 0;
}

int romanToInt(char* s) {
    int total=0;
    char *p=s;
    int i=0;
    int a=0;
    int b=0;
    while(p[i]!='\0')
    {
        a=toNumber(p[i]);
        b=toNumber(p[i+1]);
        if(a>=b)
        {
            total=a+total;
            i=i+1;
        }
        if(a<b)
        {
            total=total+b-a;
            i=i+2;
        }
    }
    return total;
}

void romanToIntegerExample(void) {
    char *str = "MCMXCIV";
    printf("%s的阿拉伯数字为：%d\n", str, romanToInt(str));
}
