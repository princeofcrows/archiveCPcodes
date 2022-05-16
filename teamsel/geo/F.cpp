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
vector < pair <long long, long long> > ab;
map <char, long long> dat;
map <char, long long> dat2;
vector < vector <long long> > g(100005);
double x[10005], y[10005], z[10005];
long long n;

double height(double r){
    double h = 0;
    for(int i=0;i<n;i++){
        h = max(h, z[i]*r/(r-sqrt(x[i]*x[i]+y[i]*y[i])));
    }
    return h;
}

double area(double r){
    double h = height(r);
    return acos(-1)*r*r*h/3;
}

double trinary(){
    double rh, rl, rml, rmh;
    rl = 0;
    for(int i=0;i<n;i++){
        rl = max(rl, sqrt(x[i]*x[i]+y[i]*y[i]));
    }
    rh = 4000.0;
    for(int i=0;i<=500;i++){
        rml = (rl*2+rh)/3;
        rmh = (rl+2*rh)/3;
        if(area(rml)>=area(rmh)) rl = rml;
        else rh = rmh;
        //cout << rl <<" "<<rh<<endl;
    }
    return rl;
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int ans, temp, t, j, i, m, a, b, mx, d, k;
    while(cin >> n){
        for(i=0;i<n;i++){
            cin >> x[i] >> y[i] >> z[i];
        }
        double r = trinary();
        double h = height(r);
        printf("%.3lf %.3lf\n", h, r);
    }
    return 0;
}
















