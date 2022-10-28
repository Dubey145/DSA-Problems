//https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/

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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        ListNode * temp = head;
        ListNode * prev = NULL;
        
        while(temp != NULL && temp->next != NULL)
        {
            if(temp->val == temp->next->val)
            {
                
                while(temp->next != NULL && temp->val == temp->next->val)
                {
                    temp = temp->next;
                }
                temp=temp->next;
                if(prev!= NULL)
                    prev->next = temp;
                
                else
                {
                    head = temp;
                }
            }
            else 
            {
                prev = temp;
                temp = temp->next;
            }
        }
        return head;
    }
};
