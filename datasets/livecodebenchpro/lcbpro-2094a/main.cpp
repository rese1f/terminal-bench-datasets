#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        string a, b, c;
        cin >> a >> b >> c;
        
        cout << a[0] << b[0] << c[0] << endl;
    }
    
    return 0;
}