class Solution {

public:
    int reverse(long long x) {
        long long rev=0;
        int r;
         while(x!=0){
            r=x%10;
            if(rev>INT_MAX/10||(rev==INT_MAX/10&&r>7)){
                return 0;
            }
             if(rev<INT_MIN/10||(rev==INT_MAX/10 && r<-8)){
                return 0;
             }

            rev=rev*10+r;
            x=x/10;
      
        }
        return rev;
       
       
      
       
    }
    int main(){
        long long x;
        cout<<"enter the x";
        cin>>x;
        cout<<reverse((long long) x);
        return 0;
    }

    
};