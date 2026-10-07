#include <iostream>
#include <Windows.h>


int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));

	int apple = 0, apelicin = 0, abrikos = 0, grusha = 0, tomat = 0, lyk = 0, ogyr = 0, chesnok = 0, petra = 0, chet = 0, choose = 0, skidka_petra;
	double summa = 0.0, summa_skudka = 0.0;

	while (true)
	{
		system("cls");
		std::cout << "Добро пожаловать в магазина \"Не александра\"\n";
		std::cout << "Категории\n";
		std::cout << "1 - Фруктовое\n";
		std::cout << "2 - Овощные\n";
		std::cout << "3 - Чаи\n";
		std::cout << "4 - Рассчет\n";
		std::cout << "0 - Отмена всего и выключение\n";
		std::cout << "Ввод: ";
		std::cin >> choose;
		std::cout << "\n\n";


		while (true)
		{
			if (choose == 1)
			{
				while (true)
				{
					system("cls");
					std::cout << "Какой тип напитка хотите выбрать\n";
					std::cout << "1 - яблочный			| 100 рублей	| Вы выбрали " << apple <<"\n"; 
					std::cout << "2 - апельсиновый		| 150 рублей	| Вы выбрали "<< apelicin <<"\n";
					std::cout << "3 - абрикосовый			| 75 рублей	| Вы выбрали " <<  abrikos << "\n";
					std::cout << "4 - грушевый			| 125рублей	| Вы выбрали " << grusha << "\n";
					std::cout << "0 - выход\n";
					std::cout << "Ввод: ";
					std::cin >> choose;

					if (choose == 1)
					{

						system("cls");
						std::cout << "сколько вы хотите взять ябочного сока\n";
						std::cout << "Ввод: ";
						std::cin >> apple;



					}
					else if (choose == 2)
					{

						system("cls");
						std::cout << "сколько вы хотите взять апельсинового сока\n";
						std::cout << "Ввод: ";
						std::cin >> apelicin;


					}
					else if (choose == 3)
					{

						system("cls");
						std::cout << "сколько вы хотите взять абрикосового сока\n";
						std::cout << "Ввод: ";
						std::cin >> abrikos;

					}
					else if (choose == 4)
					{

						system("cls");
						std::cout << "сколько вы хотите взять грушевого сока\n";
						std::cout << "Ввод: ";
						std::cin >> grusha;

					}
					else
					{
						std::cout << "Выход из выбора фруктовых соков\n";
						Sleep(500);
						break;
					}
					
				}
			}
			if (choose == 2) 
			{
				while(true)
				{
						system("cls");
						std::cout << "Какой тип напитка хотите выбрать\n";
						std::cout << "1 - томатный		| 100 рублей	| Вы выбрали " << tomat << "\n";
						std::cout << "2 - луковый		| 150 рублей	| Вы выбрали " << lyk << "\n";
						std::cout << "3 - огуречный		| 75 рублей	| Вы выбрали " << ogyr << "\n";
						std::cout << "0 - выход\n";
						std::cout << "Ввод: ";
						std::cin >> choose;

						if (choose == 1)
						{

							system("cls");
							std::cout << "сколько вы хотите взять томатного сока\n";
							std::cout << "Ввод: ";
							std::cin >> tomat;



						}
						else if (choose == 2)
						{

							system("cls");
							std::cout << "сколько вы хотите взять лукового сока\n";
							std::cout << "Ввод: ";
							std::cin >> lyk;


						}
						else if (choose == 3)
						{

							system("cls");
							std::cout << "сколько вы хотите взять огуречного сока\n";
							std::cout << "Ввод: ";
							std::cin >> ogyr;

						}
						else
						{
							std::cout << "Выход из выбора Овощных соков\n";
							Sleep(500);
							break;
						}
				}
			}
			if (choose == 3)
			{
				while (true)
				{
					system("cls");
					std::cout << "Какой тип чая хотите выбрать\n";
					std::cout << "1 - чесночный		| 100 рублей	| Вы выбрали " << chesnok << "\n";
					std::cout << "2 - петрушный		| 150 рублей	| Вы выбрали " << petra << "\n";
					std::cout << "0 - выход\n";
					std::cout << "Ввод: ";
					std::cin >> choose;

					if (choose == 1)
					{

						system("cls");
						std::cout << "сколько вы хотите взять томатного сока\n";
						std::cout << "Ввод: ";
						std::cin >> chesnok;



					}
					else if (choose == 2)
					{

						system("cls");
						std::cout << "сколько вы хотите взять лукового сока\n";
						std::cout << "Ввод: ";
						std::cin >> petra;


					}
					else
					{
						std::cout << "Выход из выбора Чаёв\n";
						Sleep(500);
						break;
					}
				}
			}
			if (choose == 4)
			{
				for (int i = 0; i < 1; i++)
				{
					std::cout << "Вы взяли: \n";
					if (apple > 0)
					{
						std::cout << "яблочного сока " << apple << " штук\n";
						apple = apple * 100;
						std::cout << "Стоимость всего яблочного сока: " << apple << "\n\n";
					}
					if (apelicin > 0)
					{
						std::cout << "апельсинового сока " << apelicin << " штук\n";
						apelicin = apelicin * 150;
						std::cout << "Стоимость всего апельсинового сока: " << apelicin << "\n\n";
					}
					if (abrikos > 0)
					{
						std::cout << "абрикосный сока " << abrikos << " штук\n";
						abrikos = abrikos * 75;
						std::cout << "Стоимость всего абриконого сока: " << abrikos << "\n\n";
					}
					if (grusha > 0)
					{
						std::cout << " грушевый сока " << grusha << " штук\n";
						grusha = grusha * 125;
						std::cout << "Стоимость всего абриконого сока: " << grusha << "\n\n";
					}
					if (tomat > 0)
					{
						std::cout << " томатный сока " << tomat << " штук\n";
						tomat = tomat * 100;
						std::cout << "Стоимость всего абриконого сока: " << tomat << "\n\n";
					}
					if (lyk > 0)
					{
						std::cout << " луковый сока " << lyk << " штук\n";
						lyk = lyk * 150;
						std::cout << "Стоимость всего абриконого сока: " << lyk << "\n\n";
					}
					if (ogyr > 0)
					{
						std::cout << " огручный сока " << ogyr << " штук\n";
						ogyr = ogyr * 75;
						std::cout << "Стоимость всего абриконого сока: " << ogyr << "\n\n";
					}
					if (chesnok > 0)
					{
						std::cout << "чесночный чай " << chesnok << " штук\n";
						chesnok = chesnok * 100;
						std::cout << "Стоимость всего абриконого сока: " << chesnok << "\n\n";
					}
					if (petra > 0)
					{
						if (petra >= 3)
						{
							std::cout << "Вы попали в зону скидки вся петрушка на 5% дешевле\n";
							petra = petra / 3;
							skidka_petra = lyk;
							for (int i = 0; i < skidka_petra; i++)
							{
								petra = (((3 * lyk) * 5) / 100) * skidka_petra;
							}
						}
						std::cout << " петрушка чай штук " << petra << "\n";
						petra = petra * 150;
						std::cout << "Стоимость всего сока: " << petra << "\n\n";
					}
					summa = apple + apelicin + abrikos + grusha + tomat + lyk + ogyr + chesnok + petra;

					if (summa > 1500)
					{
						std::cout << "Без скидки была бы цена чека \"" << summa << "\"\n";
						summa_skudka = summa;
						summa_skudka = (summa_skudka * 13) / 100;
						summa = summa - summa_skudka;

						std::cout << "Вы попали в зону скидки вы привысили стоимость чека \"1500\"\n\n";

						std::cout << "Потвердите Покупку на сумму: " << summa << "\n";
					}
					else 
					{
						std::cout << "Потвердите Покупку на сумму: " << summa << "\n";
					}

					std::cout << "1 - Да, 0 - нет\n";
					std::cout << "Ввод: ";
					std::cin >> chet;
					if (chet == 1)
					{
						std::cout << "Спасибо за покупку";
						Sleep(2500);
					}
					else 
					{
						std::cout << "Операция отменена\n";
						Sleep(1000);
					}
					break;
				}
			}
			break;
		}

	}






	return 0;
}