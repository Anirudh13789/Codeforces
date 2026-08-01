#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool firstword=true;
    int i=0;

    while(i<s.length()){
        if(i+2<s.length() && s.substr(i,3)=="WUB"){
            while(i+2<s.length() && s.substr(i,3)=="WUB"){
                i+=3;
            }
            if(i<s.length() && !firstword){
                cout<<" ";
            }
            else{
                cout<<s[i];
                firstword=false;
                i++;
            }
        }
    }
    return 0;
}