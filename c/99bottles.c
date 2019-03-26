/* Написать программу, печатающую стихотворение "99 bottles of beer on the wall" — как оно выглядит можно посмотреть здесь: https://en.wikipedia.org/wiki/99_Bottles_of_Beer (на этот раз программа должна после вывода стихотворения завершить работу).

А именно:

99 bottles of beer on the wall, 99 bottles of beer.
Take one down, pass it around, 98 bottles of beer on the wall...
98 bottles of beer on the wall, 98 bottles of beer.
Take one down, pass it around, 97 bottles of beer on the wall...
97 bottles of beer on the wall, 97 bottles of beer.
Take one down, pass it around, 96 bottles of beer on the wall...
...
No more bottles of beer on the wall, no more bottles of beer.
We've taken them down and passed them around; now we're drunk and passed out! */

/* # подключаем библиотекe функций стандартного ввода/вывода */
#include <stdio.h>

/* # Задаем функцию уменьшения количества бутылок:
     берем на входе переменную целого типа и возвращаем за вычетом единицы */
int downcount(int bottle){
	return bottle - 1;
	}

/* # Задаем функцию печати с условием */
int poem(int bottle){

/* ## Если бутылок больше 1 */
	if (bottle > 1) {
	printf("%d bottles of beer on the wall, %d bottles of beer.\nTake one down, pass it around, %d bottles of beer on the wall...\n\n", bottle, bottle, downcount(bottle));

/* ## Присваиваем новое значение переменной (на единицу меньше) */

	bottle = downcount(bottle);

/* ## Снова рекурсивно вызываем фнукцию печати с условием, на вход попадет новое значение переменной */

	poem(bottle);
	}
	
/* ## Если переменная равна 1 печатаем фиксированный текст и ничего больше не делаем */

	else printf("1 bottle of beer on the wall, 1 bottle of beer.\nTake one down, pass it around, no more bottles of beer on the wall...\n\nNo more bottles of beer on the wall, no more bottles of beer.\nWe've taken them down and passed them around; now we're drunk and passed out!\n");
}

/* # Начинаем программу */

int main(){

/* Вызываем функцию печати с условием и даем на вход стартовое значение переменной */

	poem(99);

/* Завершаем программу по выходу из рекурсивного цикла */

	return 0;

}