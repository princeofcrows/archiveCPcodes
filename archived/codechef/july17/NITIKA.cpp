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

string star[200000], str, str1, str2, str3;
long long ara[200005], ara2[200005];
vector < pair <long long, long long> > ab;
vector <string> dat;
char ch;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> t;
    getline(cin, str);
    while(t--){
        getline(cin, str);
        dat.clear();
        str1.clear();
        for(i=0;i<str.length();i++){
            if(str[i]==' '){
                dat.push_back(str1);
                str1.clear();
                continue;
            }
            str1+=str[i];
        }
        for(i=0;i<dat.size();i++){
            ch = toupper(dat[i][0]);
            cout << ch <<". ";
        }
        for(i=0;i<str1.length();i++){
            if(i==0) ch = toupper(str1[i]);
            else ch = tolower(str1[i]);
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}













