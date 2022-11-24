// problem link : https://leetcode.com/problems/3sum/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// vector<int> get_pair(vector<int> &nums2,int sum,int start)
//     {
//         vector<int> temp;
//         int end = nums2.size()-1;
//         while(start<end)
//             {
//                 if(nums2[start] + nums2[end] == sum)
//                     {
//                         temp.push_back(nums2[start]);
//                         temp.push_back(nums2[end]);
//                     }
//                 else if(nums2[start]+nums2[end]>sum)
//                     {
//                         end--;
//                     }
//                 else 
//                     start++;
//             }
//         cout<<temp.size()<<endl;
//         return temp;
//     }
// vector<vector<int>> threeSum(vector<int>& nums) 
//     {
//         int remaining_sum = 0;
//         vector<vector<int>> result;
//         sort(nums.begin(),nums.end());
//         for(int i = 0 ; i < nums.size()-2;i++)
//             {
//                 vector<int> temp;
//                 remaining_sum -= i;
//                 temp = get_pair(nums,remaining_sum,i+1);
//                 //cout<<temp.size()<<endl;
//                 if(temp.size() == 2)
//                     {
//                         temp.push_back(i);
//                         result.push_back(temp);
//                     }
//                 //temp.erase(temp.begin(),temp.end());
//             }
//         return result;
//     }

vector<vector<int>> threeSum(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        int size = nums.size();
        for(int i = 0 ; i < size-2 ; i++)
            {
                if(i == 0 || i>0 && (nums[i]!=nums[i-1]))
                    {
                        int low = i+1;
                        int high = size-1;
                        int sum = 0-nums[i];

                        while(low<=high)
                            {
                                if(nums[low] + nums[high] == sum){
                                    vector<int> temp;
                                    temp.push_back(nums[low]);
                                    temp.push_back(nums[high]);
                                    temp.push_back(nums[i]);
                                    result.push_back(temp);

                                    while(low<high && nums[low]==nums[low+1])//removing duplicates from start
                                        low++;
                                    while(low<high && nums[high]==nums[high-1])//removing duplicates from end
                                        high--;

                                    low++;
                                    high++;
                                }
                                else if(nums[low] + nums[high] < sum)
                                    {
                                        low++;
                                    }
                                else 
                                    {
                                        high++;
                                    }
                            }
                    }
            }
        return result;
    }
int main()
    {
        vector<int> nums{-1,0,1,2,-1,-4};
        threeSum(nums);
        return 0;
    }
