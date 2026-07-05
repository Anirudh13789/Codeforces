#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];
    
    long long excess = 0;
    for (int i = n - 1; i > 0; --i) {
        long long current_a = a[i] + excess;
        if (current_a > b[i]) {
            excess = current_a - b[i];
        } else {
            excess = 0; 
        }
    }
    if (a[0] + excess <= b[0]) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}