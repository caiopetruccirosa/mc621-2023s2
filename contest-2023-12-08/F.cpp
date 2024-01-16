#include <iostream>
#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long

using namespace std;

string lucky_substr(string s) {
    int nums4 = 0, nums7 = 0;
    for (char c: s) {
        if (c == '4') {
            nums4++;
        } else if (c == '7') {
            nums7++;
        }
    }
    if (nums4 == 0 && nums7 == 0) {
        return "-1";
    } else if (nums4 >= nums7) {
        return "4";
    } else {
        return "7";
    }
}

int main() {_
    string s;
    cin >> s;

    cout << lucky_substr(s) << '\n';

    return 0;
}