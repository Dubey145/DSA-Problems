//https://leetcode.com/problems/remove-stones-to-minimize-the-total/

class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) 
    {
        int sum = 0;

        for(int pile : piles) sum += pile;

        priority_queue<int> pq(piles.begin(),piles.end());

        while(!pq.empty() && k--)
            {
                int current = pq.top();
                pq.pop();
                
                sum -= current/2;
                current -= current/2;

                pq.push(current);
            }
        return sum;
    }
};

