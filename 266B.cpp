#include <iostream>
using namespace std;
int main(){
    int n,t;
    string s;
    cin>>n>>t;
    cin>>s;
    while(t!=0){
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='B' and s[i+1]=='G'){
                swap(s[i],s[i+1]);
                i++;
            }
        }
        t--;
    }
    cout<<s;
    return 0;
}