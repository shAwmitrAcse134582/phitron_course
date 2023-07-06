#include <bits/stdc++.h> 
queue<int> reverseElements(queue<int> q, int k)
{
    stack<int>st;
    while(k--){
        st.push(q.front());
        q.pop();
    }
    queue<int>newQ;
    while(!st.empty()){
        newQ.push(st.top());
        st.pop();
    }
    while(!q.empty()){
        newQ.push(q.front());
        q.pop();
    }
    return newQ;

}
