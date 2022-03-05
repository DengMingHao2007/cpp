#include<iostream>
#include<iomanip>
using namespace std;

///*void fan(int card,int num){
///*   int point = 0;
///*    for(card;card-1;card=0){
///*                      
///*        }
///*    }
///*

int card,point = 0;
int num = 2;
int a[52] = {0};

int main(){
    int a[52] = {0};
    for(card=0;card<=51;card++){
        for(card=0;card<=51;card++){
            if(a[point]%num == 0){
                a[point] = 1;
                point += num;
            }
        }
    num+=1;
    }
    for(card=0;card<=51;card++){
        cout<<a[card];
    }
}
