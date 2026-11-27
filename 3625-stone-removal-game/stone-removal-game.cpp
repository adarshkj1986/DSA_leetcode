class Solution {
public:
    bool canAliceWin(int n) {
        int num=10;
        bool isalice=true;
        while(n>=num){
            n=n-num;
            num--;
            isalice=!isalice;
        }
        return !isalice;
    }
};