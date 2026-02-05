#include <iostream>
#include <cmath>
using namespace std;
int n,num;
bool isPrime(int num){
    if(num<=1) return false;
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0) return false;
    }
    return true;
}
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin>>num;
        if(isPrime(num)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    }

    return 0;
}


