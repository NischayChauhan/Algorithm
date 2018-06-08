#include <bits/stdc++.h>

using namespace std;
class text{
	private:
		stack<char> left;
		stack<char> right;
	public:
		void insertWord(char word[]);
		void insertCharacter(char character);
		bool deleteCharacter();
		bool backSpaceCharacter();
		void moveCursor(int position);
		void moveLeft(int position);
		void moveRight(int position);
		void findAndReplaceChar(char findWhat, char replaceWith);
		void examineTop();
};
void text::insertWord(char word[]){
	int i=0;
	while(word[i]!='\0'){
		insertCharacter(word[i]);
		i++;
	}
}
void text::insertCharacter(char character){
	left.push(character);
}
bool text::deleteCharacter(){
	if(right.size()==0)return false;
	else{
		right.pop();
		return true;
	}
}
bool text::backSpaceCharacter(){
	if(left.size()==0)return false;
	else{
		left.pop();
		return true;
	}
}
/**
These 3 functions are behaviouring as per my current requirements 
remember to modify the k,position ...
*/
void text::moveCursor(int position){
	if(position<left.size()){
		moveLeft(position);
	}
	else{
		moveRight(position-left.size());
	}
}
void text::moveLeft(int position){
	if(left.size()<position){cout<<"Error position out of bound";return;}
	int k = left.size()-position;
	while(k--){
		right.push(left.top());
		left.pop();
	}
}
void text::moveRight(int position){
	if(right.size()<position){cout<<"Error position out of bound";return;}
	int k = right.size()-position;
	while(k--){
		left.push(right.top());
		right.pop();
	}
}
/* above 3 */
void text::findAndReplaceChar(char findWhat, char replaceWith){
	moveCursor(0);
	while(!right.empty()){
		if(right.top()==findWhat){
			right.pop();
			left.push(replaceWith);
		}
		else{
			left.push(right.top());
			right.pop();
		}
	}
}
void text::examineTop(){
	(left.size()!=0)?cout<<"LEFT :"<<left.top():cout<<" EMPTY \n";
	(right.size()!=0)?cout<<"RIGHT :"<<right.top():cout<<" EMPTY \n";
}
int main(){

    int i=0;
    char t[80];
    text txt;
    
    cout << "Enter the word to be inserted: ";
    cin.getline(t,80);
    txt.insertWord(t);
    cout << "Inserting the word:                ";
    txt.examineTop();

    cout << "Enter the word to be inserted: ";
    cin.getline(t,80);
    txt.insertWord(t);
    cout << "Inserting the word:                ";
    txt.examineTop();

    cout << "Move cursor to the position 14:    ";
    txt.moveCursor(14);
    txt.examineTop();

    cout << "Move cursor to the position 17:    ";
    txt.moveCursor(17);
    txt.examineTop();

    for(i=0;i<3;i++){
        if(!txt.deleteCharacter())
            cout << "There is nothing to delete. Move your cursor accordingly to delete the character";
        else 
            cout << "Delete characters using DEL:       ";
            txt.examineTop();
    }

    for(i=0;i<7;i++){
        if(!txt.backSpaceCharacter())
            cout << "There is nothing to delete. Move your cursor accordingly to delete the character";
        else 
            cout << "Delete characters using Backspace: ";
            txt.examineTop();
    }
    
    txt.findAndReplaceChar('t','T');
    cout << "Replace occurrences of t with T:   ";
    txt.examineTop();
   return 0;
}