#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;
int main(){
    int y,w;
    cin>>y>>w;
    int l=max(y,w);
    int fav=6-l+1;
    int g= __gcd(fav,6);
    cout<<fav/g<<"/"<<6/g<<endl;
    return 0;
}