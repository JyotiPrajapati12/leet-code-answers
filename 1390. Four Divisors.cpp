//Given an integer array nums, return the sum of divisors of the integers in that array that have exactly four divisors. If there is no such integer in the array, return 0.

class Solution {
public:
    int divisors(int p)
    {
        int sum=0;
        int count =0;
        for(int j=1;j<=sqrt(p);j++)
        {
            if(p%j==0)
            {
                sum+=j;
                count++;
                if(j!=p/j)
                {
                    sum+=(p/j);
                    count++;
                }
            }
             if(count>4)
            {
                return 0;
            }
        }
       if (count==4)
       {
           return sum;
       }
       return 0;
    }
    int sumFourDivisors(vector<int>& nums) 
    {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
           ans+=divisors(nums[i]);
        }
        return ans;
    }
};
