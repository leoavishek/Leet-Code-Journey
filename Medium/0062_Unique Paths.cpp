class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> p(m, vector<int>(n, 1));
        p[0][0]=0;
        p[0][1]=p[1][0]=1;
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                p[i][j]=p[i][j-1]+p[i-1][j];
            }
        }
        return p[m-1][n-1];
    }
};