// https://leetcode.com/problems/merge-nodes-in-between-zeros

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
    ListNode* mergeNodes(ListNode* head) 
    {
        vector<int> values;
        ListNode *temp = head->next;
        int current_sum =0;
        
        while(temp!=NULL)
        {
            if(temp->val == 0)
            {
                values.push_back(current_sum);
                current_sum = 0;
            }
            else 
            {
                current_sum+= temp->val;
            }
            temp=temp->next;
        }
        ListNode *newHead = NULL;
        ListNode *prev = newHead;
        for(int number : values)
        {
            ListNode *newNode = new ListNode(number);
            if(newHead == NULL)
            {
                newHead = newNode;
                prev = newHead;
            }
            else 
            {
                prev->next = newNode;
                prev = newNode;
                prev->next = NULL;
            }
        }
        return newHead;
    }
};
