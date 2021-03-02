using System;
using System.Collections.Generic;
using System.Linq;

namespace C_Sharp_Practice {
   public class Calculator : IProblem {
      
      public void Solve() {

         string sik = "1+3/2-5*2";
         Console.WriteLine(Solution(sik));

      }

      private string Solution(string input) {

            string postFixed = toPostFix(input);
            string res = calcPostFixed(postFixed);
            return res;

         }

      private string toPostFix(string input) {

            List<char> newArr = new List<char>();
            Stack<char> opStack = new Stack<char>();

            for(int i=0 ; i<input.Length ; ++i) {
               if(input[i] == '+' || input[i] == '-') {
                  if(opStack.Count > 0) {
                     newArr.Add(opStack.Pop());
                  }
                  opStack.Push(input[i]);

               }
               else if(input[i] == '*' || input[i] == '/') {
                  if(opStack.Count > 0 && (opStack.Peek() == '*' || opStack.Peek() == '/')) {
                     newArr.Add(opStack.Pop());
                  }
                  opStack.Push(input[i]);
               }
               else {
                  newArr.Add(input[i]);
               }
            }
            for(int i=0; i<opStack.Count ; ++i) {
               newArr.Add(opStack.Pop());
            }

            return new string(newArr.ToArray<char>());

         }

      private string calcPostFixed(string input) {

            Stack<int> pNum = new Stack<int>();
            Console.WriteLine(input);

            for(int i=0 ; i<input.Length ; ++i) {

               if(input[i]=='+' || input[i]=='-' || input[i]=='*' || input[i]=='/') { // 연산자면

                  //스택에서 피연산자 두개 꺼내서 연산
                  int a = pNum.Pop() - 48;
                  int b = pNum.Pop() - 48;
                  int res = 0;
                  switch(input[i]) {
                     case '+' :
                        res = b+a;
                        break;
                     case '-' :
                        res = b-a;
                        break;
                     case '*' :
                        res = b*a;
                        break;
                     case '/' :
                        if(a==0) return "Impossible";
                        res = b/a;
                        break;
                  }
                  // 결과 스택에
                  pNum.Push(res);

               } else { // 숫자면 스택에 넣기
                  pNum.Push(input[i]);
               }
            }

            return pNum.Pop().ToString();
         }
   }
}