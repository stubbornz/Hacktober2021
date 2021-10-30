package Problem_Statement;
import java.util.Scanner;

public class Divide20 {

    public static boolean less20(int n){

        if(n%20==0){
            return false;

        }
        else if(n%20==20-1 || n%20==20-2){
            return true;
        }
        else
            return false;
    }

    public static void main(String[] args) {
        Scanner s1= new Scanner(System.in);
        int n;

        System.out.print("ENTER ANY NON NEGATIVE NUMBER : ");
        n=s1.nextInt();
        
        System.out.println(less20(n));
        s1.close();

    }
    
}
