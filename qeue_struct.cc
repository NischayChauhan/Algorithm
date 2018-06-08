#include <iostream>
#include <vector>
using namespace std;
struct queueData{
    int x;
};
struct queue{
    queueData a;
    void setData(){
        cin>>a.x;
    }
    void getData(){
        cout<<a.x<<endl;
    }
};
int main() {
    vector<queue> a;
    
    for(int i=0;i<2;i++){
        a[i].setData();
    }
    cout<<"POP data"<<endl;
    for(int i=0;i<2;i++){
        a[i].getData();
    }   
}
