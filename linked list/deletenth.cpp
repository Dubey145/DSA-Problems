//delete nth node from the end of a linked list using fast and slow pointer
//https://leetcode.com/problems/remove-nth-node-from-end-of-list/

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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode* slow = head;
        ListNode* fast = head;
        
        for(int i = 0; i < n; i++)
        {
            fast = fast->next;
        }
        if(fast == NULL) return head->next;
        
        while(fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next;
        }
        ListNode * toDelete = slow->next;
        slow->next = slow->next->next;
        delete (toDelete);
        
        return head;
    }
};
