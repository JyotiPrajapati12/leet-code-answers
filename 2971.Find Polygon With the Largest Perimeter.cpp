class Solution {
public:
    long long largestPerimeter(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        long long n=nums.size();
        long long perimeter=0;
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<sum)
            {
                perimeter=sum+nums[i];
            }
            sum+=nums[i];     

        }
        if(perimeter==0)
            return -1;
        else
            return perimeter;
        
    }
};
