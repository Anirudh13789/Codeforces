#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> x(n),h(n);
    for(int i=0;i<n;i++){
        cin>>x[i]>>h[i];
    }
    if(n==1){
        cout<<1<<endl;
        return 0;
    }
    int ans=2;
    for(int i=1;i<n-1;i++){
        if(x[i]-h[i]>x[i-1]){
            ans++;
        }
        else if(x[i]+h[i]<x[i+1]){
            ans++;
            x[i]+=h[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}