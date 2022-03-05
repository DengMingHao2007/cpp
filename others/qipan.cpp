#include<iostream>
using namespace std;
int n,i,j;
int main(){
    cin>>n;
    cin>>i;
    cin>>j;
    int qp[n][n];
    for(int x = 1;x<=n;x++){
        cout<<"("<<i<<","<<x<<")";
    }
    cout<<endl;
    for(int x = 1;x<=n;x++){
        cout<<"("<<x<<","<<j<<")";
    }
    for(int x = 1;x<=n;x++){
        cout<<"("<<i<<","<<x<<")";
    }
    
}
