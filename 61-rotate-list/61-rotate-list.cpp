/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int findSize(ListNode* head){
        int size=0;
        while(head!=NULL){
            size++;
            head=head->next;
        }
        return size;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        int size=findSize(head);
        // cout<<size;
        // k=k%size;
        k=size-(k%size);
        // cout<<k;
        ListNode *temp=NULL;
        ListNode *prev=NULL;
        temp=head;
        // int itrs=size-k;
        while(--k){
            temp=temp->next;
        }
        // cout<<endl<<temp->val;
        prev=temp;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        // cout<<endl<<temp->val;
        temp->next=head;
        head=prev->next;
        prev->next=NULL;
        
        // delete temp;
        // delete prev;
        // head=temp->next;
        
        return head;
    }
};