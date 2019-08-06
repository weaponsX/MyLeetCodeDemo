// 二叉树的层次遍历 II
/*
 给定一个二叉树，返回其节点值自底向上的层次遍历。 （即按从叶子节点所在层到根节点所在的层，逐层从左向右遍历）
 
 例如：
 给定二叉树 [3,9,20,null,null,15,7],
 
     3
    / \
   9  20
     /  \
    15  7
 返回其自底向上的层次遍历为：
 
 [
 [15,7],
 [9,20],
 [3]
 ]
 
 */

#include <stdio.h>

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
//int** levelOrderBottom(struct TreeNode* root, int* returnSize, int** returnColumnSizes);


void levelOrderBottomExample(void);
