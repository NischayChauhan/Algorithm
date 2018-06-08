/**
Once upon a time, there lived a princess in a very tall castle. Since she was the princess, she had all sorts of garments and accessories. Some she liked, some she did not. Particularly, she was fond of keeping all the jewelry in accordance with the dresses.

She has numbered the dresses and jewelry, each starting from 1. She wants to keep track of all the jewelry she thinks are matching with a particular dress. However it is possible that she may find that a particular piece of neck-less matching with more than one dress. So naturally, instead of storing actual physical objects, she keeps track of all the jewelry by its unique number, complimenting with a specific dress.

Your task is to help the princess to organize her dresses and jewelry using C++ object oriented programming. (it means design "struct" for a dress, think about how will you associate the jewelry. How will you store information about each dress)

Also, don't forget that she is the princess, so she can change her mind after a while and tell you to remove an ornament matching with a particular dress. or tell you to add one more. ( Hint : use member function )

Note : Purpose of this exercise is to realize how OOP can be useful in solving real life problems. It also focuses on how to convert problem as concrete, programming exercise
*/
#include<iostream>
using namespace std;

struct jewelry{
    int j;
};
struct dress{
    int d;
};
struct pairOfJND{
    jewelry j;
    dress d;
    void makePair(jewelry const &J,dress const &D);
};
void pairOfJND::makePair(jewelry const &J,dress const &D){
 		j=J;d=D;       
    }
int main(){
	jewelry j1,j2;
	cout<<"input unique identification number for 2 jewelry";
	cin>>j1.j>>j2.j;

	dress d1,d2,d3,d4;
	cout<<"input number for 4 dress";
	cin>>d1.d>>d2.d>>d3.d>>d4.d;

	cout<<"maked pairs";

	pairOfJND p1,p2,p3,p4;
	p1.makePair(j1,d1);
	p2.makePair(j1,d2);
	p3.makePair(j2,d3);
	p4.makePair(j1,d4);

return 0;
}