class Solution {
public:
 ListNode* reverseList(ListNode* head) {
      if(head==NULL || head->next==NULL) return head;
      ListNode* newHead = reverseList(head->next);
      ListNode* front = head->next;
      front->next = head;
      head->next = NULL;
      return newHead;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* newHead = reverseList(slow->next);
        ListNode* a = head;
        ListNode* b = newHead;
        while(b){
            if(a->val != b->val) return false;
            a  = a->next;
            b = b->next;
        }
        return true;
    }
};