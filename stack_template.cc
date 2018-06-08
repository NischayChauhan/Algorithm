#include<stack>
#include<iostream>
using namespace std;
int main(){
	stack<int> s1,s2;
	for(int i=0;i<30;i++){
		s1.push(i);
	}
	cout<<endl<<"The size of s1"<<s1.size();
	cout<<endl<<"s1: ";
	for(int i=0;i<20;i++){
		cout<<s1.top()<<"|";
		s1.pop();
	}
	cout<<endl<<"The size of s1"<<s1.size();
	swap(s1,s2);
	cout<<endl<<"The size of s1"<<s1.size();
	cout<<endl<<"The size of s2"<<s2.size();
	cout<<endl<<"s2: ";
	while(!s2.empty()){
		cout<<s2.top()<<"|";
		s2.pop();
	}

}