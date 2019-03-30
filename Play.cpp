#include <iostream>
#include <cstdlib>

int main() {
  std::cout <<"MAGIC 8-BALL:\n\n";
  
  //Requesting the program to output random integers
  
  std::cout << std::rand() << "\n";
  std::cout << std::rand() << "\n";
  std::cout << std::rand() << "\n";
  
  //seeding of the random number generator
  
  srand(time(NULL));
  
  int answer = std::rand() % 10;
  
  std::cout << answer <<"\n";
  
  if (answer==0) {
    std::cout <<"It is certain\n";
  }
  
  else if (answer==1) {
    std::cout <<"Pray hard\n";
  }
  else if (answer==2) {
    std::cout <<"Tell her you love her\n";
  }
  else if (answer==3) {
    std::cout <<"Just do it!!\n";
  }
  else if (answer==4) {
    std::cout <<"Go study for a masters\n";
  }
  else if (answer==5) {
    std::cout <<"Sleep more\n";
  }
  else if (answer==6) {
    std::cout <<"Make the call\n";
  }
  else if (answer==7) {
    std::cout <<"Make that financial investment tomorrow\n";
  }
  else if (answer==8) {
    std::cout <<"You'll succeed\n";
  }
  	else {
      std::cout <<"Very doubtful\n";
    }  
  
}
