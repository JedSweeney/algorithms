#include <bits/stdc++.h>
using namespace std; 
void solve() { 
    string s; 
    string answer;   
    for (int i = 0; i < 8; i++) { 
        cin >> s; 
        for (int j = 0; j < 8; j++) { 
            char current = s[j]; 
            if (current != '.') { 
                answer.push_back(current); 
            } 
        }
    }
    cout << answer << "\n"; 
}

int main() { 
    int t; 
    cin >> t; 
    while(t--) { 
        solve(); 
    }
    return 0; 
}
