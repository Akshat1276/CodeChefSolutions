#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (auto &x : A) cin >> x;
        sort(A.begin(), A.end());
        bool ok = true;
        for (int i = 0; i < N; ++i) {
            if (A[i] < i + 1) {
                ok = false;
                break;
            }
        }
        if (!ok) {
            cout << "0\n";
            continue;
        }
        long long res = 1;
        for (int i = 0; i < N; ++i) {
            long long term = (A[i] - i) % MOD;
            res = (res * term) % MOD;
        }
        cout << res << "\n";
    }
    return 0;
}
