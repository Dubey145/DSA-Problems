//bfs in a graph
//https://leetcode.com/problems/find-if-path-exists-in-graph
class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>> map;
        for(auto it : edges)
            {
                map[it[0]].push_back(it[1]);
                map[it[1]].push_back(it[0]);
            }
        queue<int> q;
        q.push(source);
        vector<bool> visited(n,false);
        visited[source] = true;
        
        while(!q.empty())
            {
                int currentNode = q.front();
                q.pop();
                if(currentNode == destination) return true;
                for(int node : map[currentNode])
                    {
                        if(!visited[node])
                            {
                                q.push(node);
                                visited[node] = true;
                            }
                    }
            }
        return false; 
    }
};
