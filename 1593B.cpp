#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        int ans=n;
        string a[4]={"00","25","50","75"};
        for(int k=0;k<4;k++){
            int cnt=0;
            int i=n-1;
            while(i>=0 and s[i]!=a[k][1]){
                cnt++;
                i--;
            }
            if(i<0){
                continue;
            }
            i--;
            while(i>=0 and s[i]!=a[k][0]){
                cnt++;
                i--;
            }
            if(i>=0){
                ans=min(ans,cnt);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}