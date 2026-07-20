#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int a[105];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int maxVal=a[0],minVal=a[0];
    int maxIndx=0, minIndx=0;

    for(int i=0;i<n;i++){
        if(a[i]>maxVal){
            maxVal=a[i];
            maxIndx=i;
        }
    }

    for(int i=0;i<n;i++){
        if(a[i]<=minVal){
            minVal=a[i];
            minIndx=i;
        }
    }

    int ans=maxIndx+(n-1-minIndx);

    if(maxIndx>minIndx){
        ans--;
    }

    cout<<ans;
    return 0;
}