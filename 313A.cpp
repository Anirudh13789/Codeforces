#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    long long n;
    cin>>n;
    if(n>=0){
        cout<<n;
        return 0;
    }
    else{
        long long temp=n;
        long long lastdigit=temp%10;
        temp=temp/10;
        long long secondlast=temp%10;
        long long opt1=temp;
        long long opt2=(temp/10)*10+lastdigit;
        cout<<max(opt1,opt2);
        return 0;
    }
    return 0;
}