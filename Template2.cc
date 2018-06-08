#include <iostream>
#include <vector>
using namespace std;
void pop_back(vector<int> &v){
    vector<int>::iterator it=v.begin();
    v.erase(it);
}
int main(){
     vector<int> v;
     v.push_back(2);
     v.push_back(3);
     v.push_back(4);
     v.push_back(5);
     v.push_back(6);
     // v.erase(it);
     cout<<v[0];
     pop_back(v);
     for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*it;
     }
}