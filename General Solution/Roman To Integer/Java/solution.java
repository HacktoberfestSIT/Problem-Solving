
import java.util.*;
class Roman_TO_Intiger
    {
        // int I =1, V =5, X= 10, L= 50, C= 100, D= 500, M= 1000;

        static int value(char i)
        {
            if (i == 'I')
            {
                return 1;
            }
            else if (i == 'V')
            {
                return 5;
            }
            else if (i == 'X')
            {
                return 10;
            }
            else if (i == 'L')
            {
                return 50;
            }
            else if (i == 'C')
            {
                return 100;
            }
            else if (i == 'D')
            {
                return 500;
            }
            else if (i == 'M')
            {
                return 1000;
            }

            return -1;
        }

        static int romanToIntiger(String roman)
        {
            int sum = 0, i = 0;

            for (i = 0; i < roman.length() - 1; i++) // X I I I
            {

                if (value(roman.charAt(i)) >= value(roman.charAt(i + 1)))
                {
                    sum = sum + value(roman.charAt(i));
                }
                else if (value(roman.charAt(i)) < value(roman.charAt(i + 1)))
                {
                    sum = sum - value(roman.charAt(i));
                }
            }
            sum = sum + value(roman.charAt(i));
            return sum;
        }

    public
        static void main(String[] args)
        {
            String roman;
            System.out.println("Enter a roman Number");
            // Scanner sc = new Scanner(System.in);
            // roman = sc.nextLine();
            roman = "XCIII";
            System.out.println("The converted of roman " + roman + " in Int is " + romanToIntiger(roman));
        }
}
