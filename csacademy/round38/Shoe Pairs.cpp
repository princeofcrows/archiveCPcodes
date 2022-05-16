
#include <bits/stdc++.h>

using namespace std;
long long ara[1005];
map <pair<char, long long>, long long> dat;
char ch;

int main() {
    long long a, b, n, ans, i;
    cin >> n;
    ans = 0;
    for(i=0;i<n;i++){
        cin >> a >> ch;
        if(ch=='L'){
            if(dat[{'R', a}]){
                dat[{'R', a}]--;
                ans++;
            }
            else dat[{'L', a}]++;
        }
        if(ch=='R'){
            if(dat[{'L', a}]){
                dat[{'L', a}]--;
                ans++;
            }
            else dat[{'R', a}]++;
        }
    }
    cout << ans;
    return 0;
}
