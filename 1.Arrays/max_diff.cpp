// problem link : max value of arr[j] - arr[i] such that j > i // subtract the first occurring element from the second 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// int max_difference(vector<int> nums)
//     {
//         int max_dif = INT_MIN;
//         int max_element = INT_MIN;
//         int min_element = INT_MAX;
//         int max_index=0;
//         int min_index = 0;
//         for(int i = 0 ; i <nums.size();i++)
//             {
//                 if(nums[i]>max_element)
//                     {
//                         max_index = i;

//                         max_element = nums[i];
//                     }
//                 if(nums[i]<min_element) 
//                     {
//                         min_index = i;
//                         min_element = nums[i];
//                     }
//             }
//         cout<<max_element<<" "<<min_element<<endl;
//         //handle edge case where max_index = 0
//         if(max_index != 0)
//             for(int i = 0; i < max_index;i++)
//                 {
//                     max_dif = max(max_element-nums[i],max_dif);
//                 }
//         // else 
//         //     {
//         //         for(int i = 0; i <min_index;i++)
//         //             {
//         //                 max_dif = max(min_element-nums[i],max_dif);
//         //             }
//         //     }
//         return max_dif;
//     }

//better solution and more clear, needs only one pass
int max_difference(vector<int> nums)
    {
        //consider each element as array[j] and keep track of current min and current max difference 
        int current_max_difference = nums[1]- nums[0];
        int min_val = nums[0];

        for(int j = 1; j < nums.size(); j++)
            {
                current_max_difference = max(nums[j]-min_val,current_max_difference); // the new element will either give a better difference or the difference will not change
                min_val = min(min_val,nums[j]); 
                //min val is changed later because j>i if we change it before checking max_difference then max_difference might become 0
            }
        return current_max_difference;   
    }
int main()
    {
        vector<int> nums{30,10,8,2};
        //my approach fails because max index is 0 so max difference becomes int_min
        cout<<max_difference(nums);
        return 0;
    } 