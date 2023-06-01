﻿#include <iostream>
#include <windows.h>

class Vehicles {
protected:
	int speed;
	float race_time;
	std::string name;

public:
	Vehicles()
	{
		speed = 0;
		race_time = 0;
		name = "Транспортное средство";
	}

	Vehicles (int speed, std::string name)
	{
		this->speed = speed;
		this->name = name;
	}

	int Get_speed()
	{
		return speed;
	}

	float Get_race_time()
	{
		return race_time;
	}

	std::string Get_name()
	{
		return name;
	}

	void Set_race_time(float value_race_time) {
		race_time = value_race_time;
	}

	void virtual print_name()
	{
		std::cout << Get_name() << std::endl;
	};
};


class Air_vehicles : public Vehicles
{
public:
	int k;
	int k_plus;
	Air_vehicles() {
		name = "Воздушное транспортное средство";
		speed = 0;
		k = 0;
		k_plus = 0;
	}
};

class Ground_vehicles : public Vehicles
{
public:
	int time_to_rest;
	int rest_time;

	Ground_vehicles()
	{	
		name = "Наземное транспортное средство";
		speed = 0;
		time_to_rest = 0;
		rest_time = 0; 
	}
	Ground_vehicles(int speed, int time_to_rest, int rest_time) : Ground_vehicles()
	{
		this->speed = speed;
		this->time_to_rest = time_to_rest;
		this->rest_time = rest_time;
	}

	int	Get_time_to_rest()
	{
		return time_to_rest;
	};

	int Get_rest_time()
	{
		return rest_time;
	};
};

class Camel : public Ground_vehicles
{
public:
	Camel()
	{
		name = "Верблюд";
		speed = 10;
		time_to_rest = 30;
		rest_time = 5;
	}
	Camel(int time_to_rest, int rest_time) : Camel()
	{
		this->time_to_rest = time_to_rest;
		this->rest_time = rest_time;
	}
};

class Quick_Camel : public Ground_vehicles
{
public:

	Quick_Camel()
	{
		name = "Верблюд-быстроход";
		speed = 40;
		time_to_rest = 10;
		rest_time = 5;
	}
	Quick_Camel(int time_to_rest, int rest_time) : Quick_Camel()
	{
		this->time_to_rest = time_to_rest;
		this->rest_time = rest_time;
	}
};



class Centaur: public Ground_vehicles
{
public:
	Centaur()
	{
		name = "Кентавр";
		speed = 15;
		time_to_rest = 8;
		rest_time = 2;
	}
	Centaur(int time_to_rest, int rest_time) : Centaur()
	{
		this->time_to_rest = time_to_rest;
		this->rest_time = rest_time;
	}
};

class All_boots : public Ground_vehicles
{
public:
	All_boots()
	{
		name = "Ботинки-вездеходы";
		speed = 6;
		time_to_rest = 60;
		rest_time = 10;
	}
	All_boots(int time_to_rest, int rest_time) : All_boots()
	{
		this->time_to_rest = time_to_rest;
		this->rest_time = rest_time;
	}
};

class Magic_carpet : public Air_vehicles
{
public:
	Magic_carpet()
	{
		name = "Ковёр-самолёт";
		speed = 10;
		k = 30;
	}
	Magic_carpet(int speed, int k) : Magic_carpet()
	{
		this->speed = speed;
		this->k = k;
	}
};

class Eagle : public Air_vehicles
{
public:
	
	Eagle()
	{
		name = "Орёл";
		speed = 8;
		k = 3;
	}

	Eagle(int speed, int k) : Eagle()
	{
		this->speed = speed;
		this->k = k;
	}
};

