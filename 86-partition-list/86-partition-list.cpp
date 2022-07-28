class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* left = new ListNode(-1);
        ListNode* right = new ListNode(-1);
        ListNode* templ = left;
        ListNode* tempr = right;
        ListNode* temp = head;
        while(temp!=NULL){
            if(temp->val < x){
                ListNode* newn = new ListNode(temp->val);
                templ->next = newn;
                templ = newn;
            }
            else{
                ListNode* newn = new ListNode(temp->val);
                tempr->next = newn;
                tempr = newn;
            }
            temp = temp->next;
        }
        templ->next = right->next;
        right->next = NULL;
        tempr->next = NULL;
        head = left->next;
        return head;
    }
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 *//*
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        
    }
};*/