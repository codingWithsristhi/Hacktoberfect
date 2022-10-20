package definition;

public class Video {
    /*
     * Creating definition classes:(Rules)
     * 1. Always set the visibility modifier of a field to private unless otherwise specified.
     * 2. Always set access modifier of a field to non-static unless otherwise specified.
     *
     *
     * */

    //    member variables ==> fields / variables
    private String videoName;
    private boolean checkOut;
    private int rating;


//    Some special methods in java-:
//    1. The getter methods: used to read the value of the private fields.
//    getter methods are also called [Observer method / Accessor method]
//    syntax-: public <am: sameAsTheField> <rt:sameAsTheField> get<NameOfTheField>(){}
//        where am is Access Modifier and rt is return type
    public String getVideoName(){
        return "";
    }






    //    member functions ==> methods / functions
    /*
     * This method returns the name of the video.
     * @return The name of the video.
     * */
    public String getName() {
        return "";

    }

    /*
     * This method sets the checkout value of a video to true or false.
     * If the value is set to true, that means that a customer had rented the video.
     * */

    public void checkOut() {

    }

}
