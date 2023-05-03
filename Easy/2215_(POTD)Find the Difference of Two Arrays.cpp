class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> n1(nums1.begin(),nums1.end());
        unordered_set<int> n2(nums2.begin(),nums2.end());
        vector<int> con1,con2;
        for(int num:n1){
            if(n2.count(num)==0)
                con1.push_back(num);
        }
        for(int num:n2){
            if(n1.count(num)==0)
                con2.push_back(num);
        }
        return {con1,con2};
    }
};