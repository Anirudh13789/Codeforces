#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string words[1000];
    for(int i=0;i<n;i++){
        cin>>words[i];
    }
    for(int i=0;i<n;i++){
        int len=words[i].length();
        if(len<=10){
            cout<<words[i]<<endl;
        }
        if(len>10){
            cout<<words[i][0]<<len-2<<words[i][len-1]<<endl;
        }
    }
    return 0;
}