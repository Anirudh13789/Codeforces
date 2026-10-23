#include <iostream>
#include <string>
using namespace std;
int main(){
    string str1="qwertyuiop";
    string str2="asdfghjkl;";
    string str3="zxcvbnm,./";
    char shift;
    cin>>shift;
    string type;
    cin>>type;
    string ans="";
    for(int i=0;i<type.size();i++){
        if(shift=='R'){
            if(str1.find(type[i])!=string::npos){
                ans+=str1[str1.find(type[i])-1];
            }
            else if(str2.find(type[i])!=string::npos){
                ans+=str2[str2.find(type[i])-1];

            }
            else if(str3.find(type[i])!=string::npos){
                ans+=str3[str3.find(type[i])-1];
            }
        }
        else{
            if(str1.find(type[i])!=string::npos){
                ans+=str1[str1.find(type[i])+1];
            }
            else if(str2.find(type[i])!=string::npos){
                ans+=str2[str2.find(type[i])+1];

            }
            else if(str3.find(type[i])!=string::npos){
                ans+=str3[str3.find(type[i])+1];
            }
        }
    }
    cout<<ans;
    return 0;
}