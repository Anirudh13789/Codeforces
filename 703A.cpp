#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mishka=0;
    int chris=0;
    while(n--){
        int a,b;
        cin>>a>>b;
        if(a>b){
            mishka++;
        }
        else if(b>a){
            chris++;
        }
    }
    if(mishka>chris){
        cout<<"Mishka";
        return 0;
    }
    else if(chris>mishka){
        cout<<"Chris";
        return 0;
    }
    else if(chris==mishka){
        cout<<"Friendship is magic!^^";
        return 0;
    }
    return 0;
}