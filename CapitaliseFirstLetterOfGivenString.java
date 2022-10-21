package practice;

public class CapitaliseFirstLetterOfGivenString {
    public static void main(String []args){
        String str = "tom is a good dog.";
        for(int i = 0; i < str.length(); i++){
            if(i == 0){
                str = str.substring(0,1).toUpperCase() + str.substring(1);
            }

            else if(str.charAt(i) == ' '){
                str = str.substring(0,i+1) + str.substring(i+1,i+2).toUpperCase() + str.substring(i+2);
            }

        }

        System.out.println(str);
    }
}