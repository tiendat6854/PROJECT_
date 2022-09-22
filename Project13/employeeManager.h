#pragma once
#include <map>
#include <memory>
#include "employee.h"
#include "experience.h"
#include "fresher.h"
#include "intern.h"

enum EMPLOYEE {EXPERIENCE = 1, FRESHER, INTERN};

class employeeManager
{
	map<string, unique_ptr<employee>> dsEmployee;
public:
	void Add();
	void Modify();
	void Delete();
	void Find();
	void DisplayAll();
};

