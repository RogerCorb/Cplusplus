#include <iostream>
#include <string>
using namespace std;

int main()

{
	int num = 65;
	for (int i = 1; i <= num; i++) {
		if ((i % 3 == 0) && (i % 5 == 0)) {
			cout << "FizzBuzz \n";
		}
		else if (i % 3 == 0 && i%5!=0) {
			cout << "Fizz \n";			
		}
		else if (i % 5 == 0) {
			cout << "Buzz \n";			
		}
		else {
			cout << i << "\n";
		}
	}
	system("PAUSE");
	return 0;
}