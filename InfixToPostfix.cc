#include <bits/stdc++.h>

using namespace std;
bool isHigher(char a,char b){
	if(a == '^' || a == b) return true;
	if(a == '*' || a == '/'){if(b == '^') return false; else return true;}
	if(a == '+' || a == '-'){if(b == '(') return true; else return false;}
	if(a == '(') return false;
}
void infix2postfix(char infix[],char postfix[],int size){
	stack<char> opr;
	char ans[size];
	int i=0,j=0;

	while(infix[i]!='\0'){
		if(infix[i]=='+' ||infix[i]=='-' ||infix[i]=='*' ||infix[i]=='/' ||infix[i]=='('){
			if(opr.empty()){
				opr.push(infix[i]);
				i++;
				continue;
			}
			else{
				char x=opr.top();
				if(isHigher(infix[i],x)){
					opr.push(infix[i]);
					i++;
				}
				else{
						ans[j]=opr.top();
						opr.pop();
						j++;
				}
			}
		}
		else if(infix[i] == ')'){
					while(opr.top()!='('){
						ans[j]=opr.top();
						opr.pop();
						j++;
					}
					opr.pop();
		i++;
		}
		else{
			ans[j]=infix[i];
			j++;
			i++;
		}
	}


	while(!opr.empty()){
		ans[j]=opr.top();
		opr.pop();
		j++;
	}


	cout<<"answere: \t"<<j<<" "<<size<<" ";
	for(int q=0;q<size;q++)cout<<ans[q];
	cout<<endl;


	cout<<postfix<<endl;
	memset(postfix,' ',50);
	cout<<postfix<<endl;
	strncpy(postfix,ans,j);
	cout<<postfix<<endl;
}
int main(){
	vector<char> infix,postfix;
	cout<<"Give an infix String";
	ins:
	char x;
	cin>>x;
	cout<<x;
	if(x!='\0'){
		cout<<"insert";
		infix.push_back(x);
		goto ins;

		cout<<"..........";
	}
	 else{
	 	cout<<infix.front()<<infix.back();
	//   infix2postfix(infix,postfix);
	//   cout<<infix<<" "<<postfix;
	}
}