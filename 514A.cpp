#include <iostream>
using namespace std;
int main(){
    string x;
    cin>>x;
    for(int i=0;i<x.length();i++){
        int digit=x[i]-'0';
        if(digit>4){
            if(i==0 && digit==9){
                continue;
            }
            x[i]=char('0' + (9-digit));
        }
    }
    cout<<x;
    return 0;
}