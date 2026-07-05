#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int cnt=0;
    for(int i=0;i<n;i++){
        int x,y,z;
        cin>>x>>y>>z;
        int sum=x+y+z;
        if(sum>=2){
            cnt=cnt+1;
        }
    }
    cout<<cnt;
}