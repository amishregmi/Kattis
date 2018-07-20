#include<iostream>
#include<cmath>
using namespace std;


double distwithoutroot(int x1, int y1, int x2, int y2) {
	cout << "Got here for values " << x1 << y1 << x2 << y2 << endl;
	int xdist = x2 - x1;
	xdist = pow(xdist, 2);
	int ydist = y2 - y1;
	ydist = pow(ydist, 2);
	int distance = xdist + ydist;
	return distance;

}

int main() {
	int noofpoints;
	int conditionnotsatisfied = 0;
	cin >> noofpoints;
	int xs[100000];
	int ys[100000];
	int count = 0;

	for (int i = 0; i < noofpoints; i++) {
		cin >> xs[i] >> ys[i];
	}

	for (int i = 0; i < noofpoints; i++) {
		int main_x_point = xs[i];
		int main_y_point = ys[i];

		for (int j = 0; j < noofpoints; j++) {
			int checkmatchx = xs[j];
			int checkmatchy = ys[j];
		
			if (main_x_point == checkmatchx && main_y_point != checkmatchy) {

				for (int k = 0; k < noofpoints; k++) {
					int secondcheckx = xs[k];
					int secondchecky = ys[k];

					if (checkmatchy == secondchecky && checkmatchx != secondcheckx) {
						int hypotenus = distwithoutroot(main_x_point, main_y_point, secondcheckx, secondchecky);
						//hypotenus = pow(hypotenus,2);
						int perpendicular = distwithoutroot(main_x_point, main_y_point, checkmatchx, checkmatchy);
						//perpendicular = pow(perpendicular,2);
						int base = distwithoutroot(secondcheckx, secondchecky, checkmatchx, checkmatchy);
						//base = pow(base,2);
						if (hypotenus== ( perpendicular+ base )) {
							count += 1;
							xs[i] = 0;
							ys[i] = 0;
						}
						

					}

				}


			}
			//else {
				//conditionnotsatisfied += 1;
			//}

		}

	}

	//cout << "count value after first check " << count << endl;
	//cout << "Condition not satisfid " << conditionnotsatisfied << endl;

	for (int i = 0; i < noofpoints; i++) {
		int main_x_point = xs[i];
		int main_y_point = ys[i];

		for (int j = 0; j < noofpoints; j++) {
			int checkmatchx = xs[j];
			int checkmatchy = ys[j];

			if (main_y_point == checkmatchy && main_x_point != checkmatchx) {

				for (int k = 0; k < noofpoints; k++) {
					int secondcheckx = xs[k];
					int secondchecky = ys[k];

					if (checkmatchx == secondcheckx && checkmatchy != secondchecky) {
						int hypotenus = distwithoutroot(main_x_point, main_y_point, secondcheckx, secondchecky);
						//hypotenus = pow(hypotenus,2);
						int base = distwithoutroot(main_x_point, main_y_point, checkmatchx, checkmatchy);
						//base = pow(base,2);
						int perpendicular = distwithoutroot(secondcheckx, secondchecky, checkmatchx, checkmatchy);
						//perpendicular = pow(perpendicular,2);
						if (hypotenus == (perpendicular + base)) {
							count += 1;
							xs[i] = 0;
							ys[i] = 0;
						}
					}
				}
			}
		}
	}


	cout << count;
}