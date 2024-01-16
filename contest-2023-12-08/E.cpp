#include <iostream>
#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long

using namespace std;

int main() {_
    string a, b;
    cin >> a >> b;

    int diff4 = 0, diff7 = 0, len = a.length();
    for (int i = 0; i < len; i++) {
        if (a[i] == '4' && b[i] != '4') {
            diff4++;
        } else if (a[i] == '7' && b[i] != '7') {
            diff7++;
        }
    }
    int ops = max(diff4, diff7);
    cout << ops << '\n';

    return 0;
}