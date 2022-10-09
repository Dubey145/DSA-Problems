//https://leetcode.com/problems/reorder-list/
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
    void reorderList(ListNode* head) 
    {
        vector<ListNode*> address;
        ListNode * temp = head;
        while(temp!=NULL)
        {
            address.push_back(temp);
            temp = temp->next;
        }
        int i =0;
        for(i =0; i<address.size()/2;i++)
        {
            address[i]->next = address[address.size()-i-1];
            address[address.size()-i-1]->next = address[i+1];
        }
        address[i]->next = NULL;
    }
};
