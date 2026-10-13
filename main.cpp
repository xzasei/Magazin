#include <iostream>
#include <Windows.h>


int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));

	int apple = 0, apelicin = 0, abrikos = 0, grusha = 0, tomat = 0, lyk = 0, ogyr = 0,chesnok = 0, petra = 0, boyris = 0, // продукты
		applem = 0, apelicinm = 0, abrikosm = 0, grusham = 0, tomatm = 0, lykm = 0, ogyrm = 0, chesnokm = 0, petram = 0, boyrism = 0, lykfree = 0, lykchet = 0, // для счета
		chet = 0, choose = 0, skidka_petra, petrachet = 0, block_frukt = 0, block_nastoi = 0, obnyl = 0, meni_vibr = 0; // выборы и блок
	double summa = 0.0, summa_skudka = 0.0;

	while (true)
	{
		system("cls");
		std::cout << "Добро пожаловать в магазина \"Посос\"\n";
		std::cout << "Категории\n";
		std::cout << "1 - Фруктовое\n";
		std::cout << "2 - Овощные\n";
		std::cout << "3 - Чаи\n";
		std::cout << "4 - Настойки\n";
		std::cout << "5 - Рассчет\n";
		std::cout << "6 - Очистка корзины\n";
		std::cout << "Ввод: ";
		std::cin >> meni_vibr;
		std::cout << "\n\n";


		while (true)
		{
			if (meni_vibr == 1) // фрукты
			{
				system("cls");
				if (boyris >= 1)
				{
					system("cls");
					std::cout << "!!!Что вы взяли из \"Настойного\" раздела будет аннулировано если что то возьмете из \"Фруктового\"!!!\n";
					std::cout << "Если хотите Настойки  зайдите в рассчет и выйдите потом в зайдите корзину и очистите\n";
				}
					while (true)
					{
						std::cout << "Какой тип напитка хотите выбрать\n";
						std::cout << "1 - яблочный			| 100 рублей	| Вы выбрали " << apple << "\n";
						std::cout << "2 - апельсиновый		| 150 рублей	| Вы выбрали " << apelicin << "\n";
						std::cout << "3 - абрикосовый			| 75 рублей	| Вы выбрали " << abrikos << "\n";
						std::cout << "4 - грушевый			| 125 рублей	| Вы выбрали " << grusha << "\n";
						std::cout << "0 - выход\n";
						std::cout << "Ввод: ";
						std::cin >> choose;

						if (choose == 1)
						{

							system("cls");
							std::cout << "сколько вы хотите взять ябочного сока\n";
							std::cout << "Ввод: ";
							std::cin >> apple;
							block_frukt = +1;
							system("cls");
							if (boyris >= 1)
							{
								boyris = 0;
							}
						}
						else if (choose == 2)
						{

							system("cls");
							std::cout << "сколько вы хотите взять апельсинового сока\n";
							std::cout << "Ввод: ";
							std::cin >> apelicin;
							block_frukt = +1;
							system("cls");
							if (boyris >= 1)
							{
								boyris = 0;
							}
						}
						else if (choose == 3)
						{

							system("cls");
							std::cout << "сколько вы хотите взять абрикосового сока\n";
							std::cout << "Ввод: ";
							std::cin >> abrikos;
							block_frukt = +1;
							system("cls");
							if (boyris >= 1)
							{
								boyris = 0;
							}
						}
						else if (choose == 4)
						{

							system("cls");
							std::cout << "сколько вы хотите взять грушевого сока\n";
							std::cout << "Ввод: ";
							std::cin >> grusha;
							block_frukt = +1;
							system("cls");
							if (boyris >= 1)
							{
								boyris = 0;
							}
						}
						else if (choose == 0)
						{
							std::cout << "Выход из выбора фруктовых соков\n";
							Sleep(500);
							break;
						}
						else
						{
							std::cout << "Неправильный ввод\n";
							Sleep(1000);
						}
					}
			}
			if (meni_vibr == 2) // напитки
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
						else if (choose == 0)
						{
							std::cout << "Выход из выбора Овощных соков\n";
							Sleep(500);
							break;
						}
						else
						{
							std::cout << "Неправильный ввод\n";
							Sleep(1000);
						}
				}
			}
			if (meni_vibr == 3) // Чаи
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
					else if (choose == 0)
					{
						std::cout << "Выход из выбора Чаёв\n";
						Sleep(500);
						break;
					}
					else
					{
						std::cout << "Неправильный ввод\n";
						Sleep(1000);
					}
				}
			}
			if (meni_vibr == 4) // настойка
			{
				if (block_frukt >= 1)
				{
					std::cout << "Извините но доступ к настойкам не доступен\n";
					std::cout << "Так как вы взяли что то в фруктовом разделе\n";
					Sleep(1000);
					break;
				}
				else
				{
					while (true)
					{
						system("cls");
						std::cout << "Какой тип настойки хотите выбрать\n";
						std::cout << "1 - Боярищниковый		| 100 рублей	| Вы выбрали " << boyris << "\n";
						std::cout << "0 - выход\n";
						std::cout << "Ввод: ";
						std::cin >> choose;

						if (choose == 1)
						{

							system("cls");
							std::cout << "сколько вы хотите взять бояращника\n";
							std::cout << "Ввод: ";
							std::cin >> boyris;
						}
						else if (choose == 0)
						{
							std::cout << "Выход из выбора настойки\n";
							Sleep(500);
							break;
						}
						else
						{
							std::cout << "Неправильный ввод\n";
						}
					}
				}
			
			}
			if (meni_vibr == 5) // Корзина
			{
				system("cls");
				for (int i = 0; i < 1; i++)
				{
					std::cout << "Корзина \n";
					if (apple > 0)
					{
						std::cout << "Яблочного: " << apple << " штук\n";
						applem = apple * 100;
						std::cout << "Стоимость всего: " << applem << "\n";
					}
					if (apelicin > 0)
					{
						std::cout << "Апельсинового: " << apelicinm << " штук\n";
						apelicinm = apelicin * 150;
						std::cout << "Стоимость всего: " << apelicinm << "\n";
					}
					if (abrikos > 0)
					{
						std::cout << "Абрикосного: " << abrikos << " штук\n";
						abrikosm = abrikos * 75;
						std::cout << "Стоимость всего: " << abrikosm << "\n";
					}
					if (grusha > 0)
					{
						std::cout << "Грушевого: " << grusha << " штук\n";
						grusham = grusha * 125;
						std::cout << "Стоимость всего: " << grusham << "\n";
					}
					if (tomat > 0)
					{
						std::cout << "Томатный - " << tomat << " штук\n";
						tomatm = tomat * 100;
						std::cout << "Стоимость всего: " << tomatm << "\n";
					}
					if (lyk > 0)
					{
						if (lyk > 4)
						{
							std::cout << "Вы попали в зону скидки каждная 4 луковый сок бесплатный\n";
							lykchet = lyk / 4;
							for (int i = 0; i < lykchet; i++)
							{
								lykfree = lyk - lykchet;
								lykm = lykfree * 150;
							}
						}
						std::cout << "Лукового - " << lyk << " штук\n";
						if (lyk <= 3)
						{
							lykm = lyk * 150;
						}
						std::cout << "Стоимость всего: " << lykm << "\n";
					}
					if (ogyr > 0)
					{
						std::cout << "Огуречного - " << ogyr << " штук\n";
						ogyrm = ogyr * 75;
						std::cout << "Стоимость всего: " << ogyrm << "\n";
					}
					if (chesnok > 0)
					{
						std::cout << "Чесночнового - " << chesnok << " штук\n";
						chesnokm = chesnok * 100;
						std::cout << "Стоимость всего: " << chesnokm << "\n";
					}
					if (petra > 0)
					{

						if (petra >= 3)
						{
							std::cout << "Вы попали в зону скидки вся петрушка на 5% дешевле\n";
							skidka_petra = petra / 3;
							for (int i = 0; i < skidka_petra; i++)
							{
								petrachet = (((petra * 150) * 5) / 100) * skidka_petra;
							}
						}
						std::cout << "петрушкового - " << petra << "\n";
						petrachet = petra * 150 - petrachet;
						std::cout << "Стоимость всего: " << petrachet << "\n";
					}
					if (boyris > 0)
					{
						std::cout << "Боярищникового - " << boyris << " штук\n";
						boyrism = boyris * 100;
						std::cout << "Стоимость всего: " << boyrism << "\n";
					}


					summa = applem + apelicinm + abrikosm + grusham + tomatm + lykm + ogyrm + chesnokm + petram;

					if (summa > 2500)
					{
						std::cout << "\nБез скидки была бы цена чека \"" << summa << "\"\n";
						summa_skudka = summa;
						summa_skudka = (summa_skudka * 13) / 100;
						summa = summa - summa_skudka;

						std::cout << "Вы попали в зону скидки вы привысили стоимость чека \"1500\"\n";

						std::cout << "Потвердите Покупку на сумму: \"" << summa << "\"\n";
					}
					else 
					{
						std::cout << "Потвердите Покупку на сумму: \"" << summa << "\"\n";
					}

					if (summa >= 1)
					{
						std::cout << "1 - Да, 0 - нет\n";
						std::cout << "Ввод: ";
						std::cin >> chet;
						if (chet == 1)
						{
							std::cout << "Спасибо за покупку\n";
							Sleep(2500);
							apple = 0, apelicin = 0, abrikos = 0, grusha = 0, tomat = 0, lyk = 0, ogyr = 0, chesnok = 0, petra = 0, chet = 0, skidka_petra = 0, petrachet = 0, boyris = 0, 
							block_frukt = 0, block_nastoi = 0;
						}
						else if (choose == 0)
						{
							std::cout << "Операция отменена\n";
							Sleep(1000);
						}
						else
						{
							std::cout << "Неправильный ввод\n";
							Sleep(1000);
						}
					}
					else
					{
						system("cls");
						std::cout << "У вас корзине нечего нет\nВозвращем в меню";
						Sleep(2500);
					}
					break;

				}
			}
			if (meni_vibr == 6)
			{
				while (true)
				{
					if (apple == 0 && apelicin == 0 && abrikos == 0 && grusha == 0 && tomat == 0 && lyk == 0 && ogyr == 0 && chesnok == 0 && petra == 0 && boyris == 0)
					{
						system("cls");
						std::cout << "У вас корзина пуста";
						Sleep(1000);
						break;
					}
					else
					{
						system("cls");
						std::cout << "У вас в корзине\n";

						if (apple > 0)
						{
							std::cout << "Яблочного: " << apple << " штук\n";
						}
						if (apelicin > 0)
						{
							std::cout << "Апельсинового: " << apelicin << " штук\n";
						}
						if (abrikos > 0)
						{
							std::cout << "Абрикосного: " << abrikos << " штук\n";
						}
						if (grusha > 0)
						{
							std::cout << "Грушевого: " << grusha << " штук\n";
						}
						if (tomat > 0)
						{
							std::cout << "Томатный - " << tomat << " штук\n";
						}
						if (lyk > 0)
						{
							std::cout << "Лукового - " << lyk << " штук\n";
						}
						if (ogyr > 0)
						{
							std::cout << "Огуречного - " << ogyr << " штук\n";
						}
						if (chesnok > 0)
						{
							std::cout << "Чесночнового - " << chesnok << " штук\n";
						}
						if (petra > 0)
						{
							std::cout << "петрушкового - " << petra << "\n";
						}
						if (boyris > 0)
						{
							std::cout << "Боярищникового - " << boyris << " штук\n";
						}
						std::cout << "Вы точно хотите очистить корзину?\n";
						std::cout << "1 - Да 0 - Нет\n";
						std::cout << "Ввод: ";
						std::cin >> obnyl;
						if (obnyl == 1)
						{
							apple = 0, apelicin = 0, abrikos = 0, grusha = 0, tomat = 0, lyk = 0, ogyr = 0, chesnok = 0, petra = 0, chet = 0, skidka_petra = 0, petrachet = 0, boyris = 0,
								block_frukt = 0, block_nastoi = 0;
						}
					}
					break;
				}
			}
			break;
		}
	}

	return 0;
}