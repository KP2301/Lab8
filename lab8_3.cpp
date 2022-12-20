#include<iostream>
using namespace std;

char before(char x){
	char ans;
	if(x < 'A' or x > 'Z'){
		ans = '0';
		return ans;
	}else if(x == 'A'){
		ans = 'Z';
		return ans ;
	}
	return x - 1 ;

}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
