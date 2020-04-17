#include<iostream>
#include<ctime>
using namespace std;

int main() {
	srand(time(0));

	int temperature = 0;
	int min = 0;
	int max = 0;
	

	for (int i = 1; i <= 7; i++)
	{
		temperature = rand() % 25;
		cout << "Day " << i << " - " << temperature << "C" << endl;
		if (i == 1) {
			max = temperature;
			min = temperature;
		}
		else if(max < temperature){
			max = temperature;
		}
		else if (min > temperature) {
			min = temperature;
		}
	}
	cout << endl;
	cout << "Minimal temperature in week - " << min << endl;
	cout << "Maximal temperature in week - " << max;




	//int num = 0;
	//int counter1 = 0;
	//int counter2 = 0;

	//for (int i = 1; i <= 10; i++) {

	//	num = rand() % 150 + 50;
	//	cout << "Your number #" << i << ":"<< num << endl;
	//	if (num % 3 == 0) {
	//		counter1++;
	//		continue;
	//	}
	//	if (num % 7 != 0) {
	//		counter2++;
	//		
	//	}
	//	
	//}
	//cout <<"How meny number share without a rest on 3 - " <<counter1 
	//	<< "\n" <<"How many number not shared on 7 - "<< counter2;

    

	/*int num = 0;
	int randNumb = 0;
	randNumb = rand() % 35+1;
	cout << randNumb << endl;


	cout << "Try guess number(1-35)" << endl;
	for (int i = 0; i < 5; i++) {

		
		cin >> num;
		if (num == randNumb) {
			cout << "You win" << endl;
			break;
		}
		if (randNumb < num) {
			cout << "Your number less than mysterious number" << endl;
		}
		else if (randNumb > num) {
			cout << "Your number more than mysterious number" << endl;
		}
	
	}
	cout << "You can try again" << endl;*/

	return 0;
}