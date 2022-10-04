//https://leetcode.com/problems/middle-of-the-linked-list/

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
    ListNode* middleNode(ListNode* head) {
        if(head->next == NULL) return head;
        int size =0; 
        ListNode *temp = head;
        while(temp!= NULL)
        {
            size++;
            temp = temp->next;
        }
        int mid = size/2;
        cout<<mid;
        size = 0;
        while(size!=mid)
        {
            size++;
            head = head->next;
        }
        return head;
    }
};
