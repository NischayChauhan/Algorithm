// Question
// You have three stacks of cylinders where each cylinder has the same diameter, but they may vary in height. You can change the height of a stack by removing and discarding its topmost cylinder any number of times.

// Find the maximum possible height of the stacks such that all of the stacks are exactly the same height. This means you must remove zero or more cylinders from the top of zero or more of the three stacks until they're all the same height, then print the height. The removals must be performed in such a way as to maximize the height.

// Note: An empty stack is still a stack.

// Input Format

// The first line contains three space-separated integers,n1 ,n2 , and ,n3 describing the respective number of cylinders in stacks 1, 2,and 3. The subsequent lines describe the respective heights of each cylinder in a stack from top to bottom:

// The second line contains  space-separated integers describing the cylinder heights in stack n1.
// The third line contains  space-separated integers describing the cylinder heights in stack n2.
// The fourth line contains  space-separated integers describing the cylinder heights in stack n3.
// Output Format
// Print a single integer denoting the maximum height at which all stacks will be of equal height.

// Sample Input

// 5 3 4
// 3 2 1 1 1
// 4 3 2
// 1 1 4 1
// Sample Output

// 5

// 3 			2		 1	 1	 1	= 8 	-1-1 = 7
// 4				 3			 2	=9 		-2 = 7
// 1	 1	 4				 1		=7		

#include<stack>
#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e,f;
	cin>>a>>b>>c;
	d=a;e=b;f=c;
	stack<int> N1,N2,N3;
	int x,c1=0,c2=0,c3=0;
	while(a--){
		cin>>x;
		c1+=x;
		N1.push(x);
	}
	while(b--){
		cin>>x;
		c2+=x;
		N2.push(x);
	}
	while(c--){
		cin>>x;
		c3+=x;
		N3.push(x);
	}
	stack<int> n1,n2,n3;
	while(d--){
		n1.push(N1.top());
		N1.pop();
	}
	while(e--){
		n2.push(N2.top());
		N2.pop();
	}
	while(f--){
		n3.push(N3.top());
		N3.pop();
	}
	while(1){
		if(c1>c2 && c1>c2){c1-=n1.top();n1.pop();}
		else if(c2>c1 && c2>c3){c2-=n2.top();n2.pop();}
		else if(c3>c1 && c3>c2){c3-=n3.top();n3.pop();}
		else if(c1==c2 && c2==c3){cout<<c1;break;}
	}
	return 0;
}