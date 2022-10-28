package Methods;
import java.util.Scanner;
public class MaximumInArray
{
    public static int maximum(int[] arr){
        int maxi=0;
        for(int i=0;i<arr.length;i++){
            if(arr[i]>maxi){
                maxi=arr[i];
            }
        }
        return maxi;
    }
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int length=sc.nextInt();
        int[] array=new int[length];
        for(int i=0;i<length;i++){
            array[i]=sc.nextInt();
        }
        System.out.println(maximum(array));
    }
}
