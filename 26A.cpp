#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0;
    for(int i=2;i<=n;i++){
        int x=i;
        int cnt=0;
        for(int j=2;j*j<=x;j++){
            if(x%j==0){
                cnt++;
                while(x%j==0){
                    x/=j;
                }
            }
        }
        if(x>1){
            cnt++;
        }
        if(cnt==2){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}