#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    char c;
    string lowerCaseString="";
    for(int i=0;i<s.size();i++){
        c=s[i];
        lowerCaseString+=tolower(c);
    }
    string VowelsDeleted="";
    char ch;
    for(int i=0;i<lowerCaseString.size();i++){
        ch=lowerCaseString[i];
        if(ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u' && ch!='y'){
            VowelsDeleted+=ch;
        }
    }
    string final="";
    for(int i=0;i<VowelsDeleted.size();i++){
        final+='.';
        final+=VowelsDeleted[i];
    }
    cout<<final;
    return 0;

}