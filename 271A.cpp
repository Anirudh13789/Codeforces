#include <iostream>
#include <vector>
using namespace std;

bool unique(int n){
    vector <int> freq(10,0);
    while(n>0){
        freq[n%10]++;
        n=n/10;
    }
    for(int i=0;i<10;i++){
        if(freq[i]>1){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    while(!unique(n+1)){
        n=n+1;
    }
    cout<<n+1;
    return 0;
}