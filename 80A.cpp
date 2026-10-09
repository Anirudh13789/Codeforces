#include <iostream>
using namespace std;
bool prime(int n){
    int i=2;
    if(n<2){
        return false;
    }
    while(i<n){
        if(n%i==0){
            return false;
        }
        i++;
    }
    return true;
}
int main(){
    int n,m;
    cin>>n>>m;
    if(prime(n) and prime(m)){
        int i=n+1;
        while(i<m){
            if(prime(i)){
                cout<<"NO";
                return 0;
            }
            i++;
        }
        cout<<"YES";
        return 0;
    }
    else{
        cout<<"NO";
        return 0;
    }
    return 0;
}