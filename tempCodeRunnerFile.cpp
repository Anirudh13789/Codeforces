#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n>0){
        int digit=n%10;
        if(digit!=4 && digit!=7){
            cout<<"NO";
            return 0;
        }
        n=n/10;
    }
    cout<<"YES";
    return 0;
}