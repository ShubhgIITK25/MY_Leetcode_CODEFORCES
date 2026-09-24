class Solution {
public:
    bool isPalindrome(int x) {
        long n = 0;
        long a = x;
        while(x>0){
            if(n>INT_MAX) return -1;
            n = n*10 + x%10;
            x = x/10;
        }
        return(n==a)? true:false;
    }
};