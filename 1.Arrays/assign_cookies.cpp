//https://leetcode.com/problems/assign-cookies/

#include<iostream>
#include<vector>
using namespace std;

 int findContentChildren(vector<int>& g, vector<int>& s) 
    {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        
        int content = 0;
        int i = 0, j = 0;

        while(i<g.size() && j<s.size())
            {
                if(s[j]>=g[i])
                    {
                        s[j] = 0;
                        g[i] = 0;
                        i++;
                        j++;
                        content++;
                    }
                else 
                    {
                        j++;
                    }
            }
        return content;
    }
int findContentChildrenBetter(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        
        int i = 0, j = 0;
        //sort but you dont need to create a content variable or assign 0 to completed operations 
        //it is not required
        while(i<g.size() && j<s.size())
            {
                if(s[j]>=g[i])
                    {
                        i++;
                    }
               
                        j++;
            }
        return i; 
    }
int main()
    {

        return 0;
    }