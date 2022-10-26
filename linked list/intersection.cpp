//https://leetcode.com/problems/intersection-of-two-linked-lists

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        unordered_set<ListNode*> A;
        
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        
        while(tempA!=NULL)
        {
            A.insert(tempA);
            tempA = tempA->next;
        }
        while(tempB!=NULL)
        {
            if(A.find(tempB) != A.end())
            {
                return tempB;
            }
            tempB = tempB->next;
        }
        
        return NULL;
    }
    
};
