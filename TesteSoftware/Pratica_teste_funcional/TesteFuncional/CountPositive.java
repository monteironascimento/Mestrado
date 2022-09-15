public class CountPositive {
  /** 
   * Counts positive elements in array
   *
   * @param x array to search
   * @return number of positive elements in x
   * @throws NullPointerException if x is null
   */
   public static int countPositive (int[] x)
   {
      int count = 0;
   
      for (int i=0; i < x.length; i++)
      {
         if (x[i] >= 0)
         {
            count++;
         }
      }
      return count;
   }
   
// test:  x=[-4, 2, 0, 2]             
//        Expected = 2


   public static void main(String[] args) {
      System.out.println("Teste do CountPositive \n\n");
      int[] x = {-4, 2, 0, 2};

      try {
         if(CountPositive.countPositive(x) == 2){
            System.out.println("Sucesso");
         }else{
            System.out.println("Falha");
         }
      } catch (Exception e) {
         System.out.println("Erro");
      }
   }

}