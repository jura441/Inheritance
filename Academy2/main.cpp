#include"Teacher.h"
#include"Graduate.h"
//#define INHERITANCE_CHECK

void main()
{
	setlocale(LC_ALL, "");
	
#ifdef INHERITANCE_CHECK
	Human human("Montana", "Antonio", 25);
	human.print();

	Student pinkman("Pinkman", "Jessie", 23, "Chemistry", "WW_220", 1, 90, 85);
	pinkman.print();

	Teacher teacher("Ivanov", "Ivan", 43, "Chemistry", 20);
	teacher.print();

	Graduate graduate("Sidorov", "Alexey", 22, "Programming", "WW_420", 4, 90, 45, "С++");
	graduate.print();
#endif // INHERITANCE_CHECK
	
	// Generalization

	Human* group[] =
	{
		new Student("Pinkman", "Jessy", 23, "Chemistry", "WW_220", 1, 90, 95),
		new Teacher("White", "Walter", 50, "Chemistry", 25),
		new Graduate("Schreder", "Hank", 40, "Criminalistics", "WW_220,", 5, 95, 80, "How to catch Heisenberg"),
		new Student("Vercetti", "Tomas", 30, "Theft", "Vice", 3, 90, 85),
		new Teacher("Diaz", "Ricardo", 50, "Weapons distribution", 20),
		new Teacher("Eisenstein", "Albert", 143, "Astronomy", 100)

	};

	for (int i = 0; i < sizeof(group) / sizeof(group[0]); i++)
	{
		group[i]->print();
		cout << "-------------------------------------------\n";
	}
}