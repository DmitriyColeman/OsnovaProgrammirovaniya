#pragma once

void Task3()
{
	int n, S;
	cout << "����� �����������: "; cin >> n;

	int K = 0;
	for (int i = 0; i < n; i++)
	{
		printf("�������� ���������� #%d\n", i+1); cin >> S;
		if (S >= 20000)
		{
			K++;
		}
	}
	printf("����� ������� � ����� �����������: %d", K);
}