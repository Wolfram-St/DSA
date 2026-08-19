// // /**
// //  * Definition for singly-linked list.
// //  * struct ListNode {
// //  *     int val;
// //  *     ListNode *next;
// //  *     ListNode() : val(0), next(nullptr) {}
// //  *     ListNode(int x) : val(x), next(nullptr) {}
// //  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
// //  * };
// //  */


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> val;
        ListNode* temp = list1; 
        while(temp != nullptr){
            val.push_back(temp->val);
            temp = temp->next;
        }

        temp = list2;
        while(temp != nullptr){
            val.push_back(temp->val);
            temp = temp->next;
        }

        if(val.size() == 0) return nullptr;

        sort(val.begin(), val.end());

        ListNode* newList = new ListNode(val[0]);
        ListNode*  current = newList;

        for(size_t i = 1; i<val.size(); i++){
            current->next = new ListNode(val[i]);
            current = current->next;
        }
        return newList;

        
    }
};