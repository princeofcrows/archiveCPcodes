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
map <char, int> dat;
bool flag;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> str >> str1;
    cin >> n;
    for(i=0;i<str.length();i++){
        dat[str[i]] = 1;
    }
    flag = false;
    for(i=0;i<str1.length();i++){
        if(str1[i]=='*'){
            flag = true;
            break;
        }
    }
    while(n--){
        cin >> str2;
        if((str2.length()>str1.length())){
            if(!flag) cout << "NO\n";
            else{
                j = 0;
                c = 1;
                for(i=0;i<str1.length();i++){
                    if(str1[i]=='*') break;
                    if(str1[i]=='?'){
                        if(!dat[str2[j]]){
                            cout << "NO\n";
                            c = 0;
                            break;
                        }
                    }
                    else if(str1[i]!=str2[j]){
                        cout << "NO\n";
                        c = 0;
                        break;
                    }
                    j++;
                }
                if(c==0) continue;
                a = j;
                j = str2.length()-1;
                c = 1;
                for(i=str1.length()-1;i>=0;i--){
                    if(str1[i]=='*') break;
                    if(str1[i]=='?'){
                        if(!dat[str2[j]]){
                            cout << "NO\n";
                            c = 0;
                            break;
                        }
                    }
                    else if(str1[i]!=str2[j]){
                        cout << "NO\n";
                        c = 0;
                        break;
                    }
                    j--;
                }
                if(c==0) continue;
                c = 1;
                d = str2.length()-1;
                for(a=a;a<=min(j, d);a++){
                    if(dat[str2[a]]){
                        cout << "NO\n";
                        c = 0;
                        break;
                    }
                }
                if(c==0) continue;
                cout << "YES\n";
            }
        }
        else if((str1.length()==str2.length())){
            j = 0;
            for(i=0;i<str1.length();i++){
                if(str1[i]=='*'){
                    if(dat[str2[j]]){
                        cout << "NO\n";
                        break;
                    }
                }
                else if(str1[i]=='?'){
                    if(!dat[str2[j]]){
                        cout << "NO\n";
                        break;
                    }
                }
                else if(str1[i]!=str2[j]){
                    cout << "NO\n";
                    break;
                }
                j++;
            }
            if(i==str1.length()) cout << "YES\n";
        }
        else if((str1.length()-str2.length())==1){
            //cout << int(str2.length()-str1.length())<<endl;
            j = 0;
            for(i=0;i<str1.length();i++){
                if(str1[i]=='*'){
                    continue;
                }
                else if(str1[i]=='?'){
                    if(!dat[str2[j]]){
                        cout << "NO\n";
                        break;
                    }
                }
                else if(str1[i]!=str2[j]){
                    cout << "NO\n";
                    break;
                }
                j++;
            }
            if(i==str1.length()) cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}













