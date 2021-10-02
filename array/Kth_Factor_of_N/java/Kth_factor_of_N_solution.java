
import java.util.*;

class Kth_factor_of_N_solution {

    static int kthFactor(int n, int k) {
        int x = 0;
        int f[] = new int[n];

        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                f[x] = i;
                x++;
            }
        }

        if (k > x) {
            return -1;
        } else {
            return f[k - 1];
        }

    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int n, k;
        n = sc.nextInt();
        k = sc.nextInt();

        System.out.println(kthFactor(n,k));
       
    }
}