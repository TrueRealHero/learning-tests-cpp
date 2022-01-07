#include <iostream>
#include <string>
#include <stdio.h>

int main()
{
  std::string name;
  std::cout << "What is your name? ";
  getline (std::cin, name);
  std::cout << "Hello, " << name << "!\n";
  getchar();

  return 0;
}
