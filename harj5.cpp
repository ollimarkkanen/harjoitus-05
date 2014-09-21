/* Työn nimi: Harjoitus 5
* Tekijä: Olli Markkanen
* Kuvaus tehtävästä:
*	Kirjoita ohjelma, joka pyytää käyttäjältä kaksi kokonaislukua.
*	Ohjelma tulostaa tekstin BINGO, mikäli luvut ovat samoja.
*	Muussa tapauksessa ohjelma tulostaa tekstin BONGO.
* Päivämäärä: 9.9.2014
* Versio: 1.0
*/

#include <iostream>
using namespace std;
void main()
{
	int luku1;
	cout << "Syötä luku1: ";
	cin >> luku1;
	int luku2;
	cout << "Syötä luku2: ";
	cin >> luku2;
	if (luku1 == luku2)
		cout << "BINGO\n";
	if (luku1 != luku2)
		cout << "BONGO\n";
	cin.get();
}