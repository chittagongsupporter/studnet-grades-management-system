#include "Student.h"
#include <iostream>

int main() {
  Student student1(1);
  student1.addGrade(90);
  student1.addGrade(80);
  student1.addGrade(70);
  student1.addGrade(60);
  std::cout << "Student 1 average grade: " << student1.getAverage()
            << std::endl;
  std::cout << "Student 1 highest grade: " << student1.getHighestGrade()
            << std::endl;

  return 0;
}