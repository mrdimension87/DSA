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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* curr1 = headA;
        ListNode* curr2 = headB;
        map<ListNode*, int> mp;
        while(curr1!=nullptr){
            mp[curr1]++;
            curr1=curr1->next;
        }
        while(curr2!=nullptr){
            if(mp[curr2]==1){
                return curr2;
            }
            mp[curr2]++;
            curr2=curr2->next;
        }
        return 0;
    }
};