#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int cards[1000];
    for(int i=0;i<n;i++){
        cin>>cards[i];
    }
    int left=0;
    int right=n-1;
    int seerja=0;
    int dima=0;
    for(int i=0;i<n;i++){
        int chosen;
        chosen=max(cards[left],cards[right]);
        if(chosen==cards[left]){
            left++;
        }
        else{
            right--;
        }
        if(i%2==0){
            seerja+=chosen;
        }
        else{
            dima+=chosen;
        }
    }
    cout<<seerja<<" "<<dima;
    return 0;
}