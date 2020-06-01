#include "Department.h"

#include<iostream>

using namespace std;

Department::Department()
{
	workers = nullptr;
	workerCount = 0;
}

Department::~Department()
{
	if (workers != nullptr) {
		delete[] workers;
	}
}

Department::Department(const Department& depart)
{
	workerCount = depart.workerCount;
	workers = new Worker[workerCount];
	for (int i = 0; i < workerCount; i++) {
		workers[i] = depart.workers[i];
	}
}

void Department::AddWorker(const Worker &worker)
{
	Worker* newWorker = new Worker[workerCount+1];

	for (int i = 0; i < workerCount; i++) {
		newWorker[i] = workers[i];
	}
	newWorker[workerCount] = worker;

	delete[] workers;
	workers = newWorker;
	++workerCount;
}

void Department::ShowAllWorkers() const
{
	for (int i = 0; i < workerCount; i++) {
		cout << i + 1 << ") ";
		workers[i].PrintShortInfo();		
	}
}

void Department::PrintByName(const char _name[]) const
{
	bool IsExistName = false;
	for (int i = 0; i < workerCount; i++) {
		if (strcmp(workers[i].GetName(), _name) == 0) {
			workers[i].PrintShortInfo();
			IsExistName = true;
		}		
	}

	if (IsExistName == false) {
		cout << "Such worker doestn't exist in this department." << endl;
	}
}

double Department::GetAverageSalary()
{
	double sum=0;
	double average = 0;
	for (int i = 0; i < workerCount; i++) {
		sum += workers[i].GetSalary();
	}
	return average = sum / workerCount;
}

void Department::PrintByType(const WorkerType type) const
{
	for (int i = 0; i < workerCount; i++) {
		if (workers[i].GetType() == type) {
			cout << i + 1 << ") ";
			workers[i].PrintFullInfo();
			cout << endl;
		}
	}
}

void Department::PrintByExperience(const int exp, int recentYear) const
{
	int experience;	
	
	for (int i = 0; i < workerCount; i++) {
		experience = recentYear - workers[i].GetStartYear();
		if (experience>=exp) {
			cout << i + 1 << ") ";
			workers[i].PrintFullInfo();
			cout << endl;
		}
	}
}


