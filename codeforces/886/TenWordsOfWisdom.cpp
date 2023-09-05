#include <bits/stdc++.h>; 
using namespace std; 

void solve() { 
    int n; 
    cin >> n; 
    int maxQuality = 0;  
    int answer = -1;  
    for (int i = 0; i < n; i++) { 
        int a, b; 
        cin >> a >> b; 
        if (a <= 10 && b > maxQuality) { 
            maxQuality = b; 
            answer = i;
        }
    }
    cout << answer + 1 << endl; 
} 

int main() {
    int t; 
    cin >> t; 
    while (t--) { 
        solve(); 
    }
    return 0; 
} 
