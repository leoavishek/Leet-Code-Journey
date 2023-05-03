//DP Approach
class Solution {
public:
    int climbStairs(int n) {
        vector<int> stair;
        stair.push_back(0);
        stair.push_back(1);
        stair.push_back(2);
        for(int i=3;i<=n;i++){
            int l=(stair[i-1]+stair[i-2]);
            //cout<<l;
            stair.push_back(l);
        }
        return stair[n];
    }
};