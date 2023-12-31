#include <iostream>
#include <array>

using namespace std;
int binary_search(int list[], double item);

int main() {
	int my_list[] = { 1, 3, 5, 7, 9, 123,543,666 };
	double x;
	cout << "Enter your number: ";
	cin >> x;
	auto a = binary_search(my_list, x);
	if (a != false)
		cout << a;
	else if (a == false)
		cout << "None";
	return 0;
}
int binary_search(int list[], double item) {
	bool exist = true;
	int low = 0, high, mid, guess;
	high = ((sizeof(list) / 2) + 1) - 1;
	while (low <= high) {
		mid = (low + high) / 2;
		guess = list[mid];
		if (guess == item) {
			return mid;
		}
		else if (guess > item) {
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}
	}
	return exist = false;
}