class Solution {
public:
    bool isPalindrome(int x){
        if(x<0) return false;
    
        int r;
        long long rev=0;
        int temp=x;



        while(temp>0){
            r=temp%10;
            if(rev>INT_MAX/10 || r==INT_MAX/10&&r>7){
                return 0;
            }
            if(rev<INT_MIN/10 || r==INT_MIN/10&&r<-8){
                return 0;
            }
            rev=rev*10+r;
            temp=temp/10;
        }
        return(x==rev);
      
       
    }    

        
};