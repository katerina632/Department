#pragma once
#include<iostream>

using namespace std;

enum WorkerType {

	NONE,
	ADMIN,
	PROGRAMMER,
	DESIGNER
};

class Worker
{
	char name[50];
	int starYear;
	double salary;
	WorkerType type; 

public:
	Worker();	

	Worker(const char name[], int year, double salary, WorkerType type) ;	

	const char* GetName() const;

	double GetSalary() const;

	WorkerType GetType() const;

	int GetStartYear() const;

	Worker SetWorker(const char _name[], int year, double salary, WorkerType type);

	void PrintShortInfo() const;
	
	void PrintFullInfo() const;
};
