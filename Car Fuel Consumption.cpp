#include <iostream>

void Mileage(int& getstart, int& getfinal)
{
	std::cout << "Your starting mileage: ";
	std::cin >> getstart;
	std::cout << "Your final mileage: ";
	std::cin >> getfinal;
}

void gallon(double& getGal)
{
	std::cout << "Gallon usage: ";
	std::cin >> getGal;
}

void fuelUsage(int start,int finish,double gallonUsage,double& getFuelUsage)
{
	getFuelUsage = (finish - start) / gallonUsage;
}

int main()
{
	int start, finish;
	double gallonUsage, fuelConsum;
	Mileage(start, finish);
	gallon(gallonUsage);
	fuelUsage(start, finish, gallonUsage, fuelConsum);
	std::cout << "Your starting mileage : " << start << " miles.\n";
	std::cout << "Your final mileage: " << finish << " miles.\n";
	std::cout << "Your gallon usage: " << gallonUsage << " gallon.\n";
	std::cout << "Your fuel consumption is: " << fuelConsum << " miles per gal.\n";
}