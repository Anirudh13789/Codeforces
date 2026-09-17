#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int x=min(n,m);
    if(x%2==0){
        cout<<"Malvika";
        return 0;
    }
    else{
        cout<<"Akshat";
        return 0;
    }
    return 0;
}