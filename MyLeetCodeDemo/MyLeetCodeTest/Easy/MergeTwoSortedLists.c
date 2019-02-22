
#include "MergeTwoSortedLists.h"
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *ret;
    if(l1 == NULL)
        return l2;    //如果链表l1是空链表，直接返回链表l2；
    if(l2 == NULL)
        return l1;    //如果链表l2是空链表，直接返回链表l1；
    
    if(l1->val > l2->val){          //比较两组链表最小值域；
        ret = l2;                  //因为l2值域值更小，所以链接在ret末端；
        ret->next = mergeTwoLists(l1, l2->next);   //此处用到了递归；
        return ret;
    }else{
        ret = l1;                   //因为l1值域值更小，所以链接在ret末端；
        ret->next = mergeTwoLists(l1->next, l2);   //此处用到了递归；
        return ret;
    }
}
//当递归最后一层运算结束后，执行最后一层递归函数的return命令；

void mergeTwoSortedListsExample(void) {
    struct ListNode *l1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    l1->val = 1;
    struct ListNode *l2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    l1->next = l2;
    l2->val = 2;
    struct ListNode *l3 = (struct ListNode*)malloc(sizeof(struct ListNode));
    l2->next = l3;
    l3->val = 4;
    l3->next = NULL;
    
    struct ListNode *a1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    a1->val = 1;
    struct ListNode *a2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    a1->next = a2;
    a2->val = 3;
    struct ListNode *a3 = (struct ListNode*)malloc(sizeof(struct ListNode));
    a2->next = a3;
    a3->val = 4;
    a3->next = NULL;
    
    struct ListNode *res = mergeTwoLists(l1, a1);
    while (res->next != NULL) {
        printf("%d ", res->val);
        res = res->next;
    }
}

