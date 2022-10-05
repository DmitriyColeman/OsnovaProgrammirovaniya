#pragma once

void task4() {
	int ev, al, pr, alt;
	int day = 1;

	cout << ("Пробежал в первый день: "); cin >> ev;
	cout << ("\nСколько надо: "); cin >> al;
	cout << ("\nПроцент увеличения: "); cin >> pr;

	pr = 1+(pr / 100);
	
	for (alt = 0; alt < al;){
		alt = alt + ev;
		ev = ev * pr;
		day++;
	}

	printf("\nПревысит лимит через %d дней", day-1);
}
