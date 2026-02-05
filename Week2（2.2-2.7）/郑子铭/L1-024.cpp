#include <iostream>
using namespace std;
int main(){
    int D;
    cin>>D;
    D=(D+2)%7;
    if(D==0){
        cout<<7<<endl;
    }else{
        cout<<D<<endl;
    }
    
    return 0;
}


