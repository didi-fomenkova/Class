#include<iostream>

using namespace std;

void task1();
void task2();
void task3();
void task5();
void task4();
void task6();
void task7();
void task8();
void task9();
void task10();
void task11();
void task12();
void task13();
void task14();
void task15();


// task1:ƒано целое число, если оно €вл€етс€ положительным, то прибавить к нему 1, иначе не измен€ть
// task2:ƒано целое число, если оно €вл€етс€ положительным, то прибавить к нему 1, если отрицательным-вычесть из него 2, если оно равно 0- заменить на 10
// task3:ƒаны три целых числа, найти количество положительных чисел в исходном наборе
// task5:ƒаны два числа, вывести пор€дковый номер меньшего из них
//task6:ƒаны два числа, вывести сначала большее, затем меньшее
//task7:ƒаны две переменные вещественного типа: A,B. ѕерераспределить значени€ данных переменных так, чтобы в ј оказалось меньше из значений, а в ¬- бошльшее. ¬ывести новые значени€ ј и ¬.
//task8:ƒаны две переменные целого типа: ј, ¬. ≈сли их значени€ не равны- присвоить каждой переменной сумму этих зачений, а если равны, то присвоить переменным нулевые значени€, вывести новые значени€ переменных.
//task9:ƒаны две переменные целого типа: ј, ¬. ≈сли их значени€ не равны- присвоить каждой переменной большее из этих значений,а если равны, то присвоить переменным нулевые значени€, вывести новые значени€ переменных.
//task10:— клавиатуры вводитс€ три целых числа, найти максимум из них

 


