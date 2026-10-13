#include <iostream>
using namespace std;
int main(){
    int arr[4];
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    int ans=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        ans+=arr[s[i]-'1'];
    }
    cout<<ans;
    return 0;
}