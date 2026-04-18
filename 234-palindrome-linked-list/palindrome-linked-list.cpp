class Solution {
public:
 ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
       ListNode* newHead = reverseList(head->next);
       head->next->next = head;
       head->next = NULL;
       return newHead;
      }
    bool isPalindrome(ListNode* head) {
        ListNode* c = new ListNode(100);
        ListNode* temp = head;
        ListNode* tempC = c;
        while(temp){
            ListNode* node = new ListNode(temp->val);
            tempC->next = node;
            temp = temp->next;
            tempC = tempC->next;
        }
        c = c->next;
        c = reverseList(c);
        ListNode* a = head;
        ListNode* b = c;
        while(a){
            if(a->val != b->val) return false;
            a = a->next;
            b = b->next;
        }
        return true;
        
    }
};