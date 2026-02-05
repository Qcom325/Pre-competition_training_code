#include <iostream>
#include <iomanip>
using namespace std;
int y,n,x;
//判断年份中有几个不同的数字
int compare(int y,int n){
    int cnt[10]={0};
    for(int i=0;i<4;i++){
        cnt[y%10]=1;
        y/=10;
    }
    int sum=0;
    for(int i=0;i<10;i++){
        sum+=cnt[i];
    }
    return sum;
}
int main(){
    cin>>y>>n;
    for(int i=y,x=0;;i++,x++){
        if(compare(i,n)==n){
            cout<<x<<" "<<setfill('0')<<setw(4)<<i<<endl;
            break;
        }
    }
    return 0;
}


