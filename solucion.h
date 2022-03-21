#ifndef SOLUTION
#define SOLUTION

#include <vector>
#include <iostream>

class Solution {
 public:
  Solution();
  virtual ~Solution();

  virtual void print();
  virtual void combine(std::pair<Solution*, Solution*>);
  virtual Solution* getInstance();
};

#endif