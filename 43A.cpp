#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,int> freq;
    for(int i=0;i<n;i++){
        string team;
        cin>>team;
        freq[team]++;
    }
    string ans;
    int mx=0;
    for(auto x:freq){
        if(x.second>mx){
            mx=x.second;
            ans=x.first;
        }
    }
    cout<<ans<<endl;
    return 0;
}