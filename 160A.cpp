#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int i=0;
    int j=n-1;
    int sum=0;
    for(int k=0;k<n;k++){
        sum+=arr[k];
    }
    int tempsum=0;
    int count=0;
    for(j;j>=0;j--){
        tempsum+=arr[j];
        count++;
        if(tempsum>(sum-tempsum)){
            cout<<count;
            return 0;
        }
    }
    return n;
}   