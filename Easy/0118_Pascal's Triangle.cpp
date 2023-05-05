class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector <int>> tot;
        for(int i=0;i<n;i++)
        {
            vector<int> row(i+1,1);
            tot.push_back(row);
        }
        for(int i=0;i<n;i++){
            for(int j=1;j<i;j++)
            {
                tot[i][j]=tot[i-1][j-1]+tot[i-1][j];
            }
        }
        return tot;
    }
};