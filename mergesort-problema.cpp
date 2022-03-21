#include "mergesort-problema.h"

MergeSortProblem::MergeSortProblem(std::vector<int> vector) {
  vector_ = vector;
}

bool MergeSortProblem::isSmall() {
	return (vector_.size() <= 2);
}

std::pair<Problem*,Problem*> MergeSortProblem::Divide() {
  std::pair<Problem*,Problem*> subProblems;

  std::vector<int> v1(vector_.cbegin(), vector_.cbegin() + vector_.size() / 2); //Vector con la primera mitad de elementos
  std::vector<int> v2(vector_.cbegin() + vector_.size() / 2, vector_.cend()); //Vector con la segunda mitad de elementos

  subProblems.first = new MergeSortProblem(v1);
  subProblems.second = new MergeSortProblem(v2);
  return subProblems;
}


int& MergeSortProblem::getCount () {
	return count_;
}

void MergeSortProblem::SolveSmall(Solution* s) {
  std::vector<int> tempVector = vector_;
  if (vector_.size() == 1){
    ((MergeSortSolution*)s)->setValue(vector_);
	} else if (vector_.size() == 2) {
		//Swap it if it's not correctly ordered
		if(tempVector[0] > tempVector[1]) {
			int aux = tempVector[0];
			tempVector[0] = tempVector[1];
			tempVector[1] = aux;
		}
		vector_ = tempVector;
  }
  ((MergeSortSolution*)s)->setValue(vector_);
  return;
}

void MergeSortProblem::resetCount() {
	count_ = 0;
}

int MergeSortProblem::count_ = 0;