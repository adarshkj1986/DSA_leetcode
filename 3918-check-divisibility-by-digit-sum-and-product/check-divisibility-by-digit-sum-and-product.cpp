class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int pro=1;
        int temp=n;
       
        while(temp>0){
            int r=temp%10;
            if(r<0){
                return 0;
            }
            sum=sum+r;
            pro=pro*r;
            temp=temp/10;
        }
        int m=sum+pro;
        if(n%m==0){
            return true;
        }
        else{
            return false;
        }
        
      
    }
};