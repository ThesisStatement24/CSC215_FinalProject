#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>

//Create an Interactive Fiction game.
//Create a C++ program that uses more than one function.
//Control all your functions through the main function.
//Pass and return parameters to your functions.
//Your program must do something and be an interactive fiction game, it must not just demo functions.
//Have fun!

using namespace std;
// Must declare functions before use!
string GetCharacterName();
void welcomeUser(string CharacterName);
void openingStory(string CharacterName);
void Instructions(string CharacterName);
void randStroyandChoose();
void AlienEncounter();
void TwoWayStop();
void WeaponsLocker();
void WeaponChoice();
void PlanAttack();
void PlanAttack2();
void FinalBattle();
void TheEnd();
void TheEnd2();
int QuitGame();





int main()
{
    
	// Get character name from user
	string CharacterName;
	// Notice we have to catch the character name coming back from this function.
	// We do this with our characterName variable.
	CharacterName = GetCharacterName();
	// here we use char name
	welcomeUser(CharacterName);

	openingStory(CharacterName);

	Instructions(CharacterName);

	randStroyandChoose();



   



    
	




}

int QuitGame() {

    cout << "\n\nThank You For Playing!!\n\n";
    system("pause");
    return 0;

   

}

//lets the user put their own character into the story
string GetCharacterName()
{
	cout << "Please enter your name: ";

	string CharacterName;
	getline(cin, CharacterName);

	return CharacterName;

}

//this is the welcome function
void welcomeUser(string CharacterName)
{
	cout << "\nWelcome " << CharacterName << " to the SSS, the Super Space Station.\n";
	cout << "The station has been invaded with aliens who are trying to kill your team.\n\n";
	system("pause");
}

//meant to setup the story for the user
void openingStory(string CharacterName)
{
	cout << "\n\nThere are only 3 members who are still alive, the rest have been murdered.\n";
	cout << "You're the fearless Captain of the crew " << CharacterName << " and it is your job to \n";
	//hoping to add one the ability to find a cause of death and suspect
	cout << "annihilate the aliens and get back to earth safely.\n\n";
	system("pause");
}

void Instructions(string CharacterName)
{

	cout << "\n\n"<< CharacterName << ", you and your team must find the location of the weapons locker and use them to \n";
	//hoping to add one the ability to find a cause of death and suspect
	cout << "kill all of the aliens and regain control of the station.\n";
	cout << "Good Luck Soldier! We're all counting on you!!\n\n";
	system("pause");
}

