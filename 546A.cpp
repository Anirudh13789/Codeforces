#include <iostream>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int totalCost=0;
    for(int i=1;i<=w;i++){
        totalCost+=i*k;
    }
    int moneyBorrow=totalCost-n;
    if(moneyBorrow<0){
        cout<<0;
        return 0;
    }
    else{
        cout<<moneyBorrow;
        return 0;
    }
    return 0;
}