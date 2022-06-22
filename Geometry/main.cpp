#include<iostream>
using namespace std;

class Shape
{
public:

	virtual double get_area() const = 0;
	virtual double get_perimeter() const = 0;
	virtual void draw()const = 0;

};

class Square :public Shape
{
	double side;
public:
	double get_side()const
	{
		return this->side;
	}
	void set_side(double side)
	{
		if (side <= 0)side = 1;
		this->side = side;
	}
	Square(double side) :Shape()
	{
		set_side(side);
	}
	~Square(){}
	double get_area()const
	{
		return side * side;
	}
	double get_perimeter()const
	{
		return side * 4;
	}
	void draw()const
	{
		for (int i = 0; i < side; i++)
		{
			for (int j = 0; j < side; j++)
			{
				cout << "* ";
			}
			cout << endl;
		}
	}


};

void main()
{
	setlocale (LC_ALL, "");
	 
	Square square(5);
	cout << "Длина стороны:" << square.get_side() << endl;
	cout << "Площадь квадрата:" << square.get_area() << endl;
	cout << "Периметр квадрата:" << square.get_perimeter() << endl;
	square.draw();

}