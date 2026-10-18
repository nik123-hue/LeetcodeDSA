class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL) return NULL;
        Node* temp = head;
        // inserting copynode in between
        while(temp != NULL){
            Node* copyNode = new Node(temp->val);
            copyNode->next = temp->next;
            temp->next = copyNode;
            temp = temp->next->next;
        }
        // connecting random pointers
         temp = head;
         while(temp != NULL){
            Node* copyNode = temp->next;
            if(temp->random != NULL){
            copyNode->random = temp->random->next;
            }
            temp = temp->next->next;
         }

          // connect next pointer
           Node* dummyNode = new Node(-1);
            Node* res = dummyNode;
            temp = head;
            while(temp != NULL){
                res->next = temp->next;
                temp->next = temp->next->next;
                res = res->next;
                temp = temp->next;
            }
            return dummyNode->next;
    }
};