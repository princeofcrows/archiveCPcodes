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
long long ara[100005], ara2[100005], ara3[100005], n;
vector <long long> y;
vector <long long> z;
vector <long long> ya;
vector <long long> za;
vector < pair <long long, long long> > ab;
map <long long, long long> dat;
map <long long, long long> dat2;
vector < vector <long long> > g;

double func(double val){
    double ans = -999999999999999999;
    for(int i=0;i<n;i++){
        ans = max(ans, ara[i]*val*val+ara2[i]*val+ara3[i]);
    }
    return ans;
}

double trinary(){
    double l = 0;
    double r = 1000;
    for(int i=0;i<500;i++){
        double l1 = (l*2+r)/3;
        double l2 = (l+2*r)/3;
        if(func(l1)<func(l2)) r = l2;
        else l = l1;
    }
    return l;
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int temp, t, j, i, m, mx, d, k, l, x,s;
    double a, b, c, ans;
    cin >> t;
    while(t--){
        cin >> n;
        ans = 0;
        for(i=0;i<n;i++){
            cin >> ara[i] >> ara2[i] >> ara3[i];
        }
        ans = trinary();
        printf("%.4lf\n", func(ans));
    }
    return 0;
}














