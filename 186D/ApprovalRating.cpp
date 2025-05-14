#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        vector<int> ratings(5);
        int sum = 0;
        for (int i = 0; i < 5; ++i) {
            cin >> ratings[i];
            sum += ratings[i];
        }
        if (sum >= 35) {
            cout << 0 << '\n';
            continue;
        }
        vector<int> gains;
        for (int rating : ratings) {
            gains.push_back(10 - rating);
        }
        sort(gains.rbegin(), gains.rend());
        int required = 35 - sum;
        int current = 0;
        int count = 0;
        for (int gain : gains) {
            current += gain;
            count++;
            if (current >= required) {
                break;
            }
        }
        cout << count * 100 << '\n';
    }
    return 0;
}
