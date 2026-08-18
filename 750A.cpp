#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int time_for_contest=240-k;
    int time=0;
    int prb_count=0;
    for(int i=1;i<=n;i++){
        time+=i*5;
        if(time>time_for_contest){
            break;
        }
        prb_count++;
    }
    cout<<prb_count;
    return 0;
}