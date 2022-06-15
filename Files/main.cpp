#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<fstream>
using std::cin;
using std::cout;
using std::endl;

void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 256;
	char sz_filename[SIZE] = {};	//sz_ - String Zero
	cout << "Введите имя файла: ";
	cin.getline(sz_filename, SIZE);

	//strcmp() - String compare (сравнение строк)
	//int strcmp(char* str1, char* str2);
	//Если функция вернула 0, значит строки идентичны, 
	// значение отличное от нуля - строки разные.
	if (strcmp(sz_filename + strlen(sz_filename) - 4, ".txt"))
		//strlen() - возвращает размер строки в символах
		strcat(sz_filename, ".txt");
	//cin.getline(sz_filename, SIZE);
	std::ofstream fout;
	fout.open(sz_filename, std::ios_base::app);
	//std::ofstream fout;							//1) создаем поток
	//fout.open("File.txt", std::ios_base::app);	//2) открываем поток
	char sz_contents[SIZE]={};
	cout << "Введите содержимое файла:";
	cin.getline(sz_contents, SIZE);

	//fout << "Hello World!\n";					//3) выводим поток
	fout << sz_contents;					//3) выводим поток
	fout.close();								//4) закрываем поток
	// Потоки обязательно нужно закрывать, это так же важно, как удалять память.
	//Сколько раз был вызван метов open(), столько же раз нужно вызвать метод close();
	char sz_command[SIZE] = "notepad ";
	strcat(sz_command, sz_filename);
	//Функция strcat(char* str1, char* str2) выполняет конкатенацию строк (слияние строк)
	// К содержимому первой строки добавляется содержимое второй строки.
	system(sz_command);
}
