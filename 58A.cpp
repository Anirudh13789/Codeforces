#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    string tagret="hello";
    int j=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==tagret[j]){
            j++;
        }
        if(j==tagret.size()){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}