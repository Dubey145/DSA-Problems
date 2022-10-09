//https://leetcode.com/problems/sort-list/

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
    ListNode* sortList(ListNode* head) 
    {
        vector<int> nums;
        while(head!=NULL) 
        {
            nums.push_back(head->val);
            head = head->next;
        }
        
        sort(nums.begin(),nums.end());
        ListNode* current;
        
        for(int i =0; i< nums.size();i++)
        {
            ListNode * temp = new ListNode(nums[i]);
            if(head ==  NULL)
            {
                head = temp;
                current = head;
            }
            else 
            {
                current->next = temp;
                current = temp;
            }
        }
        return head;
    }
};
