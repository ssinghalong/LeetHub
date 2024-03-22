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
    bool isPal(vector<int> vec){
        for(int i=0;i<vec.size();i++){
            if(vec[i]!=vec[vec.size()-1-i]) return false;
        }
        return true;
    }
    bool isPalindrome(ListNode* head) {
        vector<int> vec;
        ListNode* temp=head;
        while(temp){
            vec.push_back(temp->val);
            temp=temp->next;
        }
        return isPal(vec);
    }
};