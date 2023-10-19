/*Question 30: Write a C language program to print and the sum of Fibonacci series for a given value of n. 0,1,1,2,3,5,8,13,21, ……..,n
  we will solve the above question using recusrion.
*/

#include <stdio.h>

// Function to calculate the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Function to calculate the sum of the first n Fibonacci numbers
int fibonacciSum(int n) {
    if (n <= 0)
        return 0;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += fibonacci(i);
    }
    return sum;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    //checking if the user input is less than zero if yes then retuning output as 1 with a print statement of invalid input.
    if (n < 0) {
        printf("Invalid input. Please enter a non-negative value of n.\n");
        return 1; // Exit with an error code
    }
    //Printing the fibonaci series upto n
    printf("Fibonacci Series for n = %d: ", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    printf("\nSum of the Fibonacci series for n = %d is %d\n", n, fibonacciSum(n));

    return 0; // Exit with a success code
}

