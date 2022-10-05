#pragma once

void task2() {
	int a, b;
	cout << ("¬ведите цену товара: ");
	cin >> a;
	cout << ("¬ведите кол-во товара: ");
	cin >> b;
	
	int s = a * b;

	if (s>=500){
		s = s * 0.9;
	}

	cout << ("—умма: ", s);
}