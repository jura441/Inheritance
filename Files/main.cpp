#include<iostream>
#include<fstream>
using std::cin;
using std::cout;
using std::endl;

void main()
{
	setlocale(LC_ALL, "");
	std::ofstream fout;							//1) создаем поток
	fout.open("File.txt", std::ios_base::app);	//2) открываем поток
	fout << "Hello World!\n";					//3) выводим поток
	fout.close();								//4) закрываем поток
	// Потоки обязательно нужно закрывать, это так же важно, как удалять память.
	//Сколько раз был вызван метов open(), столько же раз нужно вызвать метод close();
	system("notepad File.txt");
}
