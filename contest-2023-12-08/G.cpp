#include <iostream>
#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long

using namespace std;

int main() {_
    int n;
    ll k;
    string s;
    cin >> n >> k >> s;

    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n-1; i++) {
        if (s[i] == '4' && s[i+1] == '7') {
            pq.push(i);
        }
    }

    ll ops = 0;
    while (!pq.empty() && ops < k) {
        int i = pq.top();
        pq.pop();
        if (i < n-1) {
            ops++;
            if (i % 2 == 0) {
                s[i] = s[i+1] = '4';
                if (i < n-2 && s[i+1] == '4' && s[i+2] == '7') {
                    pq.push(i+1);
                }
            } else {
                s[i] = s[i+1] = '7';
                if (i > 0 && s[i-1] == '4' && s[i] == '7') {
                    pq.push(i-1);
                }
            }
        }
    }

    cout << s << '\n';

    return 0;
}