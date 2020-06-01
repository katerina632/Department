#include<iostream>
#include "Department.h"

using namespace std;


int main() {

	Department first;

	Worker tempWorker("Bob", 2005, 1000, ADMIN);
	first.AddWorker(tempWorker);

	first.AddWorker(tempWorker.SetWorker("Ben", 2010, 1500, ADMIN));	

	first.PrintByName("Bob");
	first.PrintByName("Kate");
	cout << endl;	
	first.PrintByType(ADMIN);
	first.PrintByExperience(11, 2020);
	cout << "Everage salary for department: " << first.GetAverageSalary() << endl;
	cout << endl;	

	Department second(first);
	
	second.ShowAllWorkers();
	
	
	first.AddWorker(tempWorker.SetWorker("Ketrin", 2019, 700, PROGRAMMER));
	cout << endl;
	
	first.ShowAllWorkers();
	cout << "Everage salary for department: " << first.GetAverageSalary() << endl;

	cout << endl;
	second.ShowAllWorkers();

	system("pause");
	return 0;
}