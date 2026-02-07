#include <iostream>
#include <string>
using namespace std;
int visit[10],arr[10],index[20],cnt=0;
string s;
int main(){
    cin>>s;
    //先用visit数组记录每个数字是否访问过
    for(int i=0;i<s.length();i++){
        visit[s[i]-'0']=1;
    }
    //找到有访问过的数字，并加入arr数组中，再将visit数组中的值改为cnt
    for(int i=9;i>=0;i--){
        if(visit[i]){
            visit[i]=cnt;
            arr[cnt++]=i;
        }
    }
    //用index数组记录每个字符在arr数组中的位置
    for(int i=0;i<s.length();i++){
        index[i]=visit[s[i]-'0'];
    }
    cout<<"int[] arr = new int[]{"<<arr[0];
    for(int i=1;i<cnt;i++){
        cout<<","<<arr[i];
    }
    cout<<"};"<<endl<<"int[] index = new int[]{"<<index[0];
    for(int i=1;i<s.length();i++){
        cout<<","<<index[i];
    }
    cout<<"};"<<endl;
    return 0;
}


