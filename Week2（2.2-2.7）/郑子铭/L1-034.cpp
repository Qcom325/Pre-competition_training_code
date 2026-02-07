#include <iostream>
using namespace std;
int n,k,temp,ans=0,maxcnt=0,cnt[1005]={0};
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>k;
        for(int j=1;j<=k;j++){
            cin>>temp;
            cnt[temp]++;
            if(cnt[temp]>maxcnt){
                maxcnt=cnt[temp];
                ans=temp;
            }else if(cnt[temp]==maxcnt){
                ans=max(ans,temp);
            }
        }
    }
    cout<<ans<<" "<<maxcnt<<endl;
    return 0;
}