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
    Tnew=Told*((1-a)+a/k);
    s=Told/Tnew;
    cout<<"Tnew:"<<Tnew<<endl;
    cout<<s;
    return 0;
}