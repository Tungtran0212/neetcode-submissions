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
    bool hasCycle(ListNode* head) {
        if(!head)
            return false;
        ListNode* slowPtr = new ListNode();
        ListNode* fastPtr = new ListNode();
        slowPtr = head;
        fastPtr = head;
        while(fastPtr->next != nullptr && fastPtr->next->next != nullptr)
        {
            slowPtr= slowPtr->next;
            fastPtr= fastPtr->next->next;
            cout<<slowPtr->val<<"   "<<fastPtr->val<<endl;
            if(fastPtr->val == slowPtr->val)
            {
                return true;
            }
        }
        return false;
    }
};
