import java.math.BigInteger;
import java.util.Scanner;
 
class LF
{
public static void main(String arg[])
{
BigInteger factorial=new BigInteger("1");
int num,i;
Scanner sc=new Scanner(System.in);
System.out.println("Enter a number:");
num=sc.nextInt();
for(i=2;i<=num;++i)
{
factorial=factorial.multiply(BigInteger.valueOf(i));
}
System.out.println(factorial);
}
}