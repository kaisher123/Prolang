public class StaticVariable {
   private static int count = 0;    //every object that create in this class is going to use the same variable(count)
   public StaticVariable() {
      count++;
   }
   public static int getCount() {
      return count;
   }
   /*public int f1() {
      static int c = 0;
      c++;
      return c;
   }*/
   public static void main (String[] args) {
      StaticVariable obj1 = new StaticVariable();
      StaticVariable obj2 = new StaticVariable();
      System.out.println(obj1.getCount());
      System.out.println(obj1.getCount());
      System.out.println(StaticVariable.getCount());
      
   }
   
}