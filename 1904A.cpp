#include <iostream>
#include <set>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,xk,yk,xq,yq;
        cin>>a>>b;
        cin>>xk>>yk;
        cin>>xq>>yq;
        set<pair<int,int>> s1,s2;
        int dx[8]={a,a,-a,-a,b,b,-b,-b};
        int dy[8]={b,-b,b,-b,a,-a,a,-a};
        for(int i=0;i<8;i++){
            s1.insert({xk+dx[i],yk+dy[i]});
            s2.insert({xq+dx[i],yq+dy[i]});
        }
        int ans=0;
        for(auto p: s1){
            if(s2.find(p)!=s2.end()){
                ans++; 
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}