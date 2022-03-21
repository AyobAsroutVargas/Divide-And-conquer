#include "mergesort-solucion.h"

void MergeSortSolution::combine(std::pair<Solution*,Solution*> subSolutions) {
  std::vector<int> a1 = (((MergeSortSolution*)subSolutions.first))->vector_;
  std::vector<int> a2 = (((MergeSortSolution*)subSolutions.second))->vector_;

  a1.push_back(INT_MAX);
  a2.push_back(INT_MAX);

  int i = 0, j = 0;
  int size = (a1.size() - 1) + (a2.size() - 1);

  vector_.resize(size);

  for (int iterator = 0; iterator < size; iterator++) {
    if(a1[i] < a2[j]) {
      vector_[iterator] = a1[i];
      i++;
    } else {
      vector_[iterator] = a2[j];
      j++;
    }
  }
}

void MergeSortSolution::setValue(std::vector<int> vector) {
	vector_ = vector;
}

Solution* MergeSortSolution::getInstance() {
  return new MergeSortSolution();
}

void MergeSortSolution::print() {
  for (auto element : vector_) {
    std::cout << element << " ";
  }
  std::cout << "\n";
}