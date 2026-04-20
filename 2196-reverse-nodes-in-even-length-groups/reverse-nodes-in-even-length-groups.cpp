class Solution {
public:
ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
       ListNode* newHead = reverseList(head->next);
       head->next->next = head;
       head->next = NULL;
       return newHead;
      }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right) return head;
        ListNode* a = NULL;
        ListNode* b = NULL;
        ListNode* c = NULL;
        ListNode* d = NULL;
        ListNode* temp = head;
        int n = 1;
        while(temp!=NULL){
            if(n==left-1) a = temp;
            if(n==left) b = temp;
            if(n==right) c = temp;
            if(n==right+1)d = temp;
            temp = temp->next;
            n++;
        }
           if(a) a->next = NULL;
            if(c)  c->next = NULL;
        c = reverseList(b);
          if(a)   a->next = c;
        b->next = d;
       if(a)  return head;
       return c;
        
        
    }
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        ListNode* temp = head;
        int gap = 1;
        while(temp && temp->next){
            int remLen = 0;
            ListNode* t = temp->next;
            for(int i=1;i<=gap+1 && t!=NULL;i++){
                t = t->next;
                remLen++;
            }
            if(remLen<gap+1) gap = remLen-1;
            if(gap%2!=0)
            reverseBetween(temp,2,2+gap);
            gap++;
            for(int i=1;temp!=NULL && i<=gap;i++){
                temp = temp->next;
            }
        }
        return head;
    }
};