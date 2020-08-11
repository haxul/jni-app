import User.User;

public class Main {


    public static void main(String[] args) {
        User user = new User();
        String text_for_me = user.greeting("text for me");
        System.out.println(text_for_me);
    }
}
