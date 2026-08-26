#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    long long arr[4]={a,b,c,d};
    sort(arr,arr+4);
    cout<<arr[3]-arr[0]<<" "<<arr[3]-arr[1]<<" "<<arr[3]-arr[2];
    return 0;
}