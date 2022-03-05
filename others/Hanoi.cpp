#include<iostream>
using namespace std;
unsigned long long int n;
unsigned long long int times = 0;

void hanoi(unsigned long long int n,char x,char y,char z){
    if(n==1){
        times+=1;
        cout<<x<<" --> "<<z<<endl;
    }
    else{
        times+=1;
        hanoi(n-1,x,z,y);
        cout<<x<<" --> "<<z<<endl;
        hanoi(n-1,y,x,z);
    }
}

int main(){
    cout<<"Pieces:";
    cin>>n;
    hanoi(n,'X','Y','Z');
    cout<<"Times:"<<times<<endl;
    return 0;
}