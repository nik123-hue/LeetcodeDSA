class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
       unordered_set<int>st(nums.begin(),nums.end());
       while(head != NULL && st.count(head->val)){
        ListNode* temp = head;
        head = head->next;
       }
       ListNode* temp = head;
       while(temp != NULL && temp->next != NULL){
        if(st.count(temp->next->val)){
            temp->next = temp->next->next;
        }
        else{
            temp = temp->next;
        }
       }
       return head;
    }
};