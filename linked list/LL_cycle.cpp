//cycle in a linked list 

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
    bool hasCycle(ListNode *head) {
    //O(n) sc 
        unordered_set<ListNode*> set;
        ListNode * temp = head;
        int counter = 0;
        
        while(temp!=NULL)
        {
            if(set.find(temp) == set.end())
                set.insert(temp);
            else
                return true;
           temp = temp->next;
        }
        return false;
    }
};
//O(1) SC
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
    bool hasCycle(ListNode *head) 
    {
        //FLOYD'S Cycle Detection algo
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)
                return true;
        }
        return false;
    }
};