int main()
{
	task1();
	task2();
	task3();
	task4();
	task5();
    task6();
    task7();
    task8();
    task9();
   task10();
   task11();
   task12();
   task13();
   task14();
   task15();
  
   cout << "End";

	return 0;
}
void task1(){
	int number;
	cout << "Insert the number" << endl;
	cin >> number;
	if (number > 0){
		number++;
	}
	cout << "The resulting number is " << number << endl;
}
void task2(){
	int number0;
	cout << "Insert the number" << endl;
	cin >> number0;
	if(number0 > 0){
		number0++;
	}
	else if(number0 < 0){
		number0-=2;
	}
	else if(number0 == 0){
		number0 =10;
	}
	cout << "The resulting number is " << number0 << endl;
}
void task3(){
	int number1, number2, number3;
	int s=0;
	int p=0;
	int n=0;
	cout << "Enter three numbers" << endl;
	cin >> number1 >> number2 >> number3;
	if(number1 > 0){
		s++;
	}
	if(number2 > 0){
		p++;
	}
	if(number3 > 0){
		n++;
	}
	int positive=s+p+n;
	cout << "The number of positive numbers in the set is " << positive << endl;
}
void task5(){
	int number1, number2;
	cout << "Enter two numbers" << endl;
	cin >> number1 >> number2;
	if(number1 < number2){
		cout << " Sequence number is first" << endl;;
	}
	else{
		cout << "Sequence number is second " << endl;;
	}
}
void task7(){
	double A, B;
	cout << "Enter A and B " << endl;
	cin >> A >> B;
	if(A > B){
			A+=B;
			B=A;
	}
	cout << " A is " << A << " and B is " << B << endl;
}
void task8(){
	int A,B;
	cout << "Enter A and B " << endl;
	cin >> A >> B;
	if(A == B){
		A=0;
		B=0;
	}
	else{
		int S=B;
		B+=A;
		A+=S;
	}
	cout << " A is " << A << " and B is " << B << endl;
}
void task9(){
	int A,B;
	cout << "Enter A and B " << endl;
	cin >> A >> B;
	if(A != B) {
		if(A > B){
			B=A;
		}
		else{
			A=B;
		}
	}
	if (A == B){
		A=0;
		B=0;
	}
	cout << " AS is " << A << " and B is " << B << endl;
}
void task6(){
	int number1, number2;
	cout << "Enter two numbers" << endl;
	cin >> number1 >> number2;
	if (number1 > number2){
		cout << "Bigger number is " << number1 << endl;
		cout << "Lower number is " << number2 << endl;
	}
	else{
		cout << "Bigger number is " <<  number2 << endl;
		cout << "Lower number is " << number1 << endl;
	}
}
void task10(){
	int number1, number2, number3,max;
	cout << "Enter three numbers" << endl;
	cin >> number1 >> number2 >> number3;
	max=number1;
	if(number2 > max){
		max=number2;
	}
	if(number3 > max){
		max=number3;
	}
	cout << " Maximum is " << max << endl;
}
void task11() {
	int number1, number2, number3;
	cout << "Enter three numbers" << endl;
	cin >> number1 >> number2 >>number3;
	int max = number1;
	if(number2 > max) {
		max = number2;
	}
	else if(number3 > max){
		max = number3;
	}
	int min = number1;
	if(number2 < min) {
		min = number2;
	}
	else if(number3 < max){
		min = number3;
	}
	if( (number1 < max) && (number1 > min) ){
		cout << "Average is " << number1 << endl;
	}
	else if(number2 < max && number2 > min){
		cout << "Average is " << number2 << endl;
	}
	else if(number3 < max && number3 > min){
		cout << " Average is "<< number3 << endl;
	}
}
void task12(){
	int number1, number2, number3, sum;
	cout << "Enter three numbers" << endl;
	cin >> number1 >> number2 >> number3;
	if( (number1 >= number3) && (number2 >= number3) ){
		 sum = number1 + number2;
	}
	else if( (number2 >= number1) && (number3 >= number1) ){
		 sum = number3 + number2;
	}
	else if( (number1 >= number2) && (number3 >= number2) ){
		 sum = number3 + number1;
	}
	cout << " The amount is " << sum << endl;
}
 void task13() {
	double A, B, C;
	cout << "Enter A, B and C " << endl;
	cin >> A >> B >> C;
	if( (A > B) && (B > C) ){
		A *= 2;
		B *= 2;
		C *= 2;
	}
	else{
		A *= -1;
		B *= -1;
		C *= -1;
	}
	cout  << " A is " << A << "; B is " << B << " and C is " << C << endl;
}
 void task14(){
	 double a, b, c;
	 cout << "Enter A, B and C " << endl;
	 cin >> a >> b >> c;
	 if( ( (a > b) && (b > c) ) || ( (a < b) && (b < c) ) ){
		a *= 2;
		b *= 2;
		c *= 2;
	 }
	 else{
		a *= -1;
		b *= -1;
		c *= -1;
	}
	cout  << " A is " << a << "; B is " << b << "  and C is " << c << endl;
 }
 void task15() {
	 int number1, number2, number3;
	 cout << "Enter three numbers, one of which is different from other two, equal to each otrer" << endl;
	 cin >> number1 >> number2 >> number3;
	 if ( (number1 != number2) && (number1 != number3) ){
		 cout << " Sequence number is first " << endl;
	 }
	 else if ( (number2 != number3) && (number2 != number1) ){
		 cout << "Sequence number is second " << endl;
	 }
	 else if ( (number3 != number1) && (number3 != number2) ){
		 cout << "Sequence number is third " << endl;
	 }
 }
 void task4(){
	 int number1, number2, number3, pos, neg;
	 cout << "Enter three numbers" << endl;
	 cin >> number1 >> number2 >> number3;
	 if( number1 > 0){
		 pos++;
		 if( number2 > 0){
			 pos++;
		 }
		 if( number3 > 0){
			 pos++;
		 }
	 }
	 else if( number1 < 0){
		 neg++;
		 if( number2 < 0){
			 neg++;
		 }
		 if( number3 < 0){
			 neg++;
		 }
		 cout << " Number of positive is "  << pos << endl;
		 cout << " Number of negative is " << neg << endl;s
 }