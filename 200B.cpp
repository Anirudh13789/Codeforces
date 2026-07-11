#include <iostream>
#include <vector>
using  namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> orange(n);
    double sum=0;
    for(int i=0;i<n;i++){
        cin>>orange[i];
        sum+=orange[i];
    }
    cout<<sum/n;
    return 0;
}