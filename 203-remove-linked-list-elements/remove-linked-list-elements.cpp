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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode* prev = &dummy;
        while(prev->next != nullptr){
            ListNode* curr = prev->next;
            if(curr->val == val){
                prev->next = curr->next;
            }
            else if(curr->val != val){
                prev = prev->next;
            }
        }
        return dummy.next;
    }
};