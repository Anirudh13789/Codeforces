#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int passengers=0;
    int capacity=0;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        passengers-=a;
        passengers+=b;
        if(passengers>capacity){
            capacity=passengers;
        }
    }
    cout<<capacity;
    return 0;
}