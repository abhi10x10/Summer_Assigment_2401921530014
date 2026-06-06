interface LibraryUserInterface{
    void registeraccount();
    void requestbook();
}
class KidUsers implements LibraryUserInterface{
    int age;
    String booktype;
    KidUsers(int age,String booktype){
        this.age=age;
        this.booktype=booktype;
    }
    public void registeraccount(){
        if(age<12){
            System.out.println("You have successfully registered under a Kids Account");
        }
        else{
            System.out.println("Sorry, Age must be less than 12 to register as a kid");
        }

    }
    public void requestbook(){
        if(booktype.equals("Kids")){
            System.out.println("Book Issued successfully, please return the book within 10 days");
        }
        else{
            System.out.println("Oops, you are allowed to take only kids books");
        }
    }
}
class AdultUser implements LibraryUserInterface{
    int age;
    String booktype;
    AdultUser(int age,String booktype){
        this.age=age;
        this.booktype=booktype;
    }
    public void registeraccount(){
        if(age>12){
            System.out.println("You have successfully registered under an Adult Account");
        }
        else{
            System.out.println("Sorry, Age must be greater than 12 to register as an adult");
        }

    }
    public void requestbook(){
        if(booktype.equals("Fiction")){
            System.out.println("Book Issued successfully, please return the book within 7 days");
        }
        else{
            System.out.println("Oops, you are allowed to take only adult fiction books");
        }
    }
}
public class LibraryUserInterfaceD{
    public static void main(String[] args) {
        KidUsers k1=new KidUsers(10,"Kids");
        k1.registeraccount();
        k1.requestbook();
        System.out.println();
        KidUsers k2=new KidUsers(18, "Fiction");
        k2.registeraccount();
        k2.requestbook();
        System.out.println();
        AdultUser a1=new AdultUser(5, "Kids");
        a1.registeraccount();
        a1.requestbook();
        System.out.println();
        AdultUser a2=new AdultUser(23, "Fiction");
        a2.registeraccount();
        a2.requestbook();
        System.out.println();

    }
}