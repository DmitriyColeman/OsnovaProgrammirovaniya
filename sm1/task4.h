#pragma once

void task4() {
	int ev, al, pr, alt;
	int day = 1;

	cout << ("�������� � ������ ����: "); cin >> ev;
	cout << ("\n������� ����: "); cin >> al;
	cout << ("\n������� ����������: "); cin >> pr;

	pr = 1+(pr / 100);
	
	for (alt = 0; alt < al;){
		alt = alt + ev;
		ev = ev * pr;
		day++;
	}

	printf("\n�������� ����� ����� %d ����", day-1);
}
