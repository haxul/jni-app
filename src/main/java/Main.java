import Item.Item;
import User.User;

public class Main {


    public static void main(String[] args) {
        User user = new User();
        Item item = new Item("towel", 99);
        int price = user.getPrice(item);
        System.out.println(price);
    }
}
