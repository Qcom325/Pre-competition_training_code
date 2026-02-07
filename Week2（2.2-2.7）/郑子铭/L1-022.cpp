#include <iostream>
using namespace std;
int main(){
    int n,num,jinum=0,ounum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>num;
        if(num%2==0){
            ounum++;
        }else{
            jinum++;
        }

    }
    cout<<jinum<<" "<<ounum<<endl;
    return 0;
}


