#pragma once
#include <vector>
#include <memory>
#include <algorithm>
#include "student.h"
#include "goodStudent.h"
#include "normalStudent.h"

enum SELECT { GOOD = 1, NORMAL , BACK };

class studentManager
{
	vector<unique_ptr<student>> dsSV;

public:
	void addSV();
	void selectSV();
	void displaySV();
	friend bool sort_Type(unique_ptr <student>&, unique_ptr <student>&);
	friend bool sort_Gpa(unique_ptr <student>&, unique_ptr <student>&);
	friend bool sort_EntryTest(unique_ptr <student>&, unique_ptr <student>&);
	friend bool sort_Name(unique_ptr <student>&, unique_ptr <student>&);
	friend bool sort_Phone(unique_ptr <student>&, unique_ptr <student>&);
	void sortTS();
	void sortName();
	void sortPhone();
};

