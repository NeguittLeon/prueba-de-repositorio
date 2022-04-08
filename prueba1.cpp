#include <iostream>
#include <random>
void guess_game(int nmin, int nmax);
int main (int argc, char **argv)
{
  int NMIN = 50, NMAX = 500;
  guess_game(NMIN, NMAX);
  return 0;
}
void guess_game(int nmin, int nmax)
{
  int ning = 0;
  std::random_device rd;  
  std::mt19937 gen(rd()); 
  std::uniform_int_distribution<int> distrib(nmin, nmax);
  const int NUM = distrib(gen); 
  std::cout << "\nEstoy pensando en un numero entre " << nmin << " y " << nmax << std::endl;
  std::cout << "\nSerias capaz de avdivinar cual es? " << std::endl;
  std::cin >> ning; 
  while (ning != NUM)
  {  
  if (ning < NUM)
  {
   std::cout << "\nEse numero es menor al que estoy pensando, intenta otra vez" << std::endl;
   std::cin >> ning;
  }
  if (ning > NUM)
  {
   std::cout << "\nEse numero es mayor al que estoy pensando, intenta otra vez" << std::endl;
   std::cin >> ning;
  }
  }
  if (ning == NUM)
  {
   std::cout << "\nBien hecho, lograste adivinar el numero que estaba pensando " << std::endl;
  }
  //* este es el primer comentario de prueba//
}

