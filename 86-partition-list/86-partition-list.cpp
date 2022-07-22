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
        ListNode* temp=NULL;
        ListNode* dummy2=new ListNode(-1);
        ListNode* temp2=NULL;
        ListNode* prev=NULL;
        dummy->next=head;
        temp=dummy->next;
        prev=dummy;
        while(temp!=NULL){
            
            if(temp->val<x){
                prev=temp;
                temp=temp->next;
            }
            else{
                prev->next=temp->next;
                if(dummy2->next==NULL){
                    dummy2->next=temp;
                    temp2=dummy2->next;
                    temp2->next=NULL;
                }
                else{
                    temp2->next=temp;
                    temp2=temp2->next;
                    temp2->next=NULL;
                }
                temp=prev->next;
            }

        }
        prev->next=dummy2->next;
        return dummy->next;
    }
};