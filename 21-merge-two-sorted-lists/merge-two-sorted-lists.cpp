class Solution {
public:
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
         ListNode* c = new ListNode(100);
          ListNode* temp = c;
          while( a!= NULL && b != NULL){
            if(a->val <= b->val){
               temp->next = a;
               a = a->next;
          }
            else{
               temp->next = b;
               b = b->next;
         }
            temp = temp->next;
        }
         if(a!=NULL){
             temp->next = a;
         }
        else{
              temp->next = b;
        }
         return c->next;
    }
};