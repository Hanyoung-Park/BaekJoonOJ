#include <iostream>
using namespace std;

void hanoi(int num, int start, int to, int bypass) {
    if(num==1) {
        cout << start << " " << to << '\n';
    } else {
        hanoi(num-1, start, bypass, to);
        cout << start << " " << to << '\n';
        hanoi(num-1, bypass, to, start);
    }
}

int main() {
    int n;
    cin >> n;
    cout << (1<<n) -1 << '\n';
    hanoi(n, 1, 3, 2);
}
