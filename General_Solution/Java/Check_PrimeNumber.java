package Java;

import java.util.Scanner;

/**
 * Check_PrimeNumber
 */
public class Check_PrimeNumber {
    static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {
        System.out.println("This program checks whether the entered number is prime or not.");
        int num;
        while(true){
            System.out.print("Enter a positive integer (0 to exit) : ");
            num = input.nextInt();
            if (num == 0) System.exit(0);
            else {
                if (prime_check(num))
                    System.out.println("Yes, It is a prime number.");
                else
                    System.out.println("No, It is not a prime number.");
            }
        }
    }
    static boolean prime_check(int n){
        if (n<=1)
            return false;
        for(int i = 2; i*i <= n; i++){
            if (n % i == 0)
                return false;
        }

        return true;
    }
}
