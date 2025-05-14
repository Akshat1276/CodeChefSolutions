#include <iostream>
#include <climits>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int minCost = INT_MAX;
        bool found = false;
        for (int i = 0; i < N; ++i) {
            int A, B;
            cin >> A >> B;
            if (A >= 7) {
                found = true;
                minCost = min(minCost, B);
            }
        }
        if (found) {
            cout << minCost << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
