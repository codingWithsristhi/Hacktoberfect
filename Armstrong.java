package definition;

import java.util.Scanner;

public class Armstrong {
    public static void main(String[] args) {
        System.out.println("Enter the num:");
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int temp = num;
        int counter = 0;
        int rem = 0;
        int armstrong = 0;
        int mul = 1;
        while (temp != 0) {
            counter++;
            temp = temp / 10;

        }
        temp = num;
        while (temp != 0) {
            rem = temp % 10;
            temp = temp / 10;
            for (int i = 0; i < counter; i++) {
                mul = mul * rem;
            }
            armstrong = armstrong + mul;
            mul = 1;
        }
        if (armstrong == num) {
            System.out.println("Armstrong");
        } else {
            System.out.println("Not an Armstrong");
        }
    }
}
