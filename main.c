#include <stdio.h>

// int main()

// 4-2 변수에 저장된 값 출력해보기
// {
//   int money;

//   printf(" 당신의 희망 money ? (300~500) ");
//   scanf("%d", &money);

//   printf("당신의 money : %d\n", money);
// }

//05-2
// int Sum(int value1, int value2)

// {
//   int result = value1 + value2;
//   return result;
// }

// int main()
// {
//   int s;
//   s= Sum(4,5); //매개변수 (Parameter)
//   printf("더하기 작업 결과 %d\n",s);
// }

//06-4 putchar 함수로 문자출력

// int main()
// {
//   putchar('H'); //putchar 함수는 1바이트 > 한글 x (2바이트)
//   putchar('i');
//   putchar('~'); 

//   puts("Park 성우");// puts : 줄바꿈기능포함 
// }

//06-05 정수값을 여러가지 진법으로

// int main()
// {
//   int data1 = 10; // 10진수 > 10진수 10
//   int data2 = 010; //8진수 > 10진수 8
//   int data3 = 0x10; //16진수 > 10진수 16

// // data 1 : 16진수 , data2 : 10진수 , data3 : 8진수로 출력함
//   printf("%x, %d, %o", data1, data2, data3);
// }


//실수값을 지수형태로 출력하기
// int main()
// {
//   float data = 12.34f;
//   printf("%f, %e, %E", data, data, data);
// }


//출력 칸 수 정렬
// int main()
// {
//   int data =7;

//   printf("[%d] [%4d] [%-4d] [%04d]",data,data,data,data); //자릿수확인 [ ]
// }

//실수 값 출력 칸 수
// int main()
// {
//   float data = 3.141592;
//   printf("[%f] [%.4f] [%8.4f] [%-8.4f]\n",data,data,data,data);

//   printf("95%%"); //95% 자체출력 %%
// }

//[07] 연산자 
//사칙연산
// int main()
// {
//   int data1 = 5, data2 =3 ;

//   int result1 = data1 + data2;
//   int result2 = data1 * data2;
//   int result3 = data1 / data2;
//   int result4 = data1 % data2;
  
//   printf("result : %d %d %d %d\n",result1,result2,result3,result4);
// }

//논리연산자
// int main()
// {
//   int data1 =5, data2 = 3;

//   int result1 = 0 || 1; //OR 
//   int result2 = 3 && -1; //AND 
//   int result3 = data1 == 3 || data2 ==3; // 거짓 OR 참
//   int result4 = data1 ==3 && data2 ==3; // 거짓 AND 참
//   int result5 = !data1; // 참 NOT 

//   printf("result : %d %d %d %d %d\n", result1,result2, result3, result4, result5); 
  
//   // result : 1 1 1 0 0 
// }

//07 연습문제 P150   Q4, Q7, Q9

int main()
  {
    int data =5, result =0;

    result = data++ +2; //Q4
    //result = --result && (data=0); // Q7
    //result = result-- ||(data=0); //Q9

    printf("result : %d\n", result); 
    printf("data : %d", data);
  
  }
  

