#include <iostream>
using namespace std;
int main(){
    int arr[1001];
    int n,h;
    cin>>n>>h;
    int width=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>h){
            width+=2;
        }
        else if(arr[i]<=h){
            width+=1;
        }
    }
    cout<<width;
    return 0;
}