#Given an integer x, return true if x is a palindrome, and false otherwise.

class Solution:
    def isPalindrome(self, x: int) -> bool:
      if x<0:
        return False
      rev=0
      temp=x
      while temp:
        rev=rev*10+temp%10  
        temp//=10
      return rev==x  
