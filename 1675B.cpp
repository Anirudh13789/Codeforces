#include <iostream>
using namespace std;
int oper(int n){
    return n/2;
}
int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        long long ans=0;
        long long arr[35];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=n-2;i>=0;i--){
            while(arr[i]>=arr[i+1] and arr[i]>0){
                arr[i]=oper(arr[i]);
                ans++;
            }
        }
        bool lol=true;
        for(int i=0;i<n-1;i++){
            if(arr[i]>=arr[i+1]){
                lol=false;
                break;
            }
        }
        if(lol){
            cout<<ans<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}