#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string str="codeforces";
        int cnt=0;
        for(int i=0;i<s.length();i++){
            if(s[i]!=str[i]){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}