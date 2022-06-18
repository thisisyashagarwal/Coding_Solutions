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
       unordered_map<ListNode*,bool> mp;
        ListNode*curA=headA;
        ListNode*curB=headB;
        while(curA!=NULL)
        {
            mp[curA]=true;
            curA=curA->next;
        }
        while(curB!=NULL)
        {
            if(mp[curB]==true)
                return curB;
            curB=curB->next;
        }
        return NULL;
    }
};