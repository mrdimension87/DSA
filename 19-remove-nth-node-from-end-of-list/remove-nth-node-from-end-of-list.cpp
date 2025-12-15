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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int len=0;
        while(temp!=nullptr){
            len++;
            temp=temp->next;
        }
        int k=(len+1)-n;
        temp=head;
        if(len==n){
            head=head->next;
            delete temp;
            return head;
        }
        for(int i=0; i<len;i++){
            if(i+2==k){
                ListNode* rem=temp->next;
                temp->next=temp->next->next;
                delete rem;
            }
            else{
                temp=temp->next;
            }
        }
        return head;
    }
};