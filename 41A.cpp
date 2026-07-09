#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    int i=0;
    int j=t.size()-1;
    if(s.size()!=t.size()){
        cout<<"NO";
        return 0;
    }
    while(j>=0 && i<s.size()){
        if(s[i]!=t[j]){
            cout<<"NO";
            return 0;
        }
        i++;
        j--;
    }
    cout<<"YES";
    return 0;
}