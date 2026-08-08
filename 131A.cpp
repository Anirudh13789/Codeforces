#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool condt=true;
    for(int i=1;i<s.length();i++){
        if(!isupper(s[i])){
            condt=false;
            break;
        }
    }
    if(condt){
        if(islower(s[0])){
            s[0]=toupper(s[0]);
        }
        else{
            s[0]=tolower(s[0]);
        }
        for(int i=1;i<s.length();i++){
            s[i]=tolower(s[i]);
        }
    }
    cout<<s;
    return 0;
}