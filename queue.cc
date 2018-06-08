#include<bits/stdc++.h>

using namespace std;

int main(){
	queue<char> q1,q2;
	char element='A';
	for(int i=0;i<5;i++){
		q1.push(element);
		element++;
	}
	for(int i=0;i<5;i++){
		q2.push(element);
		element++;
	}

	while(!q1.empty()){
		cout<<"\nFRONT: "<<q1.front()<<"\t BACK: "<<q1.back();
		q1.pop();
	}
	while(!q2.empty()){
		cout<<"\nFRONT: "<<q2.front()<<"\t BACK: "<<q2.back();
		q2.pop();
	}


}