//https://leetcode.com/problems/delete-node-in-a-linked-list/submissions/

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
    void deleteNode(ListNode* node) {
        //just overwrite the damn thing meh
        node->val = node->next->val;
        node->next = node->next->next;
    }
};
