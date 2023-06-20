#include <iostream>
using namespace std;

int main(){
	int A, B;
  	cin >> A >> B;
	//　切り上げをするときは分子に分母の-1を足して割るといい
  	int answer = (B - 1 + A - 2) / (A - 1);
  	cout << answer << endl;
	return 0;
}