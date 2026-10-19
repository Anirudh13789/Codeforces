#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k,x;
        cin>>n>>k>>x;
        long long minimum=k*(k+1)/2;
        long long maximum=k*(2*n-k+1)/2;
        if(minimum<=x and x<=maximum){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}