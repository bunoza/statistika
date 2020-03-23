#include <iostream>
using namespace std;

int main() {
	int brojRezultata;
	cout << "Unesi broj rezultata:" << endl;
	cin >> brojRezultata;

	int* rezultati = new int [brojRezultata];
	int i;
	for (i = 0; i < brojRezultata; i++) {
		cout << "Unesi rezultat broj " << i+1 << ": ";
		cin >> rezultati[i];
	}
	int dg;
	int gg;
	int x = 0;
	do {
		cout << "Upisi donju granicu razreda:" << endl;
		cin >> dg;
		cout << "Upisi gornju granicu razreda:" << endl;
		cin >> gg;
		int cnt;


		for (i = 0; i < brojRezultata; i++) {
			if (i == 0) {
				cnt = 0;
			}
			if (rezultati[i] <= gg && rezultati[i] >= dg) {
				cnt += 1;
			}
		}
		cout << "frekvencija:" << cnt << endl;
		cout << "Unesi drugi razred? (1 za da /2 za ne/3 ako zelis ispraviti neki rezultat): " << endl;
		cin >> x;
		if (x == 3) {
			while (x == 3) {
				cout << "Unesi redni broj rezultata koji zelis ispraviti: ";
				cin >> x;
				cout << "Unesi tocan rezultat rednog broja " << x << endl;
				cin >> rezultati[x - 1];
				cout << "Ispravi jos neki rezultat? (1 za da/2 za ne): ";
				cin >> x;
				if (x == 1) {
					x = 3;
				}
				else {
					x = 1;
				}
			}
		}
	} while (x == 1);

}