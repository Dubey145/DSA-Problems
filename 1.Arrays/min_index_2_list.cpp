// problem link : 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 vector<string> findRestaurant(vector<string>& list1,vector<string>& list2) 
    {
         //uwu brute force O(n2) no hesmep        
        vector<string> result;
        string res;
        int sum;
        int min_sum= INT_MAX;
        for(int i = 0 ; i<list1.size();i++)
            {
                for(int j = 0 ; j < list2.size();j++)
                    {
                        if(list1[i] == list2[j])
                            {
                                sum = i + j;
                                if(sum<min_sum)
                                    {
                                        min_sum = sum;
                                        res = list1[i];
                                        break;
                                    }
                                if(sum == min_sum)
                                    {
                                        result.push_back(list1[i]);
                                        break;
                                    }
                                
                            }
                    }   
            }
       
            result.push_back(res);
                    

        return result;
    }

int main()
    {
        vector<int> nums{};


        return 0;
    }