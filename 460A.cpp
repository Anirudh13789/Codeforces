#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int cnt=0;
    int ans=n;
    while(n>=m){
        cnt=n/m;
        ans+=cnt;
        n=n%m+cnt;
    }
    cout<<ans;
    return 0;
}