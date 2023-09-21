#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
  		Student(string firstName, string lastName, int identification, vector<int> testScores): Person(firstName, lastName, identification){
  			this->testScores = testScores;
		}
  		
  		char calculate(){
  			int result = 0;
  			for(int i=0; i<testScores.size(); i++){
  				result+=testScores[i];
			}
			result/=testScores.size();
			if(result<=100&&result>=90) return 'O';
			else if(result<90&&result>=80) return 'E';
			else if(result<80&&result>=70) return 'A';
			else if(result<70&&result>=55) return 'P';
			else if(result<55&&result>=40) return 'D';
			else return 'T';
		}
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}
