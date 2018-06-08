#include<iostream>
using namespace std;

template <class t1,class t2> class abc{
	t1 a;
	t2 b;
public:
	void setAB(){
		cout<<"set\n";
		cin>>a>>b;
	}
	void getAB(){
		cout<<"get\n";	
		cout<<a<<" "<<b;
	}
};
int main(){
	abc<int,bool> a;
	a.setAB();
	a.getAB();
}