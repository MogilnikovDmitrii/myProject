#include <iostream>

using namespace std;

int main() {
	int a,b;
	double result;
	char oper;
	cin >> a >> b;
	cin >> oper;
	switch (oper)
	{
	case '+':
		result = a + b;
		break;
	case '-':
		result = a - b;
		break;
	case '*':
		result = a * b;
		break;
	case '/':
		if (b != 0) {
			result = a / b;
		} else {
			cout << "Ошибка: деление на ноль";
			return 0;
		}
		break;
	default:
		cout << "Неверный оператор";
		return 0;
	}
	cout << result;
	return 0;
}
