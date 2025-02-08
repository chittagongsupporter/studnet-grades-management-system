#include "Student.h"
#include <stdexcept>

double Student::getAverage() {
  if (grades.size() == 0)
    throw std::runtime_error("No grades available.");

  double sum = 0;

  for (int i = 0; i < grades.size(); i++)
    sum += grades[i];

  return sum / grades.size();
}
void Student::addGrade(double grade) {
  if (grade < 0 || grade > 100) {
    throw std::runtime_error("Grade must be between 0 and 100.");
  }
  grades.push_back(grade);
}

double Student::getHighestGrade() {
  if (grades.size() == 0)
    throw std::runtime_error("No grades available.");

  double highest = grades[0];

  for (int i = 1; i < grades.size(); i++) {
    if (grades[i] > highest)
      highest = grades[i];
  }

  return highest;
}