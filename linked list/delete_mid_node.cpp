//https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/

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
    ListNode* deleteMiddle(ListNode* head) 
    {
        //getting to the middle_element
        ListNode* slow = head;
        ListNode* fast = head;
        if(fast->next == NULL)
        {
            return NULL;
        }
        if(fast->next->next == NULL)
        {
            slow->next = NULL;
            return slow;
        }
        while(fast!= NULL && fast->next != NULL)
        {
            slow = slow->next ;
            fast = fast->next->next;
        }
        //slow has the middle element
        slow->val = slow->next->val;
        slow->next = slow->next->next;

        return head;
    }
};
