/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node *temp;
        if(!head) return head;
        temp=head;
        while(temp){
            Node *n=new Node(temp->val);
            n->next=temp->next;
            temp->next=n;
            temp=n->next;
        }
        temp=head;
        while(temp){
            temp->next->random=temp->random==NULL?NULL:temp->random->next;
            temp=temp->next->next;
        }
        
        temp=head;
        Node *ans;
        // Node *temp2=ans;
        ans=temp->next;
        temp=head->next;
        while(head){
            head->next=temp->next;
            head=temp->next;
            // temp->next=head;
            if(not head) break;
            temp->next=head->next;
            temp=temp->next;
        }
        // ans=temp2;
        return ans;
        
    }
};