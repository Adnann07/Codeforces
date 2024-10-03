#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string s2 = s;
        sort(s.begin(), s.end());

        if (s == s2) {
            bool possible = false;
            for (int i = 1; i < s2.size(); i++) {
                if (s2[i] != s2[0]) {
                    possible = true;
                    swap(s2[0], s2[i]);
                    break;
                }
            }
            if (possible) {
                cout << "YES\n" << s2 << endl;
            } else {
                cout << "NO\n";
            }
        } else {
            cout << "YES\n" << s << endl;
        }
    }
    return 0;
}
