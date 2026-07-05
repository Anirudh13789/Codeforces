#include <iostream>
#include <string>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        long long ones = 0;
        long long inversions = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1')
                ones++;
            else
                inversions += ones;
        }
        if (inversions % 2 == 1)
            cout << "Alice\n";
        else
            cout << "Bob\n";
    }
    return 0;
}