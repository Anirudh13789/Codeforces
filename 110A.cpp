#include <iostream>
#include <vector>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int count=0;
    while(n>0){
        if(n%10==4 || n%10==7){
            count++;
        }
        n=n/10;
    }
    if(count==0){
        cout<<"NO";
        return 0;
    }
    int temp = count;
    while (temp > 0) {
        int digit = temp % 10;
        if (digit != 4 && digit != 7) {
            cout << "NO";
            return 0;
        }
        temp /= 10;
    }
    cout<<"YES";
    return 0;
}