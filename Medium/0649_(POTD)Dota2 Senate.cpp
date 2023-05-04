class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> qr,qd;
        for(int i=0;i<senate.length();i++){
            (senate[i]=='R')?qr.push(i):qd.push(i);
        }
        while(!qr.empty() and !qd.empty()){
            int a=qr.front(),b=qd.front();
            qr.pop();
            qd.pop();
            (a<b)?qr.push(a+senate.length()):qd.push(b+senate.length());
        }
        return(qr.size()>qd.size())?"Radiant":"Dire";
    }
};