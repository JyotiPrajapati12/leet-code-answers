#Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
#Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
class Solution:
    def reverse(self, x: int) -> int:
        rev = 0
        s = -1 if x < 0 else 1
        x *= s
        while x > 0:
            rem = x % 10
            rev = rev * 10 + rem
            x //= 10
        if not -2147483648 < rev < 2147483647:
            return 0    
        
        return s*rev    
