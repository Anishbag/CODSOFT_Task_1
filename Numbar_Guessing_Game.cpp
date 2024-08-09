#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
  
  std::srand(static_cast<unsigned int>(std::time(0)));

  // Generate a random number between 1 and 100
  int randomNumber = std::rand() % 70 + 1;
  int guess = 0;

  std::cout << "Guess the number between 1 and 70: ";

  while (true) {
    std::cin >> guess;

    if (guess < randomNumber) {
      std::cout << "Too low! Try again: ";
    } else if (guess > randomNumber) {
      std::cout << "Too high! Try again: ";
    } else {
      std::cout << "Congratulations! You guessed the correct number: "
                << randomNumber << std::endl;
      break;
    }
  }

  return 0;
}
