#include <iostream>
#include <ctime>//для бібліотеки time
#include <cstdlib>//для бібліотеки random
using namespace std;
int main(){
	int arr[6][4];
	int even = 0;
	srand(time(NULL));
	for (int i = 0; i < 6; i++) { // для рядків 
		for (int j = 0; j < 4; j++) {// для стовпчиків
			arr[i][j] =rand() %10;
		}
	}
	for (int i = 0; i < 4; i++) {
		even = 0;
	for (int j = 0; j < 6; j++) {
			if (arr[j][i] % 2 == 0)//рахує кількість парних в стовпчику
				even++;
		}
		cout << "in " << i << " column of even number = " << even << endl;
	}
	  for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 4; j++) {
			cout << arr[i][j] << ' ';
		}//виведення двовимірного масиву
		cout << endl;
	}
}