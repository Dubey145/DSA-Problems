class Solution {
public:
    int countPoints(string rings) {
        unordered_map<char,int> map;
        for(int i = 1; i < rings.size(); i+=2)
        {
            map[rings[i]] ++;
            
        }
        int count = 0;
        
        for(auto it : map)
        {
            cout<<it.first<<" "<<it.second<<endl;
            if(it.second>=3)
            {
                bool red = false, green = false, blue = false;
                for(int j = 1;j < rings.size();j+=2)
                {
                    if(rings[j-1] == 'R' && rings[j]==it.first) red = true;
                    if(rings[j-1] == 'G' && rings[j]==it.first) green = true;
                    if(rings[j-1] == 'B' && rings[j]==it.first) blue = true;
                }
                if(red&blue&green)
                    count++;
            }   
        }
    return count;
    }
};
