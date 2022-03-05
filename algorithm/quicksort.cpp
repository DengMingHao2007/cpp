#include<iostream>
using namespace std;
void qc(int left,int right,int arr[]){
    if(left<=right){//左边的数等于右边的数
        return;
    }
    int l = left;
    int r=right;
    int base = arr[left];//基准值

    while(l<r){
        while(l<arr[r]){
            l--;
        }
    }


    

}