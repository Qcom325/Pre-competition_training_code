#include <iostream>
#include <string>
#include <cmath>    
using namespace std;
string s;
int n;
char map[105][105];
int main(){
    cin>>n;
    getchar();
    getline(cin,s);
    //计算输出结果列数
    int size=ceil(s.length()*1.0/n);
    int line=size-1;
    for(int i=0;i<s.length();){
        for(int j=0;j<n;j++){
            map[j][line]=s[i++];
        }
        line--;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<size;j++){
            if(!map[i][j]){
                map[i][j]=' ';
            }
            cout<<map[i][j];
        }
        cout<<endl;
    }
    return 0;
}


