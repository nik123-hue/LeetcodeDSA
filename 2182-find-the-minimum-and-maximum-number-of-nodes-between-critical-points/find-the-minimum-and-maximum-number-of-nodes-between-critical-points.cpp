class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int idx = 0;
        int fidx = -1;
        int sidx = -1;
        ListNode* a = head;
        ListNode* b = head->next;
        ListNode* c = head->next->next;
        if(c==NULL) return {-1,-1};
        while(c){
            if(b->val > a->val && b->val > c->val || b->val < a->val && b->val < c->val){
                if(fidx==-1) fidx = idx;
                else sidx = idx;
            }
            a = a->next;
            b = b->next;
            c = c->next;
            idx++;
        }
        if(sidx==-1) return {-1,-1};
        int maxd = sidx - fidx;
        int mind = INT_MAX;
        fidx = -1;
        sidx = -1;
        idx = 1;
        a = head;
        b = head->next;
        c = head->next->next;
         while(c){
            if(b->val > a->val && b->val > c->val || b->val < a->val && b->val < c->val){
                fidx = sidx;
              sidx = idx;
              if(fidx != -1){
              int d = sidx - fidx;
              mind = min(mind,d);
              }
            }
            a = a->next;
            b = b->next;
            c = c->next;
            idx++;
        }
        return {mind,maxd};


        
    }
};