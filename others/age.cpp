#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a;
    int b = 1;
    int t;
    float y;
    cin>>a;
    while (b<a)
    {
        cin>>t;
        y = y + t;
        b++;
    }
    cout<<fixed<<setprecision(2);
    cout<<y/a;
    return 0;
}