//this function randamizes the story and player choose
void randStroyandChoose()
{
    enum fields { WORD, HINT, NUM_FIELDS };
    const int NUM_WORDS = 10;
    const string WORDS[NUM_WORDS][NUM_FIELDS] =
    {
        {"texas", "Don't you mess with us Cowboy!"},
        {"nevada", "Woah look at that pyramid, but why is there a light at the tip?"},
        {"arizona", "Wanna go to a Cardinals game?"},
        {"florida", "Have you been to Miami Beach?"},
        {"maryland", "Is this where the White House is located?"},
        {"hawaii", "Are you from Maui or the Big Island?"},
        {"alaska", "Why is it so cold here?"},
        {"kentucky", "Do you like your chicken fried or baked?"},
        {"california", "Disneyland or Magic Mountain?"},
        {"louisiana", "Mardi Gras is the best!!"}

    };

    enum fields2 { WORD2, HINT2, NUM_FIELDS2 };
    const int NUM_WORDS2 = 10;
    const string WORDS2[NUM_WORDS2][NUM_FIELDS2] =
    {
        {"texas", "Don't you mess with us Cowboy!"},
        {"nevada", "Woah look at that pyramid, but why is there a light at the tip?"},
        {"arizona", "Wanna go to a Cardinals game?"},
        {"florida", "Have you been to Miami Beach?"},
        {"maryland", "Is this where the White House is located?"},
        {"hawaii", "Are you from Maui or the Big Island?"},
        {"alaska", "Why is it so cold here?"},
        {"kentucky", "Do you like your chicken fried or baked?"},
        {"california", "Disneyland or Magic Mountain?"},
        {"louisiana", "Mardi Gras is the best!!"}

    };

    enum fields3 { WORD3, HINT3, NUM_FIELDS3 };
    const int NUM_WORDS3 = 10;
    const string WORDS3[NUM_WORDS3][NUM_FIELDS3] =
    {
        {"texas", "Don't you mess with us Cowboy!"},
        {"nevada", "Woah look at that pyramid, but why is there a light at the tip?"},
        {"arizona", "Wanna go to a Cardinals game?"},
        {"florida", "Have you been to Miami Beach?"},
        {"maryland", "Is this where the White House is located?"},
        {"hawaii", "Are you from Maui or the Big Island?"},
        {"alaska", "Why is it so cold here?"},
        {"kentucky", "Do you like your chicken fried or baked?"},
        {"california", "Disneyland or Magic Mountain?"},
        {"louisiana", "Mardi Gras is the best!!"}

    };

    srand(static_cast<unsigned int>(time(0)));
    int choice = (rand() % NUM_WORDS);
    string theWord = WORDS[choice][WORD];  // word to guess
    string theHint = WORDS[choice][HINT];  // hint for word
    int choice2 = (rand() % NUM_WORDS2);
    string theWord2 = WORDS2[choice2][WORD2];
    string theHint2 = WORDS2[choice2][HINT2];
    int choice3 = (rand() % NUM_WORDS3);
    string theWord3 = WORDS3[choice3][WORD3];
    string theHint3 = WORDS3[choice3][HINT3];

    string jumble = theWord;  // jumbled version of word
    string jumble2 = theWord2;
    string jumble3 = theWord3;
    int length = jumble.size();
    int length2 = jumble2.size();
    int length3 = jumble3.size();
    for (int i = 0; i < length; ++i)
    {
        int index1 = (rand() % length);
        int index2 = (rand() % length);
        char temp = jumble[index1];
        jumble[index1] = jumble[index2];
        jumble[index2] = temp;
    }

    for (int i = 0; i < length2; ++i)
    {
        int index1 = (rand() % length2);
        int index2 = (rand() % length2);
        char temp = jumble2[index1];
        jumble2[index1] = jumble2[index2];
        jumble2[index2] = temp;
    }

    for (int i = 0; i < length3; ++i)
    {
        int index1 = (rand() % length3);
        int index2 = (rand() % length3);
        char temp = jumble3[index1];
        jumble3[index1] = jumble3[index2];
        jumble3[index2] = temp;
    }

    cout << "\n\n\t\t\tWelcome to the SSS!\n\n";
    cout << "Unscramble the letters of 3 words to find the location of the Weapons Locker!\n";
    cout << "Enter 'hint' for a hint.\n";
    cout << "The jumble is: " << jumble;

    string guess;
    cout << "\n\nYour guess: ";
    cin >> guess;

    while (guess != theWord)
    {
        if (guess == "hint")
        {
            cout << theHint;
        }
        else
        {
            cout << "Sorry, that's not it.";
        }

        cout << "\n\nYour guess: ";
        cin >> guess;
    }

    if (guess == theWord)
    {
        cout << "\nThat's it!  2 More to go!\n";
    }

    cout << "The jumble is: " << jumble2;

    string guess2;
    cout << "\n\nYour guess: ";
    cin >> guess2;

    while (guess2 != theWord2)
    {
        if (guess2 == "hint")
        {
            cout << theHint2;
        }
        else
        {
            cout << "Sorry, that's not it.";
        }

        cout << "\n\nYour guess: ";
        cin >> guess2;
    }

    if (guess2 == theWord2)
    {
        cout << "\nAlmost there!\n";
    }

    cout << "The jumble is: " << jumble3;

    string guess3;
    cout << "\n\nYour guess: ";
    cin >> guess3;

    while (guess3 != theWord3)
    {
        if (guess3 == "hint")
        {
            cout << theHint3;
        }
        else
        {
            cout << "Sorry, that's not it.";
        }

        cout << "\n\nYour guess: \n\n";
        cin >> guess3;
    }

    if (guess3 == theWord3)
    {
        //Helps pick a random number as without it, it would end up sticking to one number(which is 42 everytime).
    //srand helps to give a new number for the rand() function.
        srand((int)time(0));
        //Highest
        int searchGridHighNumber = 64;
        //lowest
        int searchGridLowNumber = 1;
        //Creates a random pick from 1 to 64.
        int enemyLocation = rand() % 64 + 1;
        //Prediction number
        int targetPredictionPing = 0;
        //Boolean means true or false so having enemyTargeted false which resets
        bool enemyTargeted = false;

        //Introduction to start the program, the program start a 8x8 (64) grid search
        cout << "\n\nSystem Processing 8x8 Grid..." << endl;
        //Printing out the Prediction number
        cout << "System: The locker is somewhere in #" << targetPredictionPing << endl;
        cout << "SSS Initializing Software...." << endl;
        cout << "" << endl;
        //While loop if the number is not found it will go back to proven true.
        //True means to stop the program while false means find the right answer.
        //True = Stop
        //False = Repeat until True
        while (enemyTargeted == false)
        {
            //Algorithm code
            int targetLocationPrediction = ((searchGridHighNumber - searchGridLowNumber) / 2) + searchGridLowNumber;
            //Adding prediction number of how many tries the program search
            targetPredictionPing++;
            //If the number is on the exact spot, the program will stop to catch the enemy location.
            if (targetLocationPrediction == enemyLocation)
            {
                //Sends out first, second or later ping.
                cout << "SSS Radar sending out ping #" << targetPredictionPing << endl;
                //
                cout << "The Weapons Locker is spotted at location # " << targetLocationPrediction << endl;
                //Asking that the number of tries were told when searching.
                cout << "\n\nYou were able to find the location of the weapons locker!! \n";
                cout << "Now to get there safely!" << endl;
                enemyTargeted = true;
                cout << "" << endl;
            }
            //Incase the number is greater than the actual number, it will cross it off from its grid.
            else if (targetLocationPrediction > enemyLocation)
            {
                cout << "SSS Radar sending out ping #" << targetPredictionPing << endl;
                //Highest Search Grid = 1 + Target Location Formula + 1
                searchGridHighNumber = targetLocationPrediction - 1;
                cout << "The target location prediction of #" << targetLocationPrediction << endl;
                //Print High Grid Number
                cout << "The new Grid Number = #" << searchGridHighNumber << endl;
                cout << "" << endl;
            }
            //Incase the number is less than the actual number, it will cross it off from its grid.
            else if (targetLocationPrediction < enemyLocation)
            {
                cout << "SSS Radar sending out ping #" << targetPredictionPing << endl;
                //Lowest Search Grid = 1 + Target Location Formula + 1
                searchGridLowNumber = targetLocationPrediction + 1;
                //Print Enemy Location
                cout << "The target location prediction of #" << targetLocationPrediction << endl;
                //Print Low Grid Number
                cout << "The new Grid Number = #" << searchGridLowNumber << endl;
                cout << "" << endl;
            }

        }


        
    }

  
    system("pause");
    AlienEncounter();


}

