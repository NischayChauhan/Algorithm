#include<bits/stdc++.h>
using namespace std;

struct node{
			int data;
			int leftIndex;
			int rightIndex;
		};
class binaryTree
{
	vector <struct node> bt;
public:
	void makeNode(int data){
		struct node a={data,-1,-1};
		bt.push_back(a);
	}
	void insertInto(int index,int data){
		struct node a = { data, -1, -1};
		if(bt.size()==0){
			makeNode(data);
		}
		else{
			if(data<bt[index].data){
				if(bt[index].leftIndex==-1){
					bt[index].leftIndex=bt.size();
					bt.push_back(a);
				}
				else{
					insertInto(bt[index].leftIndex,data);
				}
			}
			else if(data>bt[index].data){
				if(bt[index].rightIndex==-1){
					bt[index].rightIndex=bt.size();
					bt.push_back(a);
				}
				else{
					insertInto(bt[index].rightIndex,data);
				}
			}
			else{
				cout<<"node already exist";
			}
		}
	}
	void insert(int data){
		insertInto(0,data);
	}
	void print(){
		for(int i=0;i<bt.size();i++){
			cout<<bt[i].data<<" "<<bt[i].leftIndex<<" "<<bt[i].rightIndex<<endl;
		}
	}
	void preOrderTraverse(int index){
		cout<<bt[index].data<<" ";
		if(bt[index].leftIndex!=-1){
			preOrderTraverse(bt[index].leftIndex);
		}
		if(bt[index].rightIndex!=-1){
			preOrderTraverse(bt[index].rightIndex);
		}
	}
	void inOrderTraverse(int index){
		if(bt[index].leftIndex!=-1){
			preOrderTraverse(bt[index].leftIndex);
		}
		cout<<bt[index].data<<" ";
		if(bt[index].rightIndex!=-1){
			preOrderTraverse(bt[index].rightIndex);
		}
	}
	void postOrderTraverse(int index){
		
		if(bt[index].leftIndex!=-1){
			preOrderTraverse(bt[index].leftIndex);
		}
		if(bt[index].rightIndex!=-1){
			preOrderTraverse(bt[index].rightIndex);
		}
		cout<<bt[index].data<<" ";
	}

	void traverse(int index, int order){
	    if(order == -1)
	        cout << bt[index].data << "   ";
	        
	    if(bt[index].leftIndex != -1)
	        traverse(bt[index].leftIndex, order);
	        
	    if(order == 0)
	        cout<<bt[index].data <<  "   ";
	        
	    if( bt[index].rightIndex != -1)
	        traverse(bt[index].rightIndex, order);
	        
	    if(order == 1)
	        cout<<bt[index].data <<  "   ";
	}

};



int  main(){
	binaryTree b1;
    b1.insert(60);
    b1.insert(40);
    b1.insert(20);
    b1.insert(25);
    b1.insert(90);
    b1.insert(23);
    b1.insert(95);
    b1.insert(80);
    b1.insert(85);

	b1.print();
	cout<<"\n\n";
	b1.preOrderTraverse(0);
	cout<<"\n\n";
	b1.inOrderTraverse(0);
	cout<<"\n\n";
	b1.postOrderTraverse(0);
}