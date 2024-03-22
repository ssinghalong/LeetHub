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
        stack<int> st;
        ListNode *slow=head,*fast=head;
        while(fast && fast->next){
            st.push(slow->val);
            fast=fast->next->next;
            slow=slow->next;
        }
        if(fast!=NULL){
            slow=slow->next;
        }
        while(slow!=NULL && st.top()==slow->val){
            slow=slow->next;
            st.pop();
        }
        return st.empty();
    }
};