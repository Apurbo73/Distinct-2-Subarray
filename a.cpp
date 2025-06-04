#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i)
            cin >> A[i];

        int ans = N + 1;
        for (int i = 0; i < N; ++i) {
            unordered_set<int> s;
            for (int j = i; j < N; ++j) {
                s.insert(A[j]);
                if (s.size() == 2)
                    ans = min(ans, j - i + 1);
                else if (s.size() > 2)
                    break;
            }
        }

        if (ans == N + 1)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }
    return 0;
}