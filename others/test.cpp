#include<iostream>
using namespace std;
unsigned long long int n = 0;
unsigned long long int f(unsigned long long int n){
    if(n==0)
    return 0;
    else
    return 2*f(n-1)+1;
}

int main(){
    cout<<"Pieces:";
    cin>>n;
    cout<<"Times:"<<f(n)<<endl;
    return 0;
}