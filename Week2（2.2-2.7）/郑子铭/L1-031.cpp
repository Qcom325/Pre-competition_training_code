#include <iostream>
#include <cmath>
using namespace std;
int N,H,W;
double weight;
int main(){
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>H>>W;
        weight=(H-100)*0.9*2;
        if(fabs(weight-W)<0.1*weight){
            cout<<"You are wan mei!"<<endl;
        }else if(W<weight){
            cout<<"You are tai shou le!"<<endl;
        }else{
            cout<<"You are tai pang le!"<<endl;
        }
    }
    return 0;
}


