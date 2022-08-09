//https://leetcode.com/problems/palindrome-number/submissions/
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        else{
                long int rev=0,rem;
                int num=x;
                while(num>0)
                {
                rem=num%10;
                rev=rev*10+rem;
                num/=10;
                }
            if(rev==x)
                return true;
            else
                return false;
            }
    }
};