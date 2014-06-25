import java.io.*;


// finally is always executed once entered try block
public class Test {
    public static void main(String[] args) {
        System.out.println("main");

        //try{
        //    int a[] = new int[2];
        //    //if (true) return;
        //    System.out.println("Access element three :" + a[3]);
        //}catch(ArrayIndexOutOfBoundsException e){
        //    System.out.println("Exception thrown  :" + e);
        //}finally{
        //    System.out.println("finally");
        //}
        //System.out.println("Out of the block");


        if (false) return;

        try {
            int a[] = new int[2];
            System.out.println("try");
            System.out.println("Access element three :" + a[3]);
            return;
        } catch (Exception e) {
            if (true) return;
            System.out.println("catch :" + e.toString());
        } finally {
            System.out.println("finally");
        }
    }
}
