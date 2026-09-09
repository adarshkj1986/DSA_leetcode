class Solution {
public:
    long long countCommas(long long n) {
        long a=0;
        for(long i=1000;i<=n;i*=1000){
            a+=n-i+1;
        }
        return a;
    }
};