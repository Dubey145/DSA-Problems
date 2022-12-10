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
    ListNode* reverse(vector<int> nodes, int k)
        {
            int start = 0;
            int end = k-1;
            int previousEnd = end;
            while(end<nodes.size())
                {
                    swap(nodes[start],nodes[end]);
                    start++;
                    end--;
                    if(start>end)
                        {
                            
                            start = previousEnd+1; 
                            end = start+k-1;
                            previousEnd = end;
                        }
                }
            ListNode * newHead = new ListNode(nodes[0]);
            ListNode * previous = newHead;

            for(int i = 1; i < nodes.size(); i++)
                {
                    ListNode* newNode = new ListNode(nodes[i]);
                    previous->next = newNode;
                    previous = previous->next;
                }
            for(int number : nodes)
                {
                    cout<<number<<" ";
                }
            return newHead;
        }
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int> nodes;
        ListNode * temp = head;
        int counter = 0;
        while(temp!=NULL)
            {
                nodes.push_back(temp->val);
                temp = temp->next;
            }
        head = reverse(nodes,k);
        return head;
    }
};
