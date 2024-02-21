class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int n=0;
       while(left!=right){
           n++;
           left=left>>1;
            right=right>>1;
       }
        return left<<n;
    }
};
