#include <bits/stdc++.h> 
string kevinStackProblem(string &s)
{
	stack<char>st;
	for(auto c:s){
		st.push(c);
	}
	string s2="";
	while(!st.empty()){
		s2+=st.top();
		st.pop();
	}
	return s2;
}
