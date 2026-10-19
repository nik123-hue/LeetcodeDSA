class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int> v;
        ListNode* temp = head;
        // storing values in vector
        while(temp != NULL){  
          v.push_back(temp->val);
          temp = temp->next;  
        }
        int n = v.size();
        // swap kth node from beginning and end
        swap(v[k-1],v[n-k]);
        temp = head;
        int i = 0;
   // storing values back to linkedlist
        while(temp != NULL){
            temp->val = v[i];
            temp = temp->next;
            i++;
        }
         return head;
    }
};