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
double ara2[100005], ara3[300005];
vector <long long> x;
vector <long long> y;
map <char, bool> dat;
double pos1;

double mergesort(long long i, long long j, long long n, double pos){
    //cout << i <<": "<<j<<endl;
    if(i==j){
        ara2[i] += 1.0;
        return pos;
    }
    long long mid = (i+j)/2;
    if(n%2==0){
        double pos2 = mergesort(i, mid, n/2, pos);
        pos2 = mergesort(mid+1, j, n/2, pos);
        for(long long l=i;l<=j;l++){
            ara2[l]+=(n*1.0*pos2);
        }
        return pos2;
    }
    else{
        pos1++;
        double pos2 = mergesort(i, mid, n/2+1, pos+1);
        pos2 = mergesort(mid+1, j, n/2, pos+1);
        pos2 = mergesort(i, mid-1, n/2, pos+1);
        pos2 = mergesort(mid, j, n/2+1, pos+1);
        for(long long l=i;l<=j;l++){
            ara2[l]+=(n*1.0*(pos2));
        }
        return pos2;
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, a, b, mx, d, k, l, c, m;
    cin >> n;
    for(i=1;i<=n;i++){
        ara2[i] = 0.0;
    }
    pos1 = 1;
    a = mergesort(1, n, n, 1.0);
    //cout << pos << " ";
    for(i=1;i<=n;i++){
        printf("%.7lf ", ara2[i]/pos1);
    }
    return 0;
}





