void AlienEncounter() {

    string Answer;
    string playAgain;


    cout << "\n\nYou and your crew began to head to the weapons locker, but as you guys exit the room\n";
    cout << "you spot an alien searching the body of one your crew members. What do you do?\n";
    cout << "\na.Sneak past the alien? or b.Sneak attack the alien? ";
    cin >> Answer;

    if (Answer == "a") {

        cout << "\n\nYou guys begin to move to sneak past the alien when you hear a bunch of screeching on the intercom.\n";
        cout << "The alien you are sneaking past gets up and leaves, \n";
        cout << "you then get up and run to the weapons locker.\n";
        system("pause");
        TwoWayStop();

    }
    else if (Answer == "b") {

        cout << "\n\nAs you guys are sneaking up on the alien one of your members trips over.\n";
        cout << "Their fall made a loud bang that the alien heard and it attacked all 3 of you!\n";
        cout << "Try Again? ";
        cin >> playAgain;

    }

    if (playAgain == "yes") {

        AlienEncounter();

    }
    else if (playAgain == "no") {

        QuitGame();

    }



}

void TwoWayStop() {

    string Answer;
    string playAgain;


    cout << "\n\nYou and your crew come to a sudden stop.\n";
    cout << "In order to get to the area of the station where the weapons locker is you must either take the elevator or the stairs.\n";
    cout << "\nWhat will you take? a.The Elevator? or b.The Stairs? ";
    cin >> Answer;

    if (Answer == "b") {

        cout << "\n\nAs the three of you are running up the stairs you hear a voice from the intercom.\n";
        cout << "The voice says, 'If you are alive I wanted to tell you they're in the main hall, I can't hold them back much longer.'\n";
        cout << "You then hear a loud bang and screaming coming from the intercom then it all stops.\n";
        system("pause");
        WeaponsLocker();

    }
    else if (Answer == "a") {

        cout << "\n\nYou guys get in the elevator and began to head up but the elevator makes a loud noise as it moves up.\n";
        cout << "The loud screeching from the elevator attracts the aliens and they kill you and your crew in the elevator.\n";
        cout << "Try Again? ";
        cin >> playAgain;

    }

    if (playAgain == "yes") {

        TwoWayStop();

    }
    else if (playAgain == "no") {

        QuitGame();

    }



}

