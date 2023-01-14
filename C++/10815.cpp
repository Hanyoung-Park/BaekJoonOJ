#include <iostream>
#include <algorithm>
using namespace std;

int arr[500001];

bool bs(int n, int target) {
    int start = 0, end = n-1;
    while(start<=end) {
        int mid = (start+end)/2;
        if(arr[mid]==target) return 1;
        else if(arr[mid]>target) {
            end = mid-1;
        } else start = mid+1;
    }
    return 0;
}


int main() {
    
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int n, m;
    cin >> n;
    
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    cin >> m;
    for(int j=0;j<m;j++) {
        int temp;
        cin >> temp;
        cout << bs(n, temp) << " ";
    }
    
}
