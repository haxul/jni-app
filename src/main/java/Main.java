import User.User;

import java.util.Arrays;

public class Main {


    public static void main(String[] args) {
        User user = new User();

        int[] result = user.countItem(new int[]{1, 2, 3}, 3);
        System.out.println(Arrays.toString(result));
    }
}
