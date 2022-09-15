public class FindLast {
  /**
    * Find last index of element
    * 
    *  @param x array to search
    *  @param y value to look for
    *  @return last index of y in x; -1 if absent
    *  @throws NullPointerException if x is null
    */
   public static int findLast (int[] x, int y)
   { 
      // As the example in the book points out, this loop should end at 0.
      for (int i=x.length-1; i > 0; i--)
      {
         if (x[i] == y) 
         {
            return i;
         }
      }
      return -1;
   }
   
// test:  x=[2, 3, 5]; y=2 
//        Expected = 0


   public static void main(String[] args) {
      System.out.println("Teste do FindLast \n\n");
      int[] x = {2, 3, 5};
      int y = 2;
      
      try {
         if(FindLast.findLast(x, y) == 0){
            System.out.println("Sucesso");
         }else{
            System.out.println("Falha");
         }
      } catch (Exception e) {
         System.out.println("Erro");
      }
      
   }

}