class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=needle.length();
        int h=haystack.length();
        if(n>h)
            return -1;
        for(int i=0;i<=h-n;i++){
            int j=0;
            if(needle[j]==haystack[i]){
                for(j=0;j<n;j++){
                    if(needle[j]!=haystack[i+j])
                        break;
                }
                if(j==n)
                return i;
            }
        }
        return -1;
    }
};