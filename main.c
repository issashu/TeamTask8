
#include <stdio.h>

char FindLetter(int ConvertedNumber);

int main()
{
    
}

unsigned int CodeNumber (unsigned int Number1, int letterTaken) { //взима зададеното число и буквата (бита), който търсим
    unsigned int ConvertedNumber = Number1; //запазване на числото, за да може да шифтва
    ConvertedNumber <<= letterTaken * 4; //шифтване наляво, за да се изчистят предишните използвани битове
    ConvertedNumber >>= 28; //шифтване надясно, за да вземем най-старшите 4 бита на числото
    return ConvertedNumber; //даване на новото число, за да се принтира като буква по-нататък
    //извън фубнкцията трябва един loop, в който да се дават параметрите
}


char FindLetter(int ConvertedNumber)
{
  char Letters[] = {' ', 'G', 'H', 'I', 'L', 'M', 'N', 'O', 'P', 'R', 'A', 'B', 'C', 'D', 'E', 'F'};
  int Itterator = 0;
  /*Itterator = ConvertedNumber%15;
  if (Itterator == 0)
  {
    /*DEBUG:
    printf("%d\n", Itterator);
    return 'F';
  }else
    {
       /*DEBUG:
       printf("%d\n", Itterator);
       return Letters[Itterator];
    }*/
  
}