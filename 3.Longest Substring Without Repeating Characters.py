#Given a string s, find the length of the longest substring without repeating characters.



class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
      if s=="":
        return 0
      st=0
      e=0
      n=set();
      m=0
      while e<len(s):
        if s[e] not in n:
          n.add(s[e])
          e+=1
          m=max(m,len(n))
        else:
          n.remove(s[st])
          st+=1
      return m    
