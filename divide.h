#ifndef DIVIDE
#define DIVIDE

#include <vector>
#include <string>
#include <iostream>
#include "solucion.h"
#include "problema.h"

/**
 * @brief Framework para resolver problemas de divide y venceras binarios
 * 
 */
class Framework {
 public:
  Framework();
  virtual ~Framework();
 /**
  * @brief Algoritmo general de un problema divide y vencerás.
  * 
  * @param p Problema concreto a resolver
  * @param s Solucion a devolver 
  */
  void Solve(Problem* p, Solution* s);
  std::string Recurrence();
 protected: 
  /**
   * @brief Devuelve un string con el numero de subproblemas en el que se dividen
   * los problemas en cada iteración.
   * 
   * @return std::string 
   */
  virtual std::string getA();
  /**
   * @brief Devuelve un string con el factor de reduccion del problema
   * 
   * @return std::string 
   */
  virtual std::string getB();
  /**
   * @brief Devuelve un string con la complejidad de dividir y fusionar las soluciones.
   * 
   * @return std::string 
   */
  virtual std::string getC();

};

#endif