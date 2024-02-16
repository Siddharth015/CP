class Solution {
public:
    bool isPalindrome(int x) {
        long long s=0;
        long long temp=x;
        if(x<0) return false;
        while(temp!=0){
int rem=temp%10;
s=s*10+rem;
temp/=10;

        }
        return(x==s);
    }
};