#include<iostream>
using namespace std;
int password;
int ans = 33*44;
int main(){
    Here:
    cout<<"Please enter password:";
    
    cin>>password;
    
    while(password!=ans){
        cout<<"Password worng!"<<endl;
        goto Here;
    }

    cout<<"password ture!";
    return 0;
}