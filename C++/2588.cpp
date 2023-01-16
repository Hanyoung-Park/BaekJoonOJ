#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    cout << n*(m%10) << '\n';
    cout << n*(m/10%10) << '\n';
    cout << n*(m/100) << '\n';
    cout << n*m;
}
