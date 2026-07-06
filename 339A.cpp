#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string s;
    string ans;
    cin>>s;
    vector <int> arr;
    for(int i=0;i<s.size();i++){
        if(s[i]!='+'){
            arr.push_back(s[i]);
        }
    }
    sort(arr.begin(),arr.end());
    int i=0;
    while(i!=arr.size()){
        ans+=arr[i];
        if(i+1!=arr.size()){
            ans+='+';
        }
        i++;
    }
    
    cout<<ans;
    return 0;
}