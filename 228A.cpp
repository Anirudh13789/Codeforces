#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector <int> arr(4);
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    int count=0;
    sort(arr.begin(),arr.end());
    for(int i=0;i<3;i++){
        if(arr[i]==arr[i+1]){
            count++;
        }
    }
    cout<<count;
    return 0;
}
