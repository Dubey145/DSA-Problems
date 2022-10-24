//https://leetcode.com/problems/find-players-with-zero-or-one-losses/

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) 
    {
        vector<vector<int>> answer;
        unordered_set<int> players;
        unordered_map<int,int> lost_track;
        for(int i = 0; i <matches.size();i++)
        {
            players.insert(matches[i][0]);
            players.insert(matches[i][1]);
            lost_track[matches[i][1]]++;
        }
        
        //finding people who never lost
        vector<int> winners;
        for(int i = 0; i < matches.size();i++)
        {
            if(players.find(matches[i][1]) != players.end())
                players.erase(matches[i][1]);
        }
        for(auto it : players)
        {
            winners.push_back(it);
        }
        sort(winners.begin(),winners.end());
        answer.push_back(winners);
        
        vector<int> losers;
        for(auto it : lost_track)
        {
            if(it.second == 1)
            {
                losers.push_back(it.first);
            }
        }
        sort(losers.begin(),losers.end());
        answer.push_back(losers);
        return answer;
    }
};
