#include <iostream>
#include <boost/multiprecision/cpp_int.hpp> 
using namespace std;

int main() {
	// Fibonacci!
	boost::multiprecision::cpp_int n, t1 = 0, t2 = 1, proxTerm;
	cout << "Insira o numero de termos!\n";
	cin >> n;
	system("cls");

	for (int i = 1; i <= n; i++) {
		if (i == 1) {
			cout << t1 << ".\n";
			continue;
		}
		if (i == 2) {
			cout << t2 << ".\n";
			continue;
		}
		proxTerm = t1 + t2;
		t1 = t2;
		t2 = proxTerm;
		cout << proxTerm << ".\n";
	}
	cout << "..." << endl;
	system("pause");
}