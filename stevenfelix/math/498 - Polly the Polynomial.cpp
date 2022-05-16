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

string star[200000], str, str1;
long long ara[200005];
vector < pair <long long, long long> > ab;
vector < pair <long double, long long> > xy;
vector <long long> x;
vector <long long> y;
vector <string> dat;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, k, l, d;
    while(getline(cin, str)){
        a = 0; b = 1;
        str+=" ";
        for(i=0;i<str.length();i++){
            if(str[i]==' '){
                if(str[i-1]==' ') continue;
                x.push_back(a*b);
                b = 1;
                a = 0;
            }
            else if(str[i]=='-'){
                b = -1;
                a = 0;
            }
            else{
                a = a*10+(str[i]-'0');
            }
        }
        getline(cin, str);
        a = 0; b = 1;
        str+=" ";
        for(i=0;i<str.length();i++){
            if(str[i]==' '){
                if(str[i-1]==' ') continue;
                y.push_back(a*b);
                b = 1;
                a = 0;
            }
            else if(str[i]=='-'){
                b = -1;
                a = 0;
            }
            else{
                a = a*10+(str[i]-'0');
            }
        }
        reverse(x.begin(), x.end());
        for(i=0;i<y.size();i++){
            temp = 1;
            ans = 0;
            for(j=0;j<x.size();j++){
                ans+=x[j]*temp;
                temp*=y[i];
            }
            cout << ans;
            if(i!=y.size()-1) cout <<" ";
        }
        x.clear();
        y.clear();
        cout << endl;
    }
    return 0;
}







