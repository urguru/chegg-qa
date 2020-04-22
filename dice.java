import java.util.Random;

class dice {
    public static void main(String[] args)
    {
        Random rand=new Random();
        int arr[12];
        for(int i=0;i<12;++i)
        {
            arr[i]=0;
        }
        for(int i=0;i<1000;++i)
        {
            int temp=rand.nextInt(12);
            arr[temp]++;
        }
        for(int i=0;i<12;++i)
        {
            System.out.println(i + " " + arr[i]);
        }
    }
}