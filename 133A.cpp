#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(char c:s){
        if(c=='H' or c=='Q' or c=='9'){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}