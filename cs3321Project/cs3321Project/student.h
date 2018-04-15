#pragma once
#include <string>


const int SIZE = 4;

class STUDENT
{
public:
	STUDENT()
	{
		courses_array[0] = "science";
		courses_array[1] = "math";
		courses_array[2] = "english";
		courses_array[3] = "cs";

	}
	int getNumCourses()
	{
		return NUM_OF_COURSES;
	}
	
	std::string getCourse(int crs)
	{
		return courses_array[crs-1];
	}

private:

	int NUM_OF_COURSES = SIZE;
	std::string courses_array[4];
	

};
