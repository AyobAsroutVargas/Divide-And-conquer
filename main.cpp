#include "mergesort-problema.h"
#include "mergesort-solucion.h"
#include "divide.h"

int main(int argc, char **argv) {
  std::vector<int> definedVector{10, 20, 30, 5, 95, 8};
  Problem* problem = new MergeSortProblem(definedVector);
  Solution* solution = new MergeSortSolution();
  Framework* framework = new Framework();
  framework->Solve(problem, solution);
  std::cout << "\nResult (MergeSort):" << "\n";
  solution->print();
  
}