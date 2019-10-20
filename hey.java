import java.util.Random;
public class hey
{
    public static void main(String[] args) {
        Random random=new Random();
        random.ints().limit(10).forEach(System.out::println)
    }
}