class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        int n = 0;
        ListNode* temp = head;
        ListNode* tail = NULL;
        while(temp!=NULL){
            if(temp->next==NULL) tail = temp;
            temp = temp->next;
            n++;
        }
           k = k%n;
           if(k==0) return head;
           temp = head;
           for(int i=1;i<n-k;i++){
            temp = temp->next;
           }
           tail->next = head;
           head = temp->next;
           temp->next = NULL;
           return head;

        
    }
};