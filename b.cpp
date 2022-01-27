#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

using u64 = uint64_t;

int main() {
    u64 N, answer = 0;
    cin >> N;
    vector<u64> vector(N);
    for (u64 i = 0; i < N; i++) {
        cin >> vector[i];
        answer += vector[i];
    }
    u64 L = 0, R = answer, M;
    for (u64 i = 0; i < N - 1; i++) {
        L += vector[i];
        R -= vector[i];
        M = std::max(L, R);
        if (M < answer) {
            answer = M;
        }
    }
    cout << answer << endl;
    return 0;
}