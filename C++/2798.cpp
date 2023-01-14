#include <iostream>
using namespace std;

int n, m;
int card[101];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for(int i=0;i<n;i++) {
        cin >> card[i];
    }
    int res = 0;
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            for(int k=j+1;k<n;k++) {
                if(card[i]+card[j]+card[k]>res && card[i]+card[j]+card[k]<=m) {
                    res = card[i]+card[j]+card[k];
                }
            }
        }
    }
    cout << res;
}
