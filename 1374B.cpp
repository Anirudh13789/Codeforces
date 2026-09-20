#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt2=0;
        int cnt3=0;
        while(n%2==0){
            cnt2++;
            n=n/2;
        }
        while(n%3==0){
            cnt3++;
            n=n/3;
        }
        if(n!=1 || cnt3<cnt2){
            cout<<-1<<endl;
        }
        else{
            cout<<cnt2+2*(cnt3-cnt2)<<endl;
        }

    }
    return 0;
}