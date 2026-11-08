class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        int m=0;
        for(int i=0;i<satisfaction.size();i++){
            int like=0;
            int time=1;
            for(int j=i;j<satisfaction.size();j++){
                like+=satisfaction[j]*time;
                time++;
            }
            m=max(m,like);
        }
        return m;
    }
};