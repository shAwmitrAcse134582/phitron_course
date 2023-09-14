class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.size();
        int m=t.size();
        bool ok=false;
        int cnt=0;
        for(auto c:t){
            if(c==s[cnt]){
                cnt++;
            }
            if(cnt==n){
                ok=true;
                break;
            }
        }
        if(n==0 && m==0)return true;
        else
        return ok;
    }
};