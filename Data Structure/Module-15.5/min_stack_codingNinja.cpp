#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{
	// Write your code here.
	
	public:
	     stack<int>s1,minst;
		
		// Constructor
		minStack() 
		{ 
			// Write your code here.
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			// Write your code here.
            s1.push(num);
			if(minst.empty() || num<= minst.top()) minst.push(num);
            
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			// Write your code here.
			if(s1.empty()) return -1;
            if(s1.top()==minst.top()) minst.pop();
            int x = s1.top();
            s1.pop();
            return x;
			
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			// Write your code here.
			if(s1.empty()){
				return -1;
			}
			return s1.top();
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			// Write your code here.
            if(minst.empty()) return -1;
			return minst.top();
		}
};