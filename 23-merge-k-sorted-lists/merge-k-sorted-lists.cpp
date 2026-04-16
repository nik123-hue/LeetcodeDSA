class Solution {
public:
ListNode* merge(ListNode* a, ListNode* b) {
        ListNode* c = new ListNode(100);
        ListNode* temp = c;
        while(a!=NULL && b!=NULL){
            if(a->val <= b->val){
                temp->next = a;
                a = a->next;
                temp = temp->next;
            }
            else{
                temp->next = b;
                b = b->next;
                temp = temp->next;
            }
        }
        if(a==NULL) temp->next = b;
        else temp->next = a;
        return c->next;   
    }
    ListNode* mergeKLists(vector<ListNode*>& arr) {
        if(arr.size()==0) return NULL;
        while(arr.size()>1){
             ListNode* a = arr[0];
            arr.erase(arr.begin());
              ListNode* b = arr[0];
              arr.erase(arr.begin());
              ListNode* c = merge(a,b);
              arr.push_back(c);

        }
        return arr[0];

        
    }
};