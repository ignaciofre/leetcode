int findMiddleIndex(struct ListNode* head) {
    struct ListNode* current = head;
    int count = 0;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    if (count % 2 == 0) return (count+1)/2;
    else return count/2;
}

struct ListNode* deleteMiddle(struct ListNode* head) {
    struct ListNode* current = head;
    int index = findMiddleIndex(head);
    if (index < 1) return NULL;
    while (index-1 > 0) {
        index--;
        current = current->next;
    } current->next = current->next->next;
    return head;
}