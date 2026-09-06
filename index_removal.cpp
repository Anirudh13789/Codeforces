#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long k;
        cin>>n>>k;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<0<<' ';
        for(int i=1;i<n-1;i++){
            cout<<max(0LL,a[i+1]-a[i-1]-k)<<' ';
        }
        cout<<0<<endl;
    }
    return 0;
    
}