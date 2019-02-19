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
        default:
            break;
    }
}
