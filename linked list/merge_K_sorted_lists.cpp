//https://leetcode.com/problems/merge-k-sorted-lists/

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
    vector<int> elements;
    
    ListNode* createList(vector<int> elements)
    {
        if(elements.size() == 0) return NULL;
        ListNode * head = new ListNode(elements[0]);
        ListNode * temp = head;
        for(int i = 1; i<elements.size(); i++)
        {
            ListNode * newNode = new ListNode(elements[i]);
            temp->next = newNode;
            temp = temp->next;
        }
        return head;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        if(lists.size() == 0) return NULL;
        
        for(int i = 0; i< lists.size();i++)
        {
            ListNode * temp = lists[i];
            while(temp!=NULL)
            {
                elements.push_back(temp->val);
                temp = temp->next;
            }
        }
        sort(elements.begin(),elements.end());
        ListNode * head = createList(elements);
        return head;
    }
};
