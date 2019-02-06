public class TypeChecking {
   public static void main(String[] args) {
      double a = 5.5;
      func((int)a);
   }
   public static void func(int val) {
      System.out.println("val = " + val);
   }
}