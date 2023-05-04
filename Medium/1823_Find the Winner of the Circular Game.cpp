class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int> win;
        for(int i=1;i<=n;i++)
            win.push(i);
            int i=1;
        while(win.size()!=1){
            if(k==i){
                win.pop();
                i=1;
            }
            else{
                win.push(win.front());
                win.pop();
                i++;
            }
        }
        return win.front();
    }
};