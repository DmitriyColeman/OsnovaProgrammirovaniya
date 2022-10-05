#pragma once

void Task3()
{
	int n, S;
	cout << "Число сотрудников: "; cin >> n;

	int K = 0;
	for (int i = 0; i < n; i++)
	{
		printf("Зарплата сотрудника #%d\n", i+1); cin >> S;
		if (S >= 20000)
		{
			K++;
		}
	}
	printf("Число мажоров в нашей организации: %d", K);
}