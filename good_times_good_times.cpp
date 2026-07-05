#include <iostream>
#include <string>
using namespace std;
void solve(){
    string str;
    cin>>str;
    int l=str.length();
    long long y=1;
    for(int i=0;i<l;i++){
        y=y*10;
    }
    y=y+1;
    cout<<y<<'\n';
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        solve();
        t--;
    }
    return 0;
}