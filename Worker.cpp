#include "Worker.h"
#include<iostream>

using namespace std;

Worker::Worker()
{
	strcpy_s(name, "No name");
	starYear = 0;
	salary = 0;
	type = NONE;
}

Worker::Worker(const char name[], int year, double _salary, WorkerType type) :starYear(year), salary(_salary), type(type)
{
	strcpy_s(this->name, name);	
}

const char* Worker::GetName() const
{
	return  name;;
}

 double Worker::GetSalary() const
{
	return salary;
}

 WorkerType Worker::GetType() const
{
	return type;
}

 int Worker::GetStartYear() const
{
	return starYear;
}

Worker Worker::SetWorker(const char _name[], int year, double salary, WorkerType type)
{
	Worker newWorker;
	strcpy_s(newWorker.name, 50, _name);
	newWorker.starYear = year;
	newWorker.salary = salary;
	newWorker.type = type;

	return newWorker;
}

void Worker::PrintShortInfo() const
{
	cout <<  name <<" - " << salary<< " $" <<endl;
}

void Worker::PrintFullInfo() const
{
	cout << "Name: " << name << endl;
	cout << "Start year: " << starYear << endl;
	cout << "Salary: " << salary << endl;
	cout << "Type of worker: " << type << endl;
}
