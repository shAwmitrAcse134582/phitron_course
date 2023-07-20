void reverseStack(stack<int> &s) {
    int x=s.top();
    s.pop();
    reverseStack(s);
    return s;
}