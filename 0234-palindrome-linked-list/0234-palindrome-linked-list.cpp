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
        stack<int>st;

        ListNode* temp = head;
        while(temp){
            st.push(temp -> val);
            temp = temp -> next;
        }

        while(!st.empty()){
            if(st.top() != head -> val) return false;
            st.pop();
            head = head -> next;
        }
        return true;
    }
};