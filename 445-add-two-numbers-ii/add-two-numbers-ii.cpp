/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
**/


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> num1;
        stack<int>num2;
        stack<int>new_number;

        while (l1 != nullptr) {
            num1.push(l1->val);
            l1 = l1->next;
        }


        while (l2 != nullptr) {
            num2.push(l2->val);
            l2 = l2->next;
        }


        int carry = 0;


        while (!num1.empty() || !num2.empty() || carry) {
            int sum = carry;

            if (!num1.empty()) {
                sum += num1.top();
                num1.pop();
            }

            if (!num2.empty()) {
                sum += num2.top();
                num2.pop();
            }
            

            carry = sum / 10;
            new_number.push(sum % 10);
        }


        ListNode* head = new ListNode(new_number.top());
        new_number.pop();


        ListNode* curr = head;
        while (!new_number.empty()) {
            curr->next = new ListNode(new_number.top());
            curr = curr->next;
            new_number.pop();
        }

        return head;
    }
};
