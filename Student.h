#ifndef STUDENT_H
#define STUDENT_H

#include <vector>

class Student {
public:
  // Data members
  int id;
  std::vector<double> grades;

  // Constructor to initialize id and grades
  Student(int studentId) : id(studentId) {}

  // Member functions

  // function to calculate average grade
  double getAverage();

  // function to get highest grade
  double getHighestGrade();
};

#endif