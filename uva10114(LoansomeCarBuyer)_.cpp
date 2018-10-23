#include <iostream>
#include <vector>
using namespace std;
double arr[101];
int main() {
	int duration, n;
	double downPayment, loan,payment, amount, loans;

	while (true) {
		cin >> duration >> downPayment >> loan >> n;
		if (duration < 0)
			break;

		int m;
		double p;
		while (n--) {
			cin >> m >> p;
			for (int i = m; i < 101; i++)
				arr[i] = p;
		}

		int now = 0;
		payment= loan / duration;
		amount = (loan + downPayment) * (1 - arr[0]);
		loans = loan;
		while (amount < loans) {
			now++;
			loans -= payment;
			amount = amount * (1-arr[now]);
		}

		cout << now << " month";
		if (now != 1)
			cout << "s";
		cout << endl;
	}

	return 0;
}
