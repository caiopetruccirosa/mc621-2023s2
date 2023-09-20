#include <iostream>
#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

void add_path(vector<int> &path, vector<int> &prev, int current) {
    if (current == -1)
        return;
    add_path(path, prev, prev[current]);
    path.push_back(current);
}

int main() {_
    int n;
    cin >> n;

    vector<int> prev(n+1, -1), path;
    for (int i = 2; i <= n; i++)
        cin >> prev[i];
    
    add_path(path, prev, n);

    for (int i = 0; i < (int)path.size(); i++) {
        cout << path[i];
        if (i < (int)path.size()-1)
            cout << ' ';
        else
            cout << '\n';
    }

    return 0;
}