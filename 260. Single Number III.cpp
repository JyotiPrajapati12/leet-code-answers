// Given an integer array nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once. You can return the answer in any order.
// You must write an algorithm that runs in linear runtime complexity and uses only constant extra space.

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) 
    {
       int sum=0;int a=0;int b=0;
       for(int x:nums)
       {
           sum^=x;
       } 
       int i=0;
       while(sum!=0)
       {
           i++;
           if((sum&1)==1)
           {
               break;
           }
           sum=sum>>1;
       }
       for(int x: nums)
       {
           if((1<<(i-1))&x)
           {
               a^=x;
           }
           else
           {
               b^=x;
           }
       }
       return {a,b}; 
    }
};
