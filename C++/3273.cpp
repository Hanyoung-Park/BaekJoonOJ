#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num[n];
    for(int i=0;i<n;i++) {
        cin >> num[i];
    }
    sort(num, num+n);
    int x;
    cin >> x;
    
    int sum = 0;
    int l = 0;
    int r = n-1;
    while(l < r) {
        if(num[l]+num[r]==x) {
            sum += 1;
            l += 1;
            r -= 1;
        } else if(num[l]+num[r] > x) {
            r -= 1;
        } else l += 1;
    }
    cout << sum;
}
