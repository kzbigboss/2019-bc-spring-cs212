/* Code below was for zyBooks online text 
   C programming by Vahid and Lysecky, Univ. of Arizona

   significantly modified for CS212 assignment
   by W.P. Iverson, instructor
   April 2019
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "ItemToPurchase.h" // students write .h and .cpp
const int NUM_ITEMS = 3;

int main() {
	double total = 0;

	// array of class objects
	ItemToPurchase item[NUM_ITEMS];

	// only do a couple for now, as have to enter by hand
	item[0] = ItemToPurchase("Chocolate Chips", 3, 1);
	item[1] = ItemToPurchase("Bottled Water", 1, 10);
	// item[2] = *MakeBlankItem();
	
	cout << "\nTOTAL COST:\n";
	for (int i = 0; i < NUM_ITEMS; ++i)
	{
		// total += item[i].itemTotal();
		// cout << item[i].toString() << endl;
	}
	cout << "\nTotal: $" << fixed << setprecision(2) << total << endl;
	// some things to consider in output here
	cout << "\n\nHEX: " << item << endl; // we're not in Java any longer....

	return 0;
}
