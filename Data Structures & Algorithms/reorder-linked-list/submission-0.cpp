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
    void reorderList(ListNode* head) {
        vector<ListNode* > v;
        ListNode* curPtr = new ListNode();
        curPtr = head;
        while(curPtr){
            v.push_back(curPtr);
            curPtr = curPtr->next;
        }
        cout<<v.size()<<endl;
        curPtr = head;
        int l = 0;
        int r = v.size()-1;
        int i = 0;

        while(l < r)
        {
            if (i%2 == 0)
            {
                curPtr = v[l];
                curPtr->next = v[r];
                l++;
            }
            else{
                curPtr = v[r];
                curPtr->next = v[l];
                r--;
            }
            i++;
            curPtr = curPtr->next;
        }
        curPtr->next=nullptr;
    }
};
