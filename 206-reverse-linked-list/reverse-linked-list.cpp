class Solution {
public:
    ListNode* reverseList(ListNode* head) {
    //     if(head==NULL || head->next==NULL) return head;
    //    ListNode* newHead = reverseList(head->next);
    //    head->next->next = head;
    //    head->next = NULL;
    //    return newHead;

         ListNode* prev = NULL;
         ListNode* curr = head;
         while(curr != NULL){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
         }
         return prev;
      }
};