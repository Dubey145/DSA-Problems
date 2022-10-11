//https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/
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
    int pairSum(ListNode* head) {
        vector<int> leetcode;
        while(head!=NULL)
        {
            leetcode.push_back(head->val);
            head = head->next;
        }
        int max_sum = leetcode[0]+leetcode[leetcode.size()-1];
        for(int i = 1; i <leetcode.size()/2;i++)
        {
            max_sum = max(max_sum,leetcode[i] + leetcode[leetcode.size()-1-i]);
        }
        return max_sum;
    }
};
