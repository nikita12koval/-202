
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	double x, a, c, b, d, n,s, g = 9.81;
	int selection;

	cout << "Укажите математическую операцию" << endl;


	cout << "1 сочетание" << endl
		<< "2 вычитание" << endl
		<< "3 умножение" << endl
		<< "4 деление" << endl
		<< "5 корень числа"<<endl
		<< "6 возведение в степень"<<endl
		<< "7 Другие функции" << endl
		<< "8 квадратное уравнение" << endl;
	cin >> selection;


	switch (selection)
	{
	case 1:
		cout << "Введите значение a";
		cin >> a;
		cout << "Введите значение b";
		cin >> c;
		cout << "Результат сложения" << a + c << endl;
		break;
	case 2:
		cout << "Введите значение a";
		cin >> a;
		cout << "Введите значение b";
		cin >> c;
		cout << "Результат вычитания" << a - c << endl;
		break;
	case 3:
		cout << "Введите значение a";
		cin >> a;
		cout << "Введите значение b";
		cin >> c;
		cout << "Результат умножения" << a * c << endl;
		break;
	case 4:
		cout << "Введите значение a";
		cin >> a;
		cout << "Введите значение b";
		cin >> c;
		cout << "Результат деления" << a / c << endl;
		break;
	case 5:
		cout << "корень из какого числа?";
		cin >> a;
		cout << "корень из вашего числа" << (char)32 << sqrt(a);
		break;
	case 6:
		cout << "число в которое нужно возвести";
			cin >> a;
			cout << "степень числа";
			cin >> b;
			cout << pow(a, b);
			break;


	case 7:

		cout << "Выберете операцию" << endl;
		cout << "1 физика" << endl
			<< "2 геометрия" << endl;

		break;
		cin >> selection;
		switch (selection)
		{



		case 1:

			cout << " выберете физическую операцию" << endl
				<< "1 Скорость тела в конце падения" << endl
				<< "2 сила тяжести" << endl;

			cin >> selection;

			switch (selection)
			{
			case 1:
				cout << "Введите высоту с которой падает предмет";
				cin >> d;
				n = sqrt(2 * g * d);
				cout << "Скорость тела в конце падения равна" << (char)32 << n;


				break;
			case 2:
				cout << "Введите массу предмета" << endl;
				cin >> a;
				b = g * a;
				cout << "Сила притяжения предмета равна" << (char)32 << b;
				break;
			}

			break;
		case 2:



			cout << "Укажите геометрическую операцю" << endl
				<< "1-площадь треугольника по формуле Герона" << endl
				<< "2-объем прямоугольного параллелепипеда" << endl
				<< "3-площадь куба" << endl
				<< "4-обем куба" << endl;


			cin >> selection;
			switch (selection)
			{

			case 1:

				cout << "Введите сторону а";
				cin >> a;
				cout << "Введите сторону b";
				cin >> b;
				cout << "Введите сторону с";
				cin >> c;
				d = (a + b + c) / 2;
				n = sqrt(d * (d - a) * (d - b) * (d - c));
				cout << "площадь треугольника равна" << (char)32 << n << endl;
				break;

			case 2:

				cout << "Введите сторону а";
				cin >> a;
				cout << "Введите сторону b";
				cin >> b;
				cout << "Введите сторону с";
				cin >> c;

				d = a * b * c;
				cout << "объем прямоугольного параллелепипеда равен" << (char)32 << d;
				break;


			case 3:

				cout << "Введите стороны куба" << endl;
				cout << "Введите сторону а";
				cin >> a;
				cout << "Введите сторону b";
				cin >> b;
				cout << "Введите сторону с";
				cin >> c;
				d = (a * b + b * c + a * c) * 2;
				cout << "площадь куба равна" << (char)32 << d;

				break;


			case 4:


				cout << "Введите длину ребра куба " << endl;
				cin >> a;
				d = pow(a, 2);
				cout << "объем куба равен" << (char)32 << d;
				break;
			
			}
			break;
		case 8:

			cout << " 1 квадратное уравнение" << endl;
			cin >> selection;

			switch (selection)
			{
			case 1:
				cout << "Введите значение a: ";
				cin >> a;
				cout << "Введите значение b: ";
				cin >> b;
				cout << "Введите значение c: ";
				cin >> c;


				if ((b * b - 4 * a * c) >= 0)
				{

					x = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
					cout << "Первый корень равен " << x << endl;
					x = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);
					cout << "Второй корень равен " << x << endl;
				}


				else
				{
					cout << "Дискриминант меньше 0, корни невещественные." << endl;
				}
			default:
				break;
			}
			
		default:
			break;
		}
	}

}
	

	



	
	
	
		




	

