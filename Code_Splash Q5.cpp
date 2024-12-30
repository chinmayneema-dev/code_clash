#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(int n, int w) {
    
    if (w < n - 1) {
        cout << "infinity" << endl;
        return;
    }
    
    
    int isolation = (w + n - 2) / (n - 1);

    
    vector<vector<int>> schedule(w, vector<int>(n));

    
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < n; j++) {
    
            schedule[i][j] = ((i + j) % 2) + 1;
        }
    }

    
    cout << isolation << endl;

    
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < n; j++) {
            cout << schedule[i][j];
        }
        cout << endl;
    }
}

int main() {
    int n, w;
    cin >> n >> w;

    solve(n, w);

    return 0;
}

