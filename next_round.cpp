#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=0;
    while(a[i]>k){
        i++;
    }
    cout<<i;
    return 0;
}