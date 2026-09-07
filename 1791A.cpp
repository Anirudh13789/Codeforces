#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char c;
        cin>>c;
        string s="codeforces";
        for(char ch:s){
            if(ch==c){
                cout<<"YES"<<endl;
                goto next;
            }
        }
        cout<<"NO"<<endl;
        next:;
    }
    return 0;
}
