class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL) return NULL;
        ListNode *tempA = headA;
        ListNode *tempB = headB;
       while(tempA != tempB){
        tempA = tempA->next;
        tempB = tempB->next;
       
       if(tempA==tempB) return tempB;
       if(tempA==NULL) tempA = headB;
       if(tempB==NULL) tempB = headA;
       }
       return tempA;
    }
};