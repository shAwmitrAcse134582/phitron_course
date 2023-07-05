class Solution {
public:
    bool backspaceCompare(string s, string t) {
          stack<char>st;
          for(int i=0;i<s.size();i++){
              if(s[i]!='#'){
                  st.push(s[i]);
              }
              else{
                  if(!st.empty())
                  st.pop();
              }
          }
          stack<char>st2;
          for(int j=0;j<t.size();j++){
              if(t[j]!='#'){
                  st2.push(t[j]);
              }
              else{
                  if(!st2.empty())
                       st2.pop();
              }
          }
          if(st==st2){
              return true;
          }
          else {
              return false;
          }
    }
};