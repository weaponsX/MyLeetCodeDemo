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
        case MergeTwoSortedListsExample:
            mergeTwoSortedListsExample();
            break;
        case RemoveDuplicatesExample:
            removeDuplicatesExample();
            break;
        case RemoveElementExample:
            removeElementExample();
            break;
        case StrStrExample:
            strStrExample();
            break;
        case SearchInsertExample:
            searchInsertExample();
            break;
        case CountAndSayExample:
            countAndSayExample();
            break;
        case MaxSubArrayExample:
            maxSubArrayExample();
            break;
        case LengthOfLastWordExample:
            lengthOfLastWordExample();
            break;
        case PlusOneExample:
            plusOneExample();
            break;
        case AddBinaryExample:
            addBinaryExample();
            break;
        case MySqrtExample:
            mySqrtExample();
            break;
        case ClimbStairsExample:
            climbStairsExample();
            break;
        case DeleteDuplicatesExample:
            deleteDuplicatesExample();
            break;
        case MergeTwoSortedArrayExample:
            mergeTwoSortedArrayExample();
            break;
        case IsSameTreeExample:
            isSameTreeExample();
            break;
        case IsSymmetricExample:
            isSymmetricExample();
            break;
        case MaxDepthExample:
            maxDepthExample();
            break;
        case LevelOrderBottomIIExample:
            levelOrderBottomExample();
            break;
        case SortedArrayToBSTExample:
            sortedArrayToBSTExample();
            break;
        case IsBalancedExample:
            isBalancedExample();
            break;
        case MinDepthExample:
            minDepthExample();
            break;
        case HasPathSumExample:
            hasPathSumExample();
            break;
        case PascalTriangleExample:
            pascalTriangleExample();
            break;
        case PascalTriangleIIExample:
            pascalTriangleIIExample();
            break;
        case MaxProfitExample:
            maxProfitExample();
            break;
        case MaxProfitIIExample:
            maxProfitIIExample();
            break;
        case IsPalindromeStringExample:
            isPalindromeStringExample();
            break;
        case SingleNumberExample:
            singleNumberExample();
            break;
        case HasCycleExample:
            hasCycleExample();
            break;
        case MinStackExample:
            minStackExample();
            break;
        case GetIntersectionNodeExample:
            getIntersectionNodeExample();
            break;
        case TwoSumIIExample:
            twoSumIIExample();
            break;
        case ConvertToTitleExample:
            convertToTitleExample();
            break;
        case MajorityElementExample:
            majorityElementExample();
            break;
        case TitleToNumberExample:
            titleToNumberExample();
            break;
        case TrailingZeroesExample:
            trailingZeroesExample();
            break;
        case RotateArrayExample:
            rotateArrayExample();
            break;
        default:
            break;
    }
}
