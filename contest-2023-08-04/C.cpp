#include <iostream>
#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

void populate_grid(vector<vector<char>> &grid, int lx, int rx, int ly, int ry, int mode) {
    if (lx == rx && ly == ry) {
        if (mode == 0) {
            grid[lx][ly] = ''
        }
    }

}

int main() {_
    int n, k;
    cin >> n >> k;

    int si = 1;
    for (int i = 0; i < k; i++)
        si *= n;

    vector<vector<char>> grid(si, vector<char>(si));

    populate_grid(grid);

    for (int i = 0; i < si; i++) {
        for (int j = 0; j < si; j++) {

        }
    }

    return 0;
}