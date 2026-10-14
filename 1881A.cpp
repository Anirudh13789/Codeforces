#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x;
        cin>>s;
        int ans=0;
        while(ans<=5){
            if(x.find(s)!=string::npos){
                cout<<ans<<endl;
                break;
            }
            x+=x;
            ans++;
        }
        if(ans>5){
            cout<<-1<<endl;
        }
    }
    return 0;
}