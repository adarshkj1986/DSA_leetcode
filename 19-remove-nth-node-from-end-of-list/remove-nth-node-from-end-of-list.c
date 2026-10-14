/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode new;
    new.next=head;
    struct ListNode *fast=&new;
    struct ListNode *slow=&new;
    for(int i=0;i<=n;i++){
        if(fast==NULL) return head;
        fast=fast->next;
    }
    while(fast!=NULL){
        fast=fast->next;
        slow=slow->next;
    }
    struct ListNode *delete=slow->next;
    slow->next=slow->next->next;
    free(delete);
    return new.next;

}