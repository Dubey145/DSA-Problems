//need better code tomorrow
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
    ListNode* deleteMiddle(ListNode* head) 
    {
        ListNode * temp = head;
        int size = -1;
        
        while(temp!=NULL)
        {
            size++;
            temp = temp->next;
        }
        temp = head;
        cout<<size;
        int mid = size/2;
        if(size%2==0) mid = mid-1;
        
        while(mid>0)
        {
            if(temp!=NULL)
                temp = temp->next;
            
            mid--;
        }
        //temp->next = temp->next->next;
        return head;
    }
};

