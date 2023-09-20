#include <iostream>
#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

bool similar_str(string s1, string s2) {
    int a = 0, b = 0;
    for (int i = 0; i < 10; i++) {
        if (s1[i] == '+'){
            a++;
        } else {
            a--;
        }
        if (s2[i] == '+'){
            b++;
        } else {
            b--;
        }
    }
    return a == b;
}

void branch_possibility(string s1, string s2, int i, int &valid, int &all) {
    if (i >= 10) {
        all++;
        if (similar_str(s1, s2))
            valid++;
        return;
    }

    if (s2[i] == '?') {
        s2[i] = '+';
        branch_possibility(s1, s2, i+1, valid, all);

        s2[i] = '-';
        branch_possibility(s1, s2, i+1, valid, all);
    } else {
        branch_possibility(s1, s2, i+1, valid, all);
    }

    return;
}

int main() {_
    string s1, s2;
    cin >> s1 >> s2;

    int valid = 0, all = 0;
    branch_possibility(s1, s2, 0, valid, all);

    double prob = (1.0*valid)/(1.0*all);
    printf("%.12lf\n", prob);

    return 0;
}