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
    int getSize(ListNode* head)
    {
        int count = 0;
        while(head!= NULL)
        {
            count++;
            head = head->next;
        }
        cout<<count;
        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        
        ListNode* prev;
        ListNode* next;
        ListNode* current = head;
        int count = 0;
        int size = getSize(head);
        
        if(n == size)
        {
            head = head->next;
            return head;
        }
        
        while(current->next != NULL)
        {
            count++;
            prev = current;
            next = current->next->next;
            
            if(size-count == n)
            {
                prev->next = next;
                break;
            }
            current = current->next;
        }
        return head;
    }
};
