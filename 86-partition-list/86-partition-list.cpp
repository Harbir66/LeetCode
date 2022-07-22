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
    ListNode* partition(ListNode* head, int x) {
        ListNode* dummy=new ListNode(0);
        ListNode* temp=dummy;
        ListNode* dummy2=new ListNode(0);
        ListNode* temp2=dummy2;
        
        while(head!=NULL){
            if(head->val<x){
                temp->next=head;
                temp=temp->next;
            }
            else{
                temp2->next=head;
                temp2=temp2->next;
            }
            head=head->next;

        }
        temp2->next=NULL;
        temp->next=dummy2->next;
        return dummy->next;
    }
};