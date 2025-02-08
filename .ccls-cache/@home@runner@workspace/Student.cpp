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