using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

namespace C_Sharp_Practice {

   public class MusicAlbum : IProblem {

      public void Solve() {

         const int arrLength = 5;
         string[] genres = new string[arrLength] {"classic", "pop", "jazz", "pop", "classic"};
         int[] plays = new int[arrLength] {500, 600, 1500, 600, 2500};

         int[] answer = Solution(genres, plays);
         string output = "[";
         for(int i=0 ; i<arrLength ; ++i) {
            output += answer[i];
            if(i<arrLength-1) output += ", ";
         }
         output += "]";

         Console.WriteLine(output); // [4, 0, 2, 3, 1]
      }

      // 고유 번호 반환
      public int[] Solution(string[] genres, int[] plays) {

         int arrLength = 0;

         Dictionary<string, int> playsSum = new Dictionary<string, int>();

         for(int i=0 ; i<arrLength ; ++i) {
            string g = genres[i];
            int p = plays[i];
            if(playsSum.ContainsKey(g)) {
               playsSum.Add(g, p);
            } else {
               playsSum[g] += p;
            }
         }

         IEnumerator<T>


         return null;
         
      }
      
   }
}