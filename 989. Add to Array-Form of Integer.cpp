class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) 
    {
        int n=num.size();
        int i=n-1;
        int cry=0;
        vector<int>ans;
        while(i>=0)
        {
            int dig=k%10;
            k=k/10;
            int sum=num[i]+dig+cry;
            ans.push_back(sum%10);
            cry=sum/10;
            i--;
        }
        while(k!=0)
        {
            int dig=k%10;
            k/=10;
            int sum=dig+cry;
            ans.push_back(sum%10);
            cry=sum/10;
        }
        if(cry)
            ans.push_back(cry);
        reverse(ans.begin(), ans.end());
        return ans; 
    }
};
