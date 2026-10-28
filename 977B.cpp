#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int maxi=0;
    string ans;
    for(int i=0;i<n-1;i++){
        int cnt=0;
        for(int j=0;j<n-1;j++){
            if(s[i]==s[j] and s[i+1]==s[j+1]){
                cnt++;
            }
        }
        if(cnt>maxi){
            maxi=cnt;
            ans=s.substr(i,2);
        }
    }
    cout<<ans;
    return 0;
}