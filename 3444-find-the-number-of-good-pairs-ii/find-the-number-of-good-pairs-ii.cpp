class Solution {
public:
    long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
       
        unordered_map<int, long long> freq;

        for (int x : nums2) {
            freq[x * k]++;
        }

        long long count = 0;

        for (int x : nums1) {
            if (x == 0) {
                continue;
            }

            for (int d = 1; d * d <= x; d++) {
                if (x % d == 0) {
                    if (freq.count(d)) {
                        count += freq[d];
                    }

                    int other = x / d;
                    if (other != d && freq.count(other)) {
                        count += freq[other];
                    }
                }
            }
        }

        return count;
    }
};
      
    
       
 