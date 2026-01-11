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
    ListNode* middleNode(ListNode* head) {
        ListNode* curr= head;
        int cnt=0;
        while(curr!=nullptr){
            cnt++;
            curr=curr->next;
        }
        int kit=0;
        if(cnt%2==0){
            kit=(cnt/2)+1;
        }else{
            kit=(cnt+1)/2;
        }
        ListNode* curr1 = head;
        cnt=0;
        while(curr1!=nullptr){
            cnt++;
            if(cnt==kit){
                break;
            }
            curr1=curr1->next;
        }
        return curr1;
        
        
    }
};