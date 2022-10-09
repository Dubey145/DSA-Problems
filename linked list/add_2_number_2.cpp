//without reverse- solution pending

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> first;
        vector<int> second;
        
        ListNode *t1 = l1;
        ListNode *t2 = l2;
        
        while(t1!=NULL)
        {
            first.push_back(t1->val);
            t1=t1->next;
        }
        while(t2!=NULL)
        {
            second.push_back(t2->val);
            t2=t2->next;
        }
        
        int i = first.size()-1;
        int j = second.size()-1;
        int carry = 0;
        
        while(i>=0 && j>=0)
        {
            if(first[i] + second[j]+carry>=10)
            {
                first[i] = (first[i] + second[j]+carry)%10 ;
                carry =1;
            }
            else 
            {
                first[i] = first[i] + second[j]+carry;
                carry = 0;
            }
            i--;
            j--;
        }
        for(auto number : first) cout<<number;
        
        ListNode * temp = l1;
        ListNode *newHead = NULL;
        if(carry == 1)
        {
            newHead = new ListNode(1,temp);
        }
        else
        {
            newHead = temp;
        }
        i = 0;
        while(temp!=NULL)
        {
            temp->val = first[i];
            i++;
            temp = temp->next;
        }
       return newHead;
    }
};