void WeaponsLocker() {

    string Answer;
    string playAgain;


    cout << "\n\nYou get up the stairs and run to the Weapons Locker door.\n";
    cout << "You get to the door and you realize you don't have the key to the door. What do you do?\n";
    cout << "\na.Break the door down? or b.pick the lock? ";
    cin >> Answer;

    if (Answer == "b") {

        cout << "\n\nYou decide to pick the lock.\n";
        cout << "It's not going to be easy so you tell your crew to keep watch.\n";
        system("pause");
        WeaponChoice();

    }
    else if (Answer == "a") {

        cout << "\n\nYou decided to break the door down but when you kick the door it doesn't bust open.\n";
        cout << "You try and try again but nothing, you decide to stop and at that same moment an alien rips it's hand through your chest.\n";
        cout << "Try Again? ";
        cin >> playAgain;

    }

    if (playAgain == "yes") {

        WeaponsLocker();

    }
    else if (playAgain == "no") {

        QuitGame();

    }



}

void WeaponChoice() {

    string Answer;
    


    cout << "\n\nYou finally get the door open after numerous trys.\n";
    cout << "You open the door to a whole arsenal of weapons from Assault Rifles to WATER GUNS!?!?\n";
    cout << "With all of these weapons to choose you it's hard to choose what to use.\n";
    cout << "What will you take? a.An Assault Rifle? or b.A Rocket Launcher? ";
    cin >> Answer;

    if (Answer == "a") {

        
        PlanAttack();

    }
    else if (Answer == "b") {

        PlanAttack2();

    }


}


void PlanAttack() {

    string Answer;
    

    cout << "\n\nYou decided to take the Assault Rifle and a buttload of ammunition.\n";
    cout << "One of your crew members asks you what the plan of attack will be.\n";
    cout << "\nWhat do you plan to do? a.Run in guns blazing? or b.Sneak attack them all? ";
    cin >> Answer;

    if (Answer == "a") {

        cout << "\n\nYou decide to run in guns blazing and the aliens don't hold back at all\n";
        cout << "It's a long, intense gunfight between you and the aliens!\n";
        system("pause");
        FinalBattle();

    }
    else if (Answer == "b") {

        cout << "\n\nYou decided to sneak up on the aliens and kill them silently.\n";
        cout << "You and your crew kill three aliens and the rest heard the shots.\n";
        cout << "It's a long, intense gunfight between you and the aliens!\n";
        system("pause");
        FinalBattle();

    }


}

void PlanAttack2() {

    string Answer;
    


    cout << "\n\nYou decided to take the Rocket Launcher and a bunch of rockets.\n";
    cout << "One of your crew members asks you what the plan of attack will be.\n";
    cout << "\nWhat do you plan to do? a.Run in guns blazing? or b.Sneak attack them all? ";
    cin >> Answer;

    if (Answer == "a") {

        cout << "\n\nYou decide to run in guns blazing and the aliens don't hold back at all\n";
        cout << "It's a long, intense gunfight between you and the aliens!\n";
        system("pause");
        FinalBattle();

    }
    else if (Answer == "b") {

        cout << "\n\nYou decided to sneak up on the aliens and kill them silently.\n";
        cout << "You and your crew kill a couple of aliens and the rest heard the shots.\n";
        cout << "It's a long, intense gunfight between you and the aliens!\n";
        system("pause");
        FinalBattle();

    }


}

void FinalBattle() {

    string Answer;
    string playAgain;


    cout << "\n\nYou guys finally kill all of the aliens and go to take control of the station again.\n";
    cout << "As you charge for the controls the alien leader jumps out of nowhere and disarms all three of you.\n";
    cout << "The leader tells you that you're not going to make it out alive.\n";
    cout << "\nWhat do you plan to do? a.Fight The Alien Leader Hand to Hand? or b.Blow the whole station to pieces? ";
    cin >> Answer;

    if (Answer == "a") {

        cout << "\n\nYou tell the leader he's wrong and began fight him.\n";
        cout << "The fight is intense, the leader packs one hell of a punch!\n";
        cout << "At one point the leader pulls out a blade and begans swinging it at you, he slices you a couple times but you don't stop.\n";
        cout << "You end up disarming him and stabbing him with his own blade ending the fight.\n";
        system("pause");
        TheEnd();

    }
    else if (Answer == "b") {

        cout << "\n\nYou tell the leader he's wrong and began to fight him.\n";
        cout << "The fight is intense, the leader packs one hell of a punch!\n";
        cout << "The leader tackles you to the ground, pulls out a knife and stabs you with it.\n";
        system("pause");
        TheEnd2();

    }


}


void TheEnd() {

    string playAgain;


    cout << "\n\nThe leader falls to the ground and tells you that it's not over.\n";
    cout << "He laughs and tells you that there's more of them out there and they won't stop until all humans are annihilated.\n";
    cout << "You tell him that won't happen and that humans will prevail.\n";
    cout << "You and your crew return to Earth safely and earn the Medal of Honor for your bravery.\n";
    cout << "The End\n";
    system("pause");
    cout << "\nWould you like to play again? ";
    cin >> playAgain;

    if (playAgain == "yes") {

        randStroyandChoose();

    }
    else if (playAgain == "no") {

        QuitGame();

    }



}

void TheEnd2() {

    string playAgain;


    cout << "\n\nThe leader stands up and maniacally laughs.\n";
    cout << "You look at him and laughs yourself.\n";
    cout << "The leader, confused, yells at you and asks you what you're laughing for.\n";
    cout << "You tell him that while you were fighting each other one of your crew members ran to the station controls.\n";
    cout << "On the intercom you hear 'Self destruct in 3, 2, 1.\n";
    cout << "The Ship blows up with you and everyone on it.\n";
    cout << "The End... or is it?\n";
    system("pause");
    cout << "\nWould you like to play again? ";
    cin >> playAgain;

    if (playAgain == "yes") {

        randStroyandChoose();

    }
    else if (playAgain == "no") {

        QuitGame();

    }



}