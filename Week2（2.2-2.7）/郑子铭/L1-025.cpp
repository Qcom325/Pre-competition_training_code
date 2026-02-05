#include <iostream>
#include <string>
using namespace std;
//判断输入的字符串是否能转化为不大于1000的正整数，如果可以，则返回该整数，否则返回-1
int toNum(string s){
    int num=0;
    for(int i=0;i<s.length();i++){
        if(s[i]>='0' && s[i]<='9'){
            num=num*10+(s[i]-'0');
        }else{
            num=-1;
            break;
        }
    }
    if(num>1000||num<1){
        num=-1;
    }
    return num;
}
int main(){
    string numA, numB,ans;
    cin>>numA;
    getchar();
    getline(cin, numB);
    int A,B;
    A=toNum(numA);
    B=toNum(numB);
    if(A==-1){
        numA="?";
    }
    if(B==-1){
        numB="?";
    }
    if(A==-1 || B==-1){
        ans="?";
    }else{
        ans=to_string(A+B);
    }
    cout<<numA<<" + "<<numB<<" = "<<ans<<endl;
    return 0;
}


