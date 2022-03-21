#ifndef MERGE_SORT_SOLUTION
#define MERGE_SORT_SOLUTION

#include "solucion.h"
#include <climits>

class MergeSortSolution : public Solution {
 public:
  MergeSortSolution(){};
  virtual ~MergeSortSolution(){};

  void print();
  void combine(std::pair<Solution*,Solution*>);
  Solution* getInstance();
  void setValue(std::vector<int>);
 private:
  std::vector<int> vector_;
};

#endif