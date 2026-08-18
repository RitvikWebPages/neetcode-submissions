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
        ListNode dummy(0);
        ListNode *ptr = &dummy;
        ptr->next = head;
        ListNode* left = ptr;
        ListNode* right = head;
        while(n>0 && right != nullptr ){
            right = right->next;
            n--;
        }
        while(right!= nullptr){
            right = right->next;
            left = left->next;
        }
        ListNode* temp = left->next->next;
        ListNode* tem1 = left->next;
        left->next = temp;
        tem1->next = NULL;
        return dummy.next;
    }
};
