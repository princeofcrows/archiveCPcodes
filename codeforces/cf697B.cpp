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
long long ara[100005], ara2[100005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, e, v;
    while(cin >> str){
        str1.clear();
        str2.clear();
        str1+=str[0];
        i = 2;
        while(str[i]!='e'){
            str1+=str[i];
            i++;
        }
        d = 0;
        for(i=i+1;i<str.length();i++){
            d=d*10+(str[i]-'0');
        }
        if(str1.length()<=d+1){
            while(str1.length()!=d+1) str1+='0';
            for(i=0;i<str1.length();i++){
                if(str1[i]!='0') break;
            }
            if(i==str1.length()) cout << 0;
            else cout << str1;
        }
        else{
            for(i=0;i<d+1;i++){
                str2+=str1[i];
            }
            for(i=0;i<d+1;i++){
                if(str2[i]!='0')break;
            }
            if(i==str2.length()) cout << 0;
            else{
                for(i=0;i<d+1;i++){
                    if(str2[i]!='0')break;
                }
                for(i=i;i<d+1;i++){
                    cout<<str2[i];
                }
            }
            str2 = "";
            for(i=d+1;i<str1.length();i++){
                str2+=str1[i];
            }
            for(i=0;i<str2.length();i++){
                if(str2[i]!='0')break;
            }
            if(i==str2.length()) cout << "";
            else cout <<"."<<str2;
        }
        cout << endl;
    }
    return 0;
}













