public class Test{
    public static void inc(int x){
        x++;
    }
    public static void inc(int[] a){
        for(int i=0;i<a.length;i++) a[i]++;
    }
    public static void inc(String s){ s+='1';}
    public static void main(String[] args){
        int n=5;
        int[] m={1,2,3};
        String r="Hi";
        inc(n);
        inc(m);
        inc(r);
        System.out.println(n);

        for(int i=0;i<m.length;i++)
        {
            System.out.println(m[i]);
        }

        System.out.println(r);
    }
}