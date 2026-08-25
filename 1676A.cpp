#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int leftsum=0;
        int rightsum=0;
        for(int i=0;i<3;i++){
            rightsum+=n%10;
            n=n/10;
        }
        for(int i=0;i<3;i++){
            leftsum+=n%10;
            n=n/10;
        }
        if(rightsum==leftsum){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}