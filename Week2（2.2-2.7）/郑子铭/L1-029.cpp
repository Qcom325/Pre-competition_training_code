#include <iostream>
#include <iomanip>
using namespace std;
int H;
double weight;
int main(){
    cin>>H;
    weight=(H-100)*0.9*2;
    cout<<fixed<<setprecision(1)<<weight<<endl;
    return 0;
}


