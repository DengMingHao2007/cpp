#include<iostream>
using namespace std;
long double s,a,Told,Tnew,k = 0;
int main(){
    cout<<"Total Time:";
    cin>>Told;
    cout<<"Percentage:";
    cin>>a;
    cout<<"K:";
    cin>>k;
    s=1/((1-a)+a/k);
    cout<<s;
    return 0;
}