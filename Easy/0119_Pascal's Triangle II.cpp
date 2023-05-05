class Solution {
public:
    vector<int> getRow(int n) {
        vector<vector <int>> tot;
        for(int i=0;i<n+1;i++)
        {
            vector<int> row(i+1,1);
            tot.push_back(row);
        }
        for(int i=0;i<n+1;i++){
            for(int j=1;j<i;j++)
            {
                tot[i][j]=tot[i-1][j-1]+tot[i-1][j];
            }
        }
        return tot.at(n);
    }
};