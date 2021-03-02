using System;

namespace C_Sharp_Practice {

   public class MainClass {

      static void Main() {

         IProblem problem;

         problem = new MusicAlbum();

         // 여기다가 테스트케이스 인수 지정

         problem.Solve();
      }

   }

}