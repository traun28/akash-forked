// C++ Program to Print Prime Numbers between two Numbers

#include <iostream>
bool isPrime(int);
void printPrime(int num1, int num2);

int main(){
    int num1, num2;
    std::cout << "Enter two positive integers: ";
    std::cin >> num1 >> num2;
    printPrime(num1, num2);
}
// prints the prime number between num1 and num2
void printPrime(int num1, int num2){
    if (num1 > num2){
       // swap if num1 is greater than num2
        std::swap(num1, num2);
    }
    for(int i = num1 + 1 ; i < num2 ; ++i){
        if (isPrime(i)){
            std::cout << i << " ";
        }
    }
}
// returns true is the given number is true false otherwise
bool isPrime(int n){
    bool is_prime = true;
    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1) {
       return false;
    }
    for(int i = 2; i <= n/2; ++i) {
      if (n % i == 0) {
         return false;
      }
    }
  return is_prime;
#include <iostream> // Required for input (cin) and output (cout) operations

// Function to add two integers
int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    int num1; // Declare an integer variable to store the first number
    int num2; // Declare an integer variable to store the second number

    // Prompt the user to enter the first number
    std::cout << "Enter the first integer: ";
    // Read the first number from the user's input
    std::cin >> num1;

    // Prompt the user to enter the second number
    std::cout << "Enter the second integer: ";
    // Read the second number from the user's input
    std::cin >> num2;

    // Call the addNumbers function and store the result
    int sum = addNumbers(num1, num2);

    // Print the result to the console
    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;

    return 0; // Indicate successful execution
}}
