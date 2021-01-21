//Дани, Дени, Дони 
#include <stdio.h>

unsigned int countBits(unsigned int number); //намира най-старшият бит и изкарва брой групи по 4 бита
unsigned int codeNumber (unsigned int number1, unsigned int count); //генерираме декодираното число
char findLetter(unsigned int convertedNumber); //връща декодираната буква

int main(void){

  unsigned int number1;
  unsigned int number2;
  unsigned int count;

  printf("Please input two numbers.\n");
  printf("Your first number(up to 9 symbols): \n");
  scanf("%ud", &number1);
  printf("Your second number: \n");
  scanf("%ud\n", &number2);
  printf("Your encoded number is: \n");
  printf("Your number is decoding..************.\n");

  for(int i =  countBits(number1); i >= 0; i--){  //извиква необходимите функции с броя на групите от 4 бита
    printf("%c ", findLetter(codeNumber(number1, i)));
  }
  printf("\n");

  for(int i = countBits(number2) ; i >= 0; i--){
    printf("%c ", findLetter(codeNumber(number2, i)));
  }

  return 0;
}

unsigned int countBits(unsigned int number){
  int counter = 0;
  int bit = 0;
  while (number){ //брои битовете в числото
    counter++;
    number >>= 1;
  }
  bit = counter / 4; //изкарваме колко групи има
  if (counter % 4 != 0){ //ако има изключение 
    bit++;
  }
  return bit; 
}

unsigned int codeNumber (unsigned int number1, unsigned int count) { //взима зададеното число и броя на групите от 4 бита, които търсим
  unsigned int convertedNumber = number1; //запазване на числото, за да може да се шифтва
  convertedNumber >>= (count-1) * 4; //шифтване надясно, за да изведем групата от 4 бита, които ще декодираме
  return convertedNumber % 16; //връщаме декодираното число в шестнайсетичен вид
}

char findLetter(unsigned int convertedNumber) { //подаваме декодираното число в шестнайсетичен вид
  if(convertedNumber < 0 || convertedNumber > 15){  //правим проверка
    printf("The current element of the code has no viable information to be deschiferred!\n");
    return 'X';
  }
  char letters[] = {' ', 'G', 'H', 'I', 'L', 'M', 'N', 'O', 'P', 'R', 'A', 'B', 'C', 'D', 'E', 'F'}; //генерираме масив от символи /0-15/
  return letters[convertedNumber]; //функцията връща буква
}
