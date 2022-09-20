//https://leetcode.com/submissions/detail/804381478/
class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        paragraph = paragraph + " ";
        
        unordered_map<string,int> map;
        unordered_set<string> ban;
        
        for(string banned_word : banned)
        {
            ban.insert(banned_word);
        }
        
        string word="";
        
        for(char c : paragraph)
        {
            if(isalpha(c))
                word.push_back(tolower(c));
            
            if(c == ' ' || c == '!' || c == '?' || c == '\'' || c == ',' || c ==';' || c =='.')
            {
                if(ban.find(word) == ban.end() && word != "")
                    map[word]++;
                
                word = "";
            }
            // else if(isalpha(c))
            //     word.push_back(tolower(c));
        }
        
        string result = "";
        int max_occr= 0;
        for(auto word : map)
        {
            cout<<word.first<<" "<<word.second<<endl;
            if(word.second>max_occr)
            {
                max_occr = word.second;
                result = word.first;
            }
        }
    return result;
    }
};
