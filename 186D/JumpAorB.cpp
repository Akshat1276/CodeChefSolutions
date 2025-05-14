#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        long long N, M, A, B;
        cin >> N >> M >> A >> B;
        long long min_sum = N * A;
        long long max_sum = N * B;
        if (M < min_sum || M > max_sum) {
            cout << "No\n";
            continue;
        }
        long long diff = max_sum - M;
        long long denominator = B - A;
        if (diff % denominator != 0) {
            cout << "No\n";
        } else {
            cout << "Yes\n";
        }
    }
    return 0;
}
