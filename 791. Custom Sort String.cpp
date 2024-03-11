class Solution {
public:
    string customSortString(string order, string s) 
    {
        string s1="";
        map<char,int>mp;
        for(char ch:s) mp[ch]++;
        for(char ch:order)
        {
            if(mp.find(ch)!=mp.end())
            {
                while(mp[ch]--)
                    s1+=ch;
            }
        }
        for(auto ch:mp)
        {
            if(s1.find(ch.first)==string::npos)
            {
                while(ch.second--)
                    s1+=ch.first;
            }
        }
        return s1;
    }
};
