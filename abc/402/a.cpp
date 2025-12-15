#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    for (char c : s) {
        if (isupper(c)) cout << c;
    }
    cout << endl;
    return 0;
}
