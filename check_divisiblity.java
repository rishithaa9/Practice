import java.util.Scanner;

public class check_divisiblity {
    public static void main(String args[]){

        Scanner scanner=new Scanner(System.in);


        System.out.println("Enter a number: ");
        int num=scanner.nextInt();

        if (num %3 ==0 && num%5==0){
            System.out.println("The number divisible by both 3 and 5");
        }
        else if (num%3==0){
            System.out.println("The number is divisible by 3");
        }
        else if(num %5==0){
            System.out.println("The number is divisible by 5");
        }
        else {
            System.out.println("The number is not divisible by either 3 or 5");
        }
    }
    
}
