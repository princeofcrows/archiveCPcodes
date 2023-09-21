//prince_of_crows
//revolution_for_redemption
//BUET_Mushroom

/*This is beginning to feel like the long
winded blues of the never
Barely controlled locomotive consuming the picture
and blowing the crows, the smoke

This is beginning to feel like the long
winded blues of the never
Static explosion devoted to crushing the broken
and shoving their souls to ghost

Eternalised. Objectified.
You set your sights so high.
But this is beginning to feel like
the bolt busted loose from the lever

Never mind
Death professor
Your structure's fine
My dust is better
Your victim flies so high
All to catch a bird's eye view of who's next*/

#include <bits/stdc++.h>

using namespace std;
string star[200000], str, str1, str2;
bool ara[1005];
vector <long long> x;
vector <long long> y;
vector < pair <long long, long long> > ab;
map <double, set <long long> > dat;
map <double, set <double> > dat3;
map <pair<double, double>, set <long long>> dat4;
map <double, long long> dat2;
vector < vector <long long> > g(100005);

struct point{
    long long a, b, c, d, e;
};
point pnt;
vector <point> pnts;

point vec(point b, point a){
    point ab;
    ab.a = a.a - b.a;
    ab.b = a.b - b.b;
    ab.c = a.c - b.c;
    ab.d = a.d - b.d;
    ab.e = a.e - b.e;
    return ab;
}

long long dot(point b, point a){
    long long lob = b.a*a.a + b.b*a.b + b.c*a.c + b.d*a.d + b.e*a.e;
    return lob;
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, a, b, mx, d, k, l, c;
    long long ax, ay, bx, by, cx, cy;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> pnt.a >> pnt.b >> pnt.c >> pnt.d >> pnt.e;
        pnts.push_back(pnt);
    }
    memset(ara, true, sizeof ara);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j==i) continue;
            a = 1;
            for(k=j+1;k<n;k++){
                if(k==i) continue;
                point ab = vec(pnts[i], pnts[j]);
                point ac = vec(pnts[i], pnts[k]);
                if(dot(ab, ac)>0) {
                    ara[i] = false;
                    a = 0;
                }
                if(a==0) break;
            }
            if(a==0) break;
        }
    }
    ans = 0;
    for(i=0;i<n;i++) ans+= ara[i];
    cout << ans << endl;
    for(i=0;i<n;i++) if(ara[i]) cout << i+1<< endl;
    return 0;
}





















