#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime> 
using namespace std;

int main(){
	cout << "Press Enter 3 times to reveal your future.";
	for(int i = 0; i < 3; i++){
		cin.get();
	}
	srand(time(0));
	int x = rand()%9;
	string v[] = {"A","B+","B","C+","C","D+","D","F","W"};
	cout << "You will get " << v[x] << " in this 261102."; 
	return 0;
}