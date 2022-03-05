#include<iostream>
using namespace std;
int password;
int main(){
    Here:
    cout<<"Please enter password:";
    
    cin>>password;
    
    while(password!=20070519){
        cout<<"Password worng!"<<endl;
        goto Here;
    }

    cout<<"password ture!";
    return 0;
}