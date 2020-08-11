package User;

//import Item.Item;

import Item.Item;
import lombok.AllArgsConstructor;
import lombok.Getter;
import lombok.NoArgsConstructor;
import lombok.Setter;

import java.util.List;

@AllArgsConstructor
@Getter
@Setter
@NoArgsConstructor
public class User {

    static {
        System.load("/home/haxul/Development/jni/bin/user.so");
    }

    private String name;
    public native String greeting(String name);
    public native int countItem(int[] items, int size);

}
