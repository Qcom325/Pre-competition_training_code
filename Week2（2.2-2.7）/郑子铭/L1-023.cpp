#include <iostream>
#include <cstring>
using namespace std;
char gplt[5]="GPLT";
int GPLT[5];
int main(){
    string s;
    cin>>s;
    //记录非空字符串中GLPT出现的次数(不区分大小写)
    for(int i=0;i<s.length();i++){
        s[i]=toupper(s[i]);
        for(int j=0;j<4;j++){
            if(s[i]==gplt[j]){
                GPLT[j]++;
            }
        }
    }
    //按顺序输出GPLT，直到GLPT四个字母次数均为0
    while(1){
        int flag=0;
        for(int i=0;i<4;i++){
            if(GPLT[i]>0){
                flag=1;
                cout<<gplt[i];
                GPLT[i]--;
            }
        }
        if(flag==0){
            break;
        }
    }
    return 0;
}


