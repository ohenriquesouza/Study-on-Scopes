// dynamic and static scoping

using System;
class HelloWorld {
  static void Main() {
      
      for(int i = 0; i < 10; i++){
          
          int x = 10;
          
          Console.WriteLine($"{x}");
          
      }
      
    Console.WriteLine($"{x}");
  }
}