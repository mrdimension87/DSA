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
        vector<int> arr;
        ListNode* curr=head;
        int cnt=0;
        while(curr!=nullptr){
            arr.emplace_back(curr->val);
            cnt++;
            curr=curr->next;
        }
        for(int i=0; i<cnt/2; i++){
            if(arr[i]!=arr[cnt-i-1]){
                return false;
            }
        }
        return true;
        
    }
};