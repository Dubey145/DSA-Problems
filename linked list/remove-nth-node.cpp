
/**
 //https://leetcode.com/problems/remove-nth-node-from-end-of-list/submissions/
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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        //2 pass
        ListNode * temp = head;
        if(temp->next == NULL) return NULL;
        int length = 0;
        while(temp!= NULL)
        {
            length++;
            temp = temp->next;
        }
        
        temp = head;
        int count = length-n-1;
        while(count>=0)
        {
            temp = temp->next;
            count--;
        }
        //cout<<temp->val;
        temp->next = temp->next->next;
        return head;
    }
};
