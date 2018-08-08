/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

#include <assert.h>

struct ListList {
    struct ListNode *head;
    struct ListNode *foot;
};

struct ListList *Insert(struct ListList *list, int num);
struct ListList *NewList(void);

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2) {
    int num1;
    int num2;
    int sum;
    int carry = 0;
    struct ListNode *list1 = l1;
    struct ListNode *list2 = l2;
    struct ListList *sumList = NewList();

    while ((list1 != NULL) || (list2 != NULL)) {
        if (list1 == NULL)
            num1 = 0;
        else {
            num1 = list1->val;
            list1 = list1->next;
        }
        if (list2 == NULL)
            num2 = 0;
        else {
            num2 = list2->val;
            list2 = list2->next;
        }
        sum = num1 + num2 + carry;
        if (sum >= 10) {
            sumList = Insert(sumList, sum - 10);
            carry = 1;
        } else {
            sumList = Insert(sumList, sum);
            carry = 0;
        }
    }

    if (carry == 1)
        sumList = Insert(sumList, 1);

    return sumList->head;
}

struct ListList *Insert(struct ListList *list, int num) {
    struct ListNode *new;
    new = (struct ListNode *)malloc(sizeof(*new));
    assert(new != NULL);
    new->val = num;
    new->next = NULL;

    if (list->head == NULL)
        list->head = list->foot = new;
    else {
        list->foot->next = new;
        list->foot = new;
    }

    return list;
}

struct ListList *NewList(void) {
    struct ListList *list;
    list = (struct ListList *)malloc(sizeof(*list));
    assert(list != NULL);
    list->head = list->foot = NULL;
    return list;
}
