class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> map;
        //s1.append(" ");
        //s2.append(" ");
        string word = "";
        for (auto x : s1)
        {
            if (x == ' ')
            {
                cout << word << endl;
                map[word]++;
                word = "";
            }
            else 
            {
                word = word + x;
            }
        }  
        map[word]++;
        word = "";
        for (auto x : s2)
        {
            if (x == ' ')
            {
                cout << word << endl;
                map[word]++;
                word = "";
            }
            else 
            {
                word = word + x;
            }
        }  
        map[word]++;
        vector<string> res;
        for(auto it : map)
        {
            if(it.second == 1)
            {
                res.push_back(it.first);
            }
        }
        return res;
    }
};
