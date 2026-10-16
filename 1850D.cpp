#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int longest=1,cnt=1;
        for(int i=0;i<n-1;i++){
            if(a[i+1]-a[i]<=k){
                cnt++;
            }
            else{
                cnt=1;
            }
            longest=max(longest,cnt);
        }
        cout<<n-longest<<endl;
    }
    return 0;
}