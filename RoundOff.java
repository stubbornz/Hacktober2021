package Problem_Statement;
import java.util.Scanner;

public class RoundOff {

    public static int round10(int temp){

        int sol;
        if(temp%10<5)
        sol=temp - (temp%10);

        else
        sol=temp+(10-(temp%10));
        return sol;

    }

    public static void roundSum(int A, int B, int C){

        int sum;
        sum=round10(A) + round10(B) + round10(C);
        System.out.println(sum);

    }

    public static void main(String[] args) {

        Scanner s1 = new Scanner(System.in);
        int A, B, C;

        System.out.print("Enter value of A : ");
        A=s1.nextInt();

        System.out.print("Enter value of B : ");
        B=s1.nextInt();

        System.out.print("Enter value of C : ");
        C=s1.nextInt();

        roundSum(A, B, C);

        s1.close();

    }

}
