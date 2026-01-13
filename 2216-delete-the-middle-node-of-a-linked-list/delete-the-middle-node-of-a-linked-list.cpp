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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* curr=head;
        int cnt=0;
        while(curr!=nullptr){
            cnt++;
            curr=curr->next;
        }
        if(cnt==0){
            return head;
        }
        if(cnt==1){
            return nullptr;
        }
        int half=(cnt/2);
        curr=head;
        int n=0;
        while(curr!=nullptr){
            n++;
            if(n==half){
                ListNode* temp=curr->next;
                curr->next=curr->next->next;
                delete temp;
            }
            curr=curr->next;
        }
        return head;
    }
};