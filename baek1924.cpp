#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int i;
	int month, day, check_day = 0;
	int monthDay[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	string dayWord[7] = { "MON","TUE", "WED", "THU", "FRI", "SAT", "SUN" };

	scanf("%d %d", &month, &day);
	for (i = 0; i < month - 1; i++) {
		check_day += monthDay[i];
	}
	check_day += day;
	cout << dayWord[(check_day - 1) % 7] << endl;
	return 0;
}