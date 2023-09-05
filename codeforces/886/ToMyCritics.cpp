#include <bits/stdc++.h>
using namespace std; 

void solve() { 
    array<int,3> v; 
    cin >> v[0] >> v[1] >> v[2]; 
    sort(v.begin(), v.end()); 
    if (v[1] + v[2] >= 10) { 
        cout << "YES\n"; 
    } else { 
        cout << "NO\n"; 
    }
} 

int main() { 
    int t; 
    cin >> t; 
    while (t--) { 
        solve();
    }

    return 0; 
} 


