#include <bits/stdc++.h>
using namespace std;

string star[3005];
int ara[30], n;
char res[3005], ch;
set <int> s1, s2;
set <int>::iterator it;

int main(){
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int i, j, p1, g1, p2, g2, h1, h2;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> star[i];
    }
    res[0] = star[0][0];
    s1.insert(0);
    s1.insert(1);
    for(i=1;i<n;i++){
        s2.clear();
        ch = 'z';
        for(it=s1.begin();it!=s1.end();it++){
            if(star[i][*it]<ch) ch = star[i][*it];
        }
        for(it=s1.begin();it!=s1.end();it++){
            if(star[i][*it]==ch) {
                s2.insert(*it);
                s2.insert(*it+1);
            }
        }
        res[i] = ch;
        s1 = s2;
    }
    for(i=0;i<n;i++) cout << res[i];
    return 0;
}
