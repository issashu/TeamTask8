unsigned int CodeNumber (unsigned int Number1, int letterTaken) { //взима зададеното число и буквата (бита), който търсим
    unsigned int ConvertedNumber = Number1; //запазване на числото, за да може да шифтва
    ConvertedNumber <<= letterTaken * 4; //шифтване наляво, за да се изчистят предишните използвани битове
    ConvertedNumber >>= 28; //шифтване надясно, за да вземем най-старшите 4 бита на числото
    return ConvertedNumber; //даване на новото число, за да се принтира като буква по-нататък
    //извън фубнкцията трябва един loop, в който да се дават параметрите
}