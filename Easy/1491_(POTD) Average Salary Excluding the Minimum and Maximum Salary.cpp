#include<vector.h>
#include<iostream>
class Solution {
public:
    double average(vector<int>& salary) {
        int n=salary.size();
        sort(salary.begin(),salary.end());
        double sum = accumulate(salary.begin(), salary.end(), 0.0);
        sum-=salary[0];
        sum-=salary[n-1];
        sum/=(n-2);
        return sum;

    }
};