
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int value) {
    SinglyLinkedListNode* temp;
    temp = (SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
    temp->data = value;
    temp->next = NULL;
    if (head == NULL) {
        head = temp;
    } else {
        SinglyLinkedListNode* t = head;
        while (t->next != NULL) {
            t = t->next;
        }
        t->next = temp;
    }
    return head;
}
