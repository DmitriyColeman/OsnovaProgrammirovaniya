#pragma once

void Task1()
{
	printf("Task 1\n");
f:
	printf("Enter R\n");

	std::string strR, strH, strP;
	std::cin >> strR;

	printf("\nEnter h\n");
	std::cin >> strH;

	printf("\nEnter p\n");
	std::cin >> strP;

	int iR, iH, iP;
	iR = atoi(strR.c_str());
	iH = atoi(strH.c_str());
	iP = atoi(strP.c_str());

	if (iR == 0 || iH == 0 || iP == 0)
	{
		std::cin.clear();
		printf("Debil\n");
		goto f;
	}

	//математика
	int V = iR * iH * PI;
	int S = 2 * PI * iR * iH + 2 * PI * iR * iR;
	int m = V * iP;

	printf("V = %d, S = %d, m = %d", V, S, m);
}