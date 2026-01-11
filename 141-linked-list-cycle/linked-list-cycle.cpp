/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
       if(head==nullptr){
        return false;
       }
       map<ListNode*, int> mp;
       ListNode* temp= head;
       while(temp != nullptr){
            if(mp[temp]==1){
                return true;
            }
            mp[temp]++;
            temp=temp->next;
       }
        return false;

    }
};