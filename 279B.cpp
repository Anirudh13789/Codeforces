#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    int ans=0;
    int j=n-1;
    for(int i=n-1;i>=0;i--){
        sum+=arr[i];
        while(sum>t){
            sum-=arr[j];
            j--;
        }
        ans=max(ans,j-i+1);
    }
    cout<<ans;
}