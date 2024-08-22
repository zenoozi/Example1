#include <iostream>
using namespace std;
int main() {
	 float n;
	int s = 0;
	cout << "Please specify the number of Array members? ";
	cin >> n;
	float* array = new float[n];
	float average;
	for (int i = 0; i < n; i++) {
		cout << "Please Enter " << i + 1 << " Number: ";
		cin >> array[i];
		s += array[i];
	}
	average = s / n;
	cout << "---------------------------\nArray is [";
	for (int i = 0; i < n; i++) {
		cout  << array[i] << " ";
	}
	cout << "]\n-----------------------------\nThe Average of above Numbers is: " << average;
	return 0;
}