#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int arr[3];
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
    int testCase1=arr[0]+arr[1]+arr[2];
    int testCase2=arr[0]*arr[1]*arr[2];
    int testCase3=(arr[0]+arr[1])*arr[2];
    int testCase4=arr[0]*(arr[1]+arr[2]);
    int testCase5= arr[0]+(arr[1]*arr[2]);
    int testCase6= (arr[0]*arr[1])+arr[2];
    cout << max({testCase1, testCase2, testCase3,testCase4, testCase5, testCase6});
    return 0;
}