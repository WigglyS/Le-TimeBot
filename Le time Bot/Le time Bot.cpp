// Le time Bot.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "functions.h"


int main()
{
	
	string name = greet();

	//creates a timer object
	subtimer LetimeBot;
	do {
		//calls the timer function set time to set the time variables
		LetimeBot.settime(h, m, s);

		//keeps going untill the seconds minutes and hours are 0
		while ((h != 0) || (m != 0) || (s != 0))
		{
			//functions to decrease the time left and display the time left
			LetimeBot.lapse(h, m, s);
			showtimeleft(ph, pm, ps);
		}

		cout << "Time to get up and move around!\n";
		cout << "Would you like to run the timer again? (y/n) :";
		cin >> again;
	}while (again == 'y');
	
	cout << "Thanks for using Le Time Bot 9000 - Version 1.43d574823IX*69s798%7g79s8u-8oi6310274kl8sdy75k37127e234_73492834-+=dwd%3634e" << endl;
	system("pause");

    return 0;
}

