int findMiddleIndex(struct ListNode* head, int count) {
    struct ListNode* current = head; 
    while (current != NULL) {
        count++;
        current = current->next;
    } 
    if (count % 2 == 0) return (count+1)/2;
    else return count/2;
}

struct ListNode* middleNode(struct ListNode* head) {
    int count = 0;
    int index = findMiddleIndex(head, count);
    struct ListNode* current = head; 
    while (current != NULL) {
        if (count == index) return current;
        count++;
        current = current->next;
    } 
    return head;
}