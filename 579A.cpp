#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int bacteria=0;
    while(x>0){
        if(x%2==1){
            bacteria++;
        }
        x=x/2;
    }
    cout<<bacteria;
}