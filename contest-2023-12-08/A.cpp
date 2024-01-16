#include <iostream>
#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long

using namespace std;

int main() {_
    ll numbers[100001];
    numbers[1] = 4;
    numbers[2] = 4;
    int k = 2;
    for (int i = 1; (numbers[i]*10)+4 <= (ll)(1e10); i++) {
		numbers[k+1] = (numbers[i]*10) + 4;
		numbers[k+2] = (numbers[i]*10) + 7;
	}

    return 0;
}