#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int len=0;
        int ans=len;
        for(int i=0;i<n;i++){
            if(a[i]!=0){
                len=0;
            }
            else{
                len++;
            }
            ans=max(len,ans);
        }
        cout<<ans<<endl;
    }
    return 0;
}