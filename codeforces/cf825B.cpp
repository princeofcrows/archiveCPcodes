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
long long ara[100005], ara2[100005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

bool check(){
    long long i, j, a;
    for(i=0;i<10;i++){
        a = 0;
        for(j=0;j<10;j++){
            if(star[i][j]=='X'){
                a++;
                if(a==5) return true;
            }
            else a = 0;
        }
    }
    for(i=0;i<10;i++){
        a = 0;
        for(j=0;j<10;j++){
            if(star[j][i]=='X'){
                a++;
                if(a==5) return true;
            }
            else a = 0;
        }
    }
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            if(star[i][j]=='X'){
                if(star[i+1][j+1]=='X'){
                    if(star[i+2][j+2]=='X'){
                        if(star[i+3][j+3]=='X'){
                            if(star[i+4][j+4]=='X'){
                                return true;
                            }
                        }
                    }
                }
            }
        }
    }
    for(i=0;i<10;i++) reverse(star[i].begin(), star[i].end());

    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            if(star[i][j]=='X'){
                if(star[i+1][j+1]=='X'){
                    if(star[i+2][j+2]=='X'){
                        if(star[i+3][j+3]=='X'){
                            if(star[i+4][j+4]=='X'){
                                return true;
                            }
                        }
                    }
                }
            }
        }
    }
    for(i=0;i<10;i++) reverse(star[i].begin(), star[i].end());
    return false;
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    for(i=0;i<10;i++){
        cin >> star[i];
    }
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            char ch = star[i][j];
            if(star[i][j]=='.'){
                star[i][j] = 'X';
            }
            if(check()){
                cout << "YES";
                return 0;
            }
            star[i][j] = ch;
        }
    }
    cout << "NO";
    return 0;
}













