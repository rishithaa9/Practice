import java.util.Scanner;

class vowel{
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);

        int vowel=scanner.next().toLowerCase().charAt(0);
        System.out.println("Enter a character:");
        switch (vowel){
            case 'a':
            case 'e':  
            case 'i':
            case 'o':
            case 'u':

                System.out.println("Vowel");
                break;
            default:
                System.out.println("Consonant");
                break;

        }

    }
}