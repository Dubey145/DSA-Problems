class Solution {
public:
    vector<int> findArray(vector<int>& pref)
    {
        int currentXor = pref[0];
        vector<int>xorArray;
        xorArray.push_back(currentXor);
        for(int i = 1; i < pref.size(); i++)
        {
            xorArray.push_back(pref[i]^pref[i-1]);
        }
        return xorArray;
    }
};
