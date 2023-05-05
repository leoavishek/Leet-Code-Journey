class Solution {
public:
    int maxVowels(string s, int k) {
        int curr=0,ans=0;
        for(int i=0;i<s.length();i++){
            if(i>=k and (s[i-k]=='a'||s[i-k]=='e'||s[i-k]=='i'||s[i-k]=='o'||s[i-k]=='u'))
                curr-=1;
            if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'))
                curr+=1;
            ans=max(ans,curr);
        }
        return ans;
    }
};