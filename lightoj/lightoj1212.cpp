#include <deque>
#include <string>
#include <iostream>
using namespace std;

int main(){
	int T, t, num, count, n = 0, m = 0;
	cin >> T;
	string comm;
	t = 1;
	while(T--) {
		deque <int> ara;
		ara.clear();
		cout << "Case " << t << ":" << endl;
		cin >> n >> m;
		count = 0;
		while(count != m){
			cin >> comm;
			if(comm == "pushLeft"){
				cin >> num;
				if(ara.size() == n){
					cout << "The queue is full" << endl;
				}
				else{
					ara.push_back(num);
					cout << "Pushed in left: " << num << endl;
				}
			}
			else if(comm == "pushRight"){
				cin >> num;
				if(ara.size() == n){
					cout << "The queue is full" << endl;
				}
				else{
					ara.push_front(num);
					cout << "Pushed in right: " << num << endl;
				}
			}
			else if(comm == "popLeft"){
				if(ara.size() == 0){
					cout << "The queue is empty"<<endl;
				}
				else{
					cout << "Popped from left: " << ara.back() << endl;
					ara.pop_back();
				}
			}
			else if(comm == "popRight"){
				if(ara.size() == 0){
					cout << "The queue is empty"<<endl;
				}
				else{
					cout << "Popped from right: " << ara.front() << endl;
					ara.pop_front();
				}
			}
			count++;
		}
		t++;
	}
	return 0;
}
