#ifndef PROBLEM 
#define PROBLEM

#include <vector>
#include <iostream>
#include "solucion.h"

class Problem {
 public:
  Problem();
  virtual ~Problem();

  virtual bool isSmall();
  virtual std::pair<Problem*,Problem*> Divide();
  virtual void SolveSmall(Solution* s);

  virtual int& getCount();
	virtual void resetCount();
};

#endif