#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    string N;
    cin >> N;

    sort(N.begin(), N.end(), greater());

    cout << N;

    return 0;
}