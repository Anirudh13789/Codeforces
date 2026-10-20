
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,q;
        cin>>n>>q;
        vector<long long> a(n);
        vector<long long> prefix(n+1,0);
        for (int i=0;i<n;i++){
            cin>>a[i];
            prefix[i+1]=prefix[i]+a[i];
        }
        long long totalSum=prefix[n];
        while(q--){
            int l,r,k;
            cin>>l>>r>>k;
            long long rangeSum=prefix[r]-prefix[l-1];
            long long newSum=totalSum-rangeSum+1LL*(r-l+1)*k;
            if(newSum%2!=0) {
                cout<<"YES\n";
            } 
            else{
                cout<<"NO\n";
            }
        }
    }
    return 0;
}
