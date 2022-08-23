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
    bool isPalindrome(ListNode* head) {
        stack<int> s;
        ListNode* temp=head;
        ListNode* mid=head;
        while(temp!=NULL && temp->next!=NULL){
            s.push(mid->val);
            // cout<<s.top()<<endl;
            mid=mid->next;
            temp=temp->next->next;
        }
        if(temp!=NULL){
            mid=mid->next;
        }
        // cout<<"\nmid\n";
        while(mid!=NULL){
            // cout<<s.top()<<endl;
            if(mid->val != s.top()) return false;
            s.pop();
            mid=mid->next;
        }
        return true;
    }
};