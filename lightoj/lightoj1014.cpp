#include <cstdio>
#include <cmath>
#include <list>
#include <iostream>

using namespace std;
std::list<int> low;
std::list<int> high;

int main(){
	int T, p, l, q = 1, temp, j, c;
	scanf("%d", &T);
	j = 1;
	while(T--) {
		scanf("%d%d", &p, &l);
		printf("Case %d:", j);
		temp = p - l;
		low.clear();
		high.clear();
		q = 1;
		c = 0;
		while(q<=sqrt(temp)){
			if(temp%q == 0){
				if(q>l){
					low.push_back(q);
					c++;
				}
				if(q*q != temp){
					if(l<(temp/q)){
						high.push_front(temp/q);
						c++;
					}	
				}
			}
			q = q + 1;
		}
		j++;
		if(c==0) printf(" impossible");
		else{
			for (std::list<int>::iterator it=low.begin(); it != low.end(); it++){
    			std::cout << ' ' << *it;
  			}
  			for (std::list<int>::iterator it=high.begin(); it != high.end(); it++){
    			std::cout << ' ' << *it;
  			}
		}
		printf("\n");
	}
	return 0;
}