class Broom : public Air_vehicles
{
public:
	Broom()
	{
		name = "Метла";
		speed = 20;
		k_plus = 1;
	}
	Broom(int speed, int k_plus) : Broom()
	{
		this->speed = speed;
		this->k_plus = k_plus;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	std::system("chcp 1251");

		std::cout << "Добро пожавать с гоночный симулятор!" << std::endl;
		std::cout << "1. Гонка для наземного транспорта" << std::endl;
		std::cout << "2. Гонка для воздушного транспорта" << std::endl;
		std::cout << "3. Гонка для наземного и воздушного транспорта" << std::endl;
		std::cout << "Выберите вид гонки: ";

		int type_number;
		std::string type;
		std::cin >> type_number;
		std::cout << std::endl;
		if (type_number == 1) {
			type = "Гонка для наземного транспорта. ";
		}
		else if (type_number == 2) {
			type = "Гонка для воздушного транспорта. ";
		}
		else if (type_number == 3) {
			type = "Гонка для наземного и воздушного транспорта. ";
		}
		else {
			std::cout << "Укажите число от 1 до 3 в зависимости от выбранного типа гонки: " << std::endl;
		};

		std::cout << "Укажите длину дистанции (должна быть положительной): ";

		int distance;
		std::cin >> distance;
		std::cout << std::endl;

		std::cout << "Должно быть зарегистрировано хотя бы два транспортных средства" << std::endl;
		std::cout << "1. Зарегистрировать транспорт" << std::endl;
		std::cout << "Выберите действие: ";

	int reg;

	std::cin >> reg;
	std::cout << std::endl;

	std::cout << type << "Расстояние: " << distance << std::endl;

	std::cout << "1. Ботинки-вездеходы" << std::endl;
	std::cout << "2. Метла" << std::endl;
	std::cout << "3. Верблюд" << std::endl;
	std::cout << "4. Кентавр" << std::endl;
	std::cout << "5. Орёл" << std::endl;
	std::cout << "6. Верблюд-быстроход" << std::endl;
	std::cout << "7. Ковёр-самолёт" << std::endl;
	std::cout << "0. Закончить регистрацию" << std::endl;
	std::cout << "Выберите транспорт или ноль для окончания процесса регистрации: " << std::endl;

	int veh;
	std::string veh_name;
	Vehicles** array_veh = new Vehicles* [20];
	std::string* array_veh_names = new std::string[20];
	int i = 0;
	int j = 0;

	do
	{
		std::cin >> veh;
		std::cout << std::endl;
		if (veh == 0) {
			veh_name = " ";
			i = i - 1;
		}
		if (veh == 1) {
			veh_name = "Ботинки-вездеходы";
			array_veh_names[i] = veh_name;
			array_veh[i] = new All_boots;
			std::cout << array_veh[i]->Get_name() << " успешно зарегистрированы." << std::endl;
		}
		if (veh == 2) {
			veh_name = "Метла";
			array_veh_names[i] = veh_name;
			array_veh[i] = new Broom;
			std::cout << array_veh[i]->Get_name() << " успешно зарегистрированa." << std::endl;
		}
		if (veh == 3) {
			veh_name = "Верблюд";
			array_veh_names[i] = veh_name;
			array_veh[i] = new Camel;
			std::cout << array_veh[i]->Get_name() << " успешно зарегистрирован." << std::endl;
		}
		if (veh == 4) {
			veh_name = "Кентавр";
			array_veh_names[i] = veh_name;
			array_veh[i] = new Centaur;
			std::cout << array_veh[i]->Get_name() << " успешно зарегистрирован." << std::endl;
		}
		if (veh == 5) {
			veh_name = "Орёл";
			array_veh_names[i] = veh_name;
			array_veh[i] = new Eagle;
			std::cout << array_veh[i]->Get_name() << " успешно зарегистрирован." << std::endl;
		}
		if (veh == 6) {
			veh_name = "Верблюд-быстроход";
			array_veh_names[i] = veh_name;
			array_veh[i] = new Quick_Camel;
			std::cout << array_veh[i]->Get_name() << " успешно зарегистрирован." << std::endl;
		}
		if (veh == 7) {
			veh_name = "Ковёр-самолёт";
			array_veh_names[i] = veh_name;
			array_veh[i] = new Magic_carpet;
			std::cout << array_veh[i]->Get_name() << " успешно зарегистрирован." << std::endl;
		}
		std::cout << type << "Расстояние: " << distance << std::endl;
		std::cout << "Зарегистрированные транспортные средства: ";
		j = i;
		for (int j = 0; j <= i; j = j++)
		{
			std::cout << array_veh[j]->Get_name() << " ";
		}
		i = i + 1;
		std::cout << std::endl;
		std::cout << "1. Ботинки-вездеходы" << std::endl;
		std::cout << "2. Метла" << std::endl;
		std::cout << "3. Верблюд" << std::endl;
		std::cout << "4. Кентавр" << std::endl;
		std::cout << "5. Орёл" << std::endl;
		std::cout << "6. Верблюд-быстроход" << std::endl;
		std::cout << "7. Ковёр-самолёт" << std::endl;
		std::cout << "0. Закончить регистрацию" << std::endl;
		std::cout << "Выберите транспорт или ноль для окончания процесса регистрации: " << std::endl;

	} while (veh != 0);

		std::cout << "регистрация участников закончена!" << std::endl;
		std::cout << std::endl;
		std::cout << "Число допущенных к гонке: " << j + 1 << std::endl;
		std::cout << std::endl;
		std::cout << "Список участников." << std::endl;
		for (int i = 0; i <= j; i++)
		{
			std::cout << array_veh[i]->Get_name() << " ";
		}
		std::cout << std::endl;
		std::cout << std::endl;

		std::cout << "1. Зарегистрировать транспорт" << std::endl;
		std::cout << "2. Начать гонку" << std::endl;
		std::cout << "Выберите действие: ";
		std::cin >> reg;
		std::cout << std::endl;


		std::cout << "Расчёт времени прохождения гонки каждым участником (технические действия)" << std::endl;
		float time;
		for (int i = 0; i <= j; i = i++)
		{
			time = (float)distance / (float)array_veh[i]->Get_speed();
			array_veh[i]->Set_race_time(time);
			std::cout << array_veh[i]->Get_name();
			std::cout << " Время в гонке " << array_veh[i]->Get_race_time() << std::endl;
		}

		int size = j;
		bool swapped = false;
		do
		{
			swapped = false;
			for (int i = 1; i <= size; i++)
			{
				if ((float)array_veh[i - 1]->Get_race_time() > (float)array_veh[i]->Get_race_time())
				{
					Vehicles* temp = array_veh[i - 1];
					array_veh[i - 1] = array_veh[i];
					array_veh[i] = temp;
					swapped = true;
				}
			}
		} while (swapped);



		// вывод на печать результатов гонки от первого (у него самое маленькое время) к последнему (у него максимальное время)
		std::cout << std::endl;
		std::cout << "Результаты гонки." << std::endl;


		std::string temp_name;
		for (int i = 0; i <= j; i = i++)
		{
			std::cout << i + 1 << ". " << array_veh[i]->Get_name();
			std::cout << " Время в гонке " << array_veh[i]->Get_race_time() << std::endl;
		}


		delete[] array_veh;
		delete[] array_veh_names;
		return 0;
	}
