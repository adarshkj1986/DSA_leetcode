class Solution {
public:
    bool isHappy(int n) {
        int r;
        int sum=0;
        unordered_set<int>st;
        while(n!=1){
           if(st.find(n)!=st.end()){
            return false;
           }
           st.insert(n);
           while(n>0){
            r=n%10;
            sum+=r*r;
            n=n/10;
           }
           n=sum;
           sum=0;
           
        }
        return n==1;
    
    }
};