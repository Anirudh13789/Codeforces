#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a;
        int cnt=0;
        cin>>b;
        if(b>a){
            cnt++;
        }
        cin>>c;
        if(c>a){
            cnt++;
        }
        cin>>d;
        if(d>a){
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}