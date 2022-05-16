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
long long ara[200005], ara2[200005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
map <long long, long long> dat;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> str;
    a = (str[0]-'0')*10+(str[1]-'0');
    b = (str[3]-'0')*10+(str[4]-'0');
    t = 0;
    while(1){
        str1 = to_string(a);
        if(str1.length()==1){
            str1+="0";
            reverse(str1.begin(), str1.end());
        }
        str2 = to_string(b);
        if(str2.length()==1){
            str2+="0";
            reverse(str2.begin(), str2.end());
        }
        str = "";
        str+=str1;
        str+=str2;
        str1 = str;
        reverse(str.begin(), str.end());
        if(str==str1){
            cout << t;
            return 0;
        }
        t++;
        b++;
        if(b==60){
            b = 0;
            a++;
            if(a==24) a = 0;
        }
    }
    return 0;
}













