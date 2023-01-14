#include <iostream>
using namespace std;

int n;
int arr[51][2];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    int dp[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i][0] >> arr[i][1];
        dp[i]=1;
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(arr[i][0]<arr[j][0] && arr[i][1]<arr[j][1]) {
                dp[i]++;
            }
        }
    }
    for(int i=0;i<n;i++) {
        cout << dp[i] << " ";
    }

}
