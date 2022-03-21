#include "divide.h"

Framework::Framework(){

}
Framework::~Framework(){

}

void Framework::Solve(Problem* p, Solution* s) {
  if (p->isSmall()) {
    return p->SolveSmall(s);
  } else {
    std::pair<Problem*, Problem*> subProblems;
    std::pair<Solution*, Solution*> subSolutions;
    subProblems = p->Divide();
    subSolutions.first = s->getInstance();
    subSolutions.second = s->getInstance();
    Solve(subProblems.first, subSolutions.first);
    Solve(subProblems.second, subSolutions.second);
    s->combine(subSolutions);
  }
}

std::string Framework::Recurrence() {
  return "T(n) <= " + this->getA() + "T(" + this->getB() + ") + " + this->getC() + "\n";
}

std::string Framework::getA(){

}
std::string Framework::getB(){

}
std::string Framework::getC(){

}