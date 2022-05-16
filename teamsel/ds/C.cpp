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
long long ara[100005];
map <long long, long long> tree;
map <long long, long long> dat;
map <long long, long long> dat1;
map <long long, long long> dat2;
priority_queue < pair<long long, pair<long long, long long> > > pq;

void init(long long node, long long b, long long e){
    if(b==e){
        tree[node] = ara[b];
        return;
    }
    long long left = node*2;
    long long right = node*2+1;
    long long mid = (b+e)/2;
    init(left, b, mid);
    init(right, mid+1, e);
    tree[node] = tree[left]+tree[right];
}

long long query(long long node, long long b, long long e, long long i, long long j){
    if(i>e||j<b){
        return 0;
    }
    if(b>=i&&e<=j){
        return tree[node];
    }
    long long left = node*2;
    long long right = node*2+1;
    long long mid = (b+e)/2;
    long long p1 = query(left, b, mid, i, j);
    long long p2 = query(right, mid+1, e, i, j);
    return p1+p2;
}
void update(long long node, long long b, long long e, long long i, long long newvalue){
    if(i>e||i<b){
        return;
    }
    if(b>=i&&e<=i){
        tree[node] = newvalue;
        return;
    }
    long long left = node*2;
    long long right = node*2+1;
    long long mid = (b+e)/2;
    update(left, b, mid, i, newvalue);
    update(right, mid+1, e, i, newvalue);
    tree[node] = tree[left]+tree[right];
}
int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, c, a, b, mx, d, k, l, x,s;
    cin >> n >> s;
    pq.push({n, {1, n}});
    dat1[1] = n;
    dat2[n] = 1;
    while(s--){
        cin >> a;
        if(a==0){
            cin >> i >> j;
            ans = query(1, 1, n, i, j);
            cout << ans << endl;
        }
        else{
            if(dat[a]){
                b = dat1[dat[a]+1];
                c = dat2[dat[a]-1];
                if(b&&c){
                    dat1[c] = b;
                    dat2[b] = c;
                    dat1[dat[a]+1] = 0;
                    dat2[dat[a]-1] = 0;
                    pq.push({b-c+1, {c, b}});
                }
                else if(b){
                    dat1[dat[a]] = b;
                    dat2[b] = dat[a];
                    dat1[dat[a]+1] = 0;
                    pq.push({b-dat[a]+1,{dat[a], b}});
                }
                else if(c){
                    dat2[dat[a]] = c;
                    dat1[c] = dat[a];
                    dat2[dat[a]-1] = 0;
                    pq.push({dat[a]-c+1, {c, dat[a]}});
                }
                update(1, 1, n, dat[a], 0);
                dat[a] = 0;
            }
            else{
                pair < long long, pair <long long, long long> > tp;
                while(1){
                    tp = pq.top();
                    pq.pop();
                    b = 0;
                    if(tp.first%2==0) b = 1;
                    c = tp.second.first;
                    b += (tp.second.first+tp.second.second)/2;
                    d = tp.second.second;
                    if(dat1[c]==d&&dat2[d]==c){
                        dat1[c] = b-1;
                        dat2[b-1] = c;
                        dat2[d] = b+1;
                        dat1[b+1] = d;
                        break;
                    }
                }
                dat[a] = b;
                update(1, 1, n, b, 1);
                pq.push({(b-c), {c, b-1}});
                pq.push({(d-b), {b+1, d}});
            }
        }
    }
    return 0;
}














