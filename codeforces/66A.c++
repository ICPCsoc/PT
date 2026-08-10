#include <iostream>
#include <string>

using namespace std;

bool a(const string& n, const string& limit) {
    if (n.length() < limit.length()) return true;
    if (n.length() > limit.length()) return false;
    return n <= limit;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string n;
    if (cin >> n) {
        string max_byte  = "127";
        string max_short = "32767";
        string max_int   = "2147483647";
        string max_long  = "9223372036854775807";
        if (a(n, max_byte)) {
            cout << "byte\n";
        } 
        else if (a(n, max_short)) {
            cout << "short\n";
        } 
        else if (a(n, max_int)) {
            cout << "int\n";
        } 
        else if (a(n, max_long)) {
            cout << "long\n";
        } 
        else {
            cout << "BigInteger\n";
        }
    }
    return 0;
}