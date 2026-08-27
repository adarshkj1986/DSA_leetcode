class Solution {
public:
    int fib(int n) {
      int a=0;
      int b=1;
      if(n==0 || n==1){
        return n;
      }
      int next_term;
      while(n>1){
        next_term=a+b;
        a=b;
        b=next_term;
        n--;
      }
      return next_term;
    }
};