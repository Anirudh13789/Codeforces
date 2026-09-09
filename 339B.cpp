#include <iostream>
using namespace std;
int main(){
    long long n;
    int m;
    cin>>n>>m;
    long long current=1;
    long long ans=0;
    for(int i=0;i<m;i++){
        long long x;
        cin>>x;
        if(x>=current){
            ans+=x-current;
            
        }
        else{
            ans+=n-current+x;
        }
        current=x;
    }
    cout<<ans<<endl;
    return 0;
}