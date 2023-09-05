#include <bits/stdc++.h> 
using namespace std; 
void solve() { 
    int n, k; 
    int a; 
    cin >> n >> k; 
    vector<int> sequence; 
    for (int i = 0; i < n; i++) { 
        cin >> a;
        sequence.push_back(a);  
    } 
    sort(sequence.begin(), sequence.end()); 
    int current = 0;
    int best = 0;

    for (int i = 1; i < n; i++) { 
        if (abs(sequence[i - 1] - sequence[i]) <= k) {
            current += 1; 
        }
        else { 
            best = max(current, best); 
            current = 0; 
        } 
    }
    best = max(current, best); 
    cout << n - best - 1 << "\n";
} 

int main() { 
    int t; 
    cin >> t; 
    while(t--) {
        solve();
    } 
    return 0; 
}
