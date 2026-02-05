#include <iostream>
#include<iomanip>
#include<string>
using namespace std;
int main(){
    int n;
    char c;
    string s;
    cin>>n>>c;
    cin.ignore();
    getline(cin,s);
    if(n<s.length()){
        //结果字符串长度大于原始字符串长度，截取原始字符串的最后n个字符
        s=s.substr(s.length()-n,n);
        cout<<s<<endl;
    }else{
        //结果字符串长度小于原始字符串长度，在原始字符串的开头补充c字符，使其长度达到n
        cout<<setfill(c)<<setw(n)<<s<<endl;
    }
    return 0;
}