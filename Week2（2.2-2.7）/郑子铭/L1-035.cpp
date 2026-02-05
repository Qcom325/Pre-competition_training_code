#include <iostream>
using namespace std;
int cnt=0;
string s,p2,p14;
int main(){
    while(cin>>s&&s!="."){
        cnt++;
        if(cnt==2){
            p2=s;
        }
        if(cnt==14){
            p14=s;
        }
    }
    if(p2.empty()&&p14.empty()){
        cout<<"Momo... No one is for you ..."<<endl;
    }else if(p14.empty()){
        cout<<p2<<" is the only one for you..."<<endl;
    }else{
        cout<<p2<<" and "<<p14<<" are inviting you to dinner..."<<endl;
    }
    return 0;
}


