#include <iostream>
using namespace std;
int n,visit[55],type[55];
string s,student[55];
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>type[i]>>student[i];
    }
    for(int i=1;i<=n;i++){
        if(visit[i]==0){
            visit[i]=1;
            for(int j=n;j>=1;j--){
                if(visit[j]==0&&type[j]!=type[i]){
                    visit[j]=1;
                    cout<<student[i]<<" "<<student[j]<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}


