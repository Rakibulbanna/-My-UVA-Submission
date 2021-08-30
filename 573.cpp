#include<bits/stdc++.h>
using namespace std;


typedef long long int ll;

double pi =3.1416;
int main() {
    #ifndef ONLINE_JUDGE
       clock_t tStart = clock();
        //freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif
    double h, u, d, f;
    double cur_h;

    bool result;
    while (cin >> h >> u >> d >> f) {
        if (h == 0)
            break;
        f = f * u / 100.0;
        cur_h = 0;
       int day = 0;

        while (true) {
            day++;
            cur_h += u;
            u -= f;
            if (u < 0)
                u = 0;
            if (cur_h > h) {
                result = true;
                break;
            }
            cur_h -= d;
            if (cur_h < 0) {
                result = false;
                break;
            }
        }
        cout << (result ? "success" : "failure") << " on day " << day << endl;
    }
#ifndef ONLINE_JUDGE
    //printf("\n**Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}
