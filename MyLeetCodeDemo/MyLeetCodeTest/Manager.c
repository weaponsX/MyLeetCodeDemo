#include "Manager.h"

#include "Easy.h"
#include "Hard.h"
#include "Medium.h"

void runExample(enum ExampleName name) {
    switch (name) {
        case TwoSumExample:
            twoSumExample();
            break;
        case ReverseIntegerExample:
            reverseIntegerExample();
            break;
        case PalindromeNumberExample:
            palindromeNumberExample();
            break;
        case RomanToIntegerExample:
            romanToIntegerExample();
            break;
        case LongestCommonPrefixExample:
            longestCommonPrefixExample();
        case ValidParenthesesExample:
            validParenthesesExample();
            break;
        default:
            break;
    }
}
