#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    if ((s.at(0) == 'A' && s.at(1) == 'B' && s.at(2) == 'C') ||
        (s.at(0) == 'A' && s.at(1) == 'C' && s.at(2) == 'B') ||
        (s.at(0) == 'B' && s.at(1) == 'A' && s.at(2) == 'C') ||
        (s.at(0) == 'B' && s.at(1) == 'C' && s.at(2) == 'A') ||
        (s.at(0) == 'C' && s.at(1) == 'A' && s.at(2) == 'B') ||
        (s.at(0) == 'C' && s.at(1) == 'B' && s.at(2) == 'A')) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}
