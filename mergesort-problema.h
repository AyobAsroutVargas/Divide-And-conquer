#ifndef MERGE_SORT_PROBLEM
#define MERGE_SORT_PROBLEM

#include "problema.h"
#include "mergesort-solucion.h"

class MergeSortProblem : public Problem {
 public:
  MergeSortProblem(std::vector<int>);
  virtual ~MergeSortProblem(){};

  bool isSmall();
  std::pair<Problem*,Problem*> Divide();
  void SolveSmall(Solution* s);
  int& getCount();
  void resetCount();
 private:
  std::vector<int> vector_;
  static int count_;
};

#endif