#include<iostream>
using namespace std;
int a = 10;
int v = 23;
int mx(int &a,int &b){
    if(a>b)
    return a;
    else
    return b;
}

int main(){
    cout<<mx(a,v);

}