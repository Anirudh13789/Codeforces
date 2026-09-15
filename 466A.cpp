#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int op1= n*a;
    int op2=((n+m-1)/m)*b;
    int op3=(n/m)*b+(n%m)*a;
    cout<<min(op1,min(op2,op3));
    return 0;
}