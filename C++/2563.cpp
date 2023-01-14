#include <iostream>
#include <algorithm>
using namespace std;

int n, answer;
int map[101][101];

int main() {
    cin >> n;
    for(int i=0;i<n;i++) {
        int x,y;
        cin >> x >> y;
        for(int a=x;a<x+10;a++) {
            for(int b=y;b<y+10;b++) {
                if(map[a][b] == 1) continue;
                map[a][b]=1;
                answer++;
            }
        }
    }
    cout << answer;
}
