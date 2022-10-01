//https://leetcode.com/problems/sorting-the-sentence
class Solution {
public:
    string sortSentence(string s) {
        s+=' ';
        unordered_map<int,string>map;
        string word = "";
        for(char c : s)
        {
            if(c<='9' && c >= '1')
                map.insert({int(c)-48,word});
                
            else if(c == ' ')
            {   cout<<word<<endl;
                word = "";}
            else 
                word+=c;
        }
     
        
        bool first = true;
        for(int i = 1; i<10; i++)
        {
            if(map.find(i) != map.end())
            {
                if(!first)
                {
                    word += " ";
                    word+=map[i];
                } 
                else
                {
                    word +=map[i];
                    first = false;
                }       
            }
        }
        return word;
    }
};
