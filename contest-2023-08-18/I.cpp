#include <iostream>
#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

int main() {_
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    double p1 = (1.0*a)/b;
    double p2 = (1.0*c)/d;
    double q = (1.0-p1)*(1.0-p2);

    double qp = q;
    double p = p1;
    for (int i = 0; i < 10000000; i++) {
        p += (qp*p1);
        qp *= q;
    }

    printf("%.12lf\n", p);

    return 0;
}