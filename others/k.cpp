#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b[a];
    int f;

    for(int c=0;c<a;c++){
        cin>>b[c];
    }

    int tmp=0;
    cin>>f;
    for(int c=0;c<a;c++){
        tmp=b[c];
        if(tmp==f){
            cout<<c+1;
        }
    }
    return 0;
}