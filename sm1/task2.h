#pragma once

void task2() {
	int a, b;
	cout << ("������� ���� ������: ");
	cin >> a;
	cout << ("������� ���-�� ������: ");
	cin >> b;
	
	int s = a * b;

	if (s>=500){
		s = s * 0.9;
	}

	cout << ("�����: ", s);
}