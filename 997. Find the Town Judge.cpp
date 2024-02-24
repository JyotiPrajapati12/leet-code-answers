class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) 
    {
        vector<int> v0(n+1), v1(n+1);
        for(auto x:trust)
        {
            v0[x[0]]++;
            v1[x[1]]++;

        }
        for(int i=1;i<=n;i++)
        {
            if(v1[i]==n-1 && v0[i]==0)
            {
                return i;
            }
        }
        return -1;
    }
};
