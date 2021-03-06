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
        string str = "";
        ListNode* curr = head;
        while(curr){
            str += to_string(curr->val);
            curr = curr->next;
        }
        if(str.length()){
            string rev = str;
        reverse(rev.begin(),rev.end());
        return str == rev;
        }
        return false;
    }
};