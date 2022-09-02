/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *reverseList(struct ListNode *head) 
{
    // exit condition
    if (head == NULL || head->next == NULL) return head;
    
    // recursive step
    struct ListNode *new = reverseList(head->next);
    struct ListNode *tmp = head->next;
    tmp->next = head;
    head->next = NULL;
    return new;
}
