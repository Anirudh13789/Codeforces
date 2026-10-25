#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=3;
        while(true){
            if(n%sum==0){
                cout<<n/sum<<endl;
                break;
            }
            sum=sum*2+1;
        }
    }
    return 0;
}