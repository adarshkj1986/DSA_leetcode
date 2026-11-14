class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int a=0;
        int b=citations.size()-1;
        while(a<=b){
            int mid=a+(b-a)/2;
            int h=citations.size()-mid;
            if(citations[mid]==h){
                return h;
            }
            else if(citations[mid]<h){
                a=mid+1;
            }
            else{
                b=mid-1;
            }
        }
        return citations.size()-a;
    }
};