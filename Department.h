#pragma once
#include "Worker.h"
class Department
{
	Worker* workers;
	int workerCount;

public:
	Department();	

	~Department();	

	Department(const Department& depart);

	void AddWorker(const Worker &worker);

	void ShowAllWorkers() const;

	void PrintByName(const char _name[]) const;
	
	double GetAverageSalary();

	void PrintByType(const WorkerType type) const;

	void PrintByExperience(const int exp, int recentYear) const;
};

