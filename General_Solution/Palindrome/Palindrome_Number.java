
public class Palindrome_Number {

    public static void main(String[] args) {
        int n = 10;
        int x = n;
        int z = 0;
        if (n >= 0) {
            while (x > 0) {
                int lt = x % 10;
                z = z * 10 + lt;
                x = x / 10;
            }

            if (z == n) {
                System.out.println("true");
            } else {
                System.out.println("false");
            }
        } else {
            System.out.println("false");
        }
    }
    
}
