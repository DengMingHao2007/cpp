#include<iostream>
#include<vector>
using namespace std;

int len;

void mg(int arr[],int nleft,int nmid,int nright){
    int temp[nright-nleft+1];
    int i = 0;
    int li = nleft;
    int lr = nmid + 1;
    
    while(li<=nmid&&lr<=nright){
        if(arr[li]<arr[lr])
            temp[i++] = arr[li++];  
        else
            temp[i++]=arr[lr++];
    }
    
    while(li<=nmid){
    temp[i++]=arr[li++];
    }

    for(i=0;i<nright-nleft+1;i++){
    arr[nleft+i]= temp[i];
    }
}

void mgs(int arr[],int nleft,int nright){
    if(nleft==nright)
        return;
    
    int mid=(nleft+nright)/2;  
    mgs(arr,nleft,mid);
    mgs(arr,mid+1,nright);
    mg(arr,nleft,mid,nright);
}


int main(){
    cout<<"Please input the array's lengh':";
    cin>>len;

    int arr[len];    
    len--;
    
    cout<<"Please input one by one";
    cout<<endl;
    
    for(int x = 0;x<=len;x++)
    {
        cout<<x<<char(58);
        cin>>arr[x];
    }
    mgs(arr,0,len);
    
    for(int x = 0;x<=len;x++)
    {
    cout<<arr[x]<<" ";
    }
    
    return 0;
}