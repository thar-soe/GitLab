//Contributors
//Garrett Poppe 3/19/18
//Diana Guevara-Colocho 3/31/2018
//
//Dylan Dickerson 3/21/18
//Brian Baskovich 3/21/18
//Mahir Eldaw 3/21/18
//Salvador Rodriguez 4/04/2018
//Joseph Moreno
//Maik De Leon Lopez 3/21/18
//Kevin Ramirez
//Airrion Young 4/8/18
//Cesar Gutierrez 4/2/18

//Victor De Jesus 4/2/18


//Emanuel Fonseca


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>



int main(void)
{
	int x,y,z,i,h,g,k,choice=0;
	char name[256];

	printf("Please enter your name: "); //Input any number of array inputs
	scanf("%s",name);

	printf("Hello %s welcome to the rpgGame!\n",name);
	
	while(choice != 99)
	{
		puts("You find yourself in a dark room and you are not sure how you got here.");
        	puts("As you look around you see the room has 25 doors, each labeled with a number. You are not sure how such a small room can have 25 doors, sooo magic...");
        	puts("The room starts filling with water and you must choose a door to open or you will likely drown. you may quit anytime by selecting option 99");
        	puts("What door do you choose?");
        	scanf("%d",&choice);
		
		switch(choice)
		{
			case 1://Alexander Gebretinsai's Assigned Room
			{
				while(choice != 99)
				{

							puts("You open the door and find a dog");
							puts("You now have 3 choices to choose from below: Please enter a number 1-3");
							puts("1. Pet the dog");
							puts("2. Feed the dog with the peanut butter sandwich you have in your hand");
							puts("3. Run away.");
							scanf("%d",&choice);
							if(choice == 1)
							{
								puts("You pet the dog and he seems happy.");
								puts("You get bored of petting the dog so you stop. The dog then begins to whimper begging for you to pet him more");
								puts("You now have 2 choices to choose from below: Please enter a number 1-2");
								puts("1. Pet the dog again");
								puts("2. Walk away to find something else");
								scanf("%d",&choice);
								if(choice == 1)
								{
									puts("You pet the dog again but while you are petting the dog, a monster appears and tries to attack you");
									puts("You now have 2 choices to choose from below: Please enter a number 1-2");
									puts("1. Run away");
									puts("2. Grab the sword that appears on the ground next to you and fight the monster");
									scanf("%d",&choice);
									if(choice == 1)
									{
										puts("You try and run away but the monster eats you. Sorry, game over.");
										break;
									}
									
									
									else if (choice == 2)
									{
										puts("You try to fight the monster but you are a noob and do not know how to sword fight so the monster eats you. Game over,sorry");
										break;

									}
							
								}
								else if(choice == 2)
								{
									puts("As soon as you start walking away, the dog barks warning you that a monster is about to attack you");
									break;
								}
	
								break;
							}
							else if(choice == 2)
							{
								puts("You try and feed the dog but the dog seems like he is not hungry so you eat it yourself. All of a sudden a monster comes and attacks you.");
								puts("You now have 2 choices to choose from below: Please enter a number 1-2");
								puts("1. Run away");
								puts("2. Grab the sword that appears on the ground next to you and fight the monster");
								scanf("%d",&choice);
								if(choice == 1)
								{
									puts("You try and run away but the monster eats you. Sorry, game over.");
									break;
								}																		
								else if (choice == 2)
								{
									puts("You try to fight the monster but you are a noob and do not know how to sword fight so the monster eats you. Game over,sorry");
									break;
								}
							}
							else if(choice == 3)
							{
								puts("You run away but the dog barks warning you there's a monster beind you.");
								puts("You now have 2 choices to choose from below: Please enter a number 1-2");
								puts("1. Run away");
								puts("2. Grab the sword that appears on the ground next to you and fight the monster");
								scanf("%d",&choice);
								if(choice == 1)
								{
									puts("You try and run away but the monster eats you. Sorry, game over.");
									break;
								}
								else if (choice == 2)
								{
									puts("You try to fight the monster but you are a noob and do not know how to sword fight so the monster eats you. Game over,sorry");
									break;
								}
								break;
							}
							else
							{
								puts("Error!");
							}
				}
				break;
			}
			case 2:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 3: // ELTHON CISNEROS'S ROOM 
			{
					while(choice != 99)
					{
							//int input;
							printf ("\n");
							printf("***This is Room 3.***\n ");
							printf ("You walk into a strangely bright and colorful room. However, you see 4 untitled buttons on a table...\n");
							printf ("Keep in mind: There are hidden doors within this bright and colorful room. The only thing keeping these doors open is the power. Would be a mighty shame (for you) if there was a power outage!\n");
							printf ("Above the buttons a sign reads: You may choose press one button to determine your fate. To not keep you in total suspense, an LCD display on the wall will vaguely let you know what just happened after you pressed this button:\n");
							scanf ("%d", &choice);

							switch (choice)
							{
								case 1:
									printf ("\n");
									printf("***Ya done messed up! Looks like this wasn't the number one choice you thought it was... This room will start filling with water now... Hope you know how to swim!!! :D *** \n");
									puts ("Well, this room may be filling up with water, but I can give you a fighting chance by giving you ONE tool of your choice that may help you escape OR KILL YOU... Type in your choice wisely (1-4)...");
									scanf ("%d", &choice);

									while (choice != 99)
									{
										switch (choice)
										{
											case 1:
												puts ("I have granted you a spear... Maybe you can make a hole in the door?");
												break;
											case 2:
												puts ("I have granted you an oxygen tank and scuba suit...");
												break;
											case 3:
												puts ("HAHAHAH!!! You pressed the wrong button! Now the room will fill up with water even quicker...");
												break;
											default:
												puts ("For once, being incorrect has saved you... The room has stopped filling with water.");
												break;
										}
										break;
									}
									break; //end switch
								case 2:
									printf ("\n");
									printf ("***You survive. Now, get out of my room!***\n");
									break;
									// you may choose another card
								case 3:
									printf ("\n");
									printf ("***You got lucky. You have been granted permission to press more buttons! Sounds like fun...***");
									scanf ("%d", &choice);
									break;
								case 4:
									printf ("\n");
									printf ("***This button just cut power to lights in the room (as well as those hidden doors I mentioned before). Hope you like the dark and tigers...***\n");
									while (choice != 99)
									{
										puts ("Display reads: Power has been cut to this room. You will be given one chance to either escape from this room alive or not. Let's play some trivia. Being one myself, I like computers, so I would like you to guess what year Gottfried Leibniz invented binary");
										scanf ("%d", &choice);
										while (choice != 1679)
										{
											puts ("Oops! WRONG!!!!! Guess again!");
											scanf ("%d", &choice);
											puts ("Until you correctly guess Leibniz invented binary, you will be trapped in this room in particular!!! Well, that may be a bit harsh. I will give you one clue: 'late 1600's'");
										
										}
										puts ("~~~YOU GUESSED CORRECTLY!~~~ You are one smart cookie! You get to escape...");
										break;	
									
									}
									break;
								default:
									while (choice != 99)
									{
										puts ("Choose a new door to explore....");
										scanf ("%d", &choice);
									
									}
									break;
	
							}
							break; // added
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 4:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 5: //Airrion Young
			{
					while(choice != 99)
					{
						int chest = 0;
						int fight = 0;
						int game = 0;
						int guess = 0;
						int i = 0;
						int room5 = 0;

						FILE *wPtr = fopen("room5.txt", "w");
						puts("you open the door and find two different chests, one blue one red...");
						
						printf("Enter which chest to open\n");
						puts("Enter 1 for Red Chest");
						puts("Enter 2 for Blue Chest");

						scanf("%d", &chest);

						if(chest == 1)
						{
							puts("Suddenly a dragon appears and lunges at you. There is a window to your left, and a sword to your right.");
							puts("Do you...\n 1: take a chance and escape through the window \n 2: pick up the sword and defend yourself ");
							scanf("%d", &fight);
							if(fight == 1)
							{
								puts("Why would you choose to jump out of a window?");
								puts("Due to your two-story fall, you now suffer from amnesia and have no recollection of room 5...");
								fprintf(wPtr, "What happened here.....?");
							}
							if(fight == 2)
							{
								puts("The dragon watches as you picks up the sword, nervously he notices that you dont realize he is friendly");
								puts("The dragon opens his mouth to speak, shocked you drop the sword");
								puts("The dragon precedes to explain that he is friendly and is particularly fond of guessing games");
								puts("Do you want to play the game? 1-yes 2-no");
								scanf("%d", &game);
								if(game == 1)
								{
									puts("The dragon wants you to guess a number as a hint he says 1 - 5");
									puts(" Begin Entering: \n Press 10 to give up");
									scanf("%d", &guess);

									while(guess != 10)
									{
										puts("Enter Again");
										scanf("%d", &guess);
										game++;
										if(game == 10)
										{
											puts("Looks like you got caught in dragon's infnite loop");
											guess = 10;		
										}
									}
									puts("The dragon is tricky, he mentioned 1 - 5 but said enter 10 to give up");
									puts("10 was actually the target number and youve been taunted");
									puts("The dragon admires you and lets you leave room 5");
																		
								}
								if(game == 2)
								{
									puts("You have offended the dragon, He has now thrown you out of the window");
									puts("Due to your two-story fall, you now suffer from amnesia and have no recollection of room 5....");
									fprintf(wPtr,"What happened here......?");
								}
							}							
						}
						if(chest == 2)
						{
							puts("You have found the Princess");
							puts("The King has offered you a grand reward");
							puts("Do you accept the Kings reward? 1-yes 2-no");
							scanf("%d", &room5);
							if(room5 == 1)
							{
								puts("CONGRATULATIONS you have married the Princess");
								fprintf(wPtr,"The food was the only highlight of your wedding day...Good Luck with that\n");
								puts("Now that you have been crowned, what is first on your agenda?");
								puts("1: Wage War \n2: Divorce the Princess");
								scanf(" %d", &game);
								if(game == 1)
								{
									puts("You are unprepared for war, you have 3 soliders while the neighboring kingdom has 200");	
									puts("It was a valiant effort, but you have been defeated, better luck next time");
								}
								if(game == 2)
								{
									puts("The king does not take well to divorce, he banishes you from the kingdom and tarnishes your reputation");
									puts("You decide that you no longer want to be seen so you carve out a tree and take shelter there, befriending local squirrels\n You are now seen as the town weirdo");
								}
							}
							if(room5 == 2)
							{
								puts("You have been banished");
								fprintf(wPtr,"You have met your demise in room 5\n");
							}
						}
					break;					
					fclose(wPtr);	
					}
					break;
					
			}
			case 6:
			{
					while(choice != 99)
					{
							int select;
							puts("You enter the room and close the door to prevent the water from flowing in. Looking around you find a well at the center with no rope, sealed crates at the corner of the room, a locked door at the other side, a crack in the wall, and a pile of clothes next to the well. What would you like to investigate?\n1. The well\n2. The crates\n3. The door\n4. The crack\n5. The clothes");
							scanf("%d",&select);
							while(select != 5) {		
								switch(select) {
									case 1:
										puts("The well is made of stone and holds still water at the very bottom. You see a shiny object.\nWhere else would you like to investigate?");
										scanf("%d",&select);
										break;
									case 2:
										puts("The crates are shut tight and is impossible to open without a specific tool.\nWhere else would you like to investigate?");										scanf("%d",&select);
										break;
									case 3: 
										puts("The door will not yield by brute force, you require a key to move forward.\nWhere else would you like to investigate?");
										scanf("%d",&select);
										break;
									case 4:
										puts("The crack has an opening just enough to view into a small closet. It seems like the closet was a part of the room.\nWhere else would you like to investigate?");
										scanf("%d",&select);
										break;
									default:
										puts("That is not a valid place to investigate, please pick a number from 1 to 5.");
										scanf("%d",&select);
										break;
								}
							}
											
							puts("You find a small chisel and hammer within the clothes. Perhaps this person was a carpenter. You decided to take them.");
							puts("With your newly acquired hammer and chisel, you think of some ideas on how to use the hammer and chisel. What would you like to use the hammer and chisel on?\n1. The well\n2. The crates\n3. The door\n4. The crack");
							scanf("%d",&select);
							while(select != 4) {
								switch(select) {
									case 1:
										puts("You use the hammer and chisel on the well and broke the well, causing it to collapse in on itself. That did not go so WELL, You lose.");
										exit(EXIT_SUCCESS);
									case 2:
										puts("You use the crates but it does nothing more than give you splinters.\nWhat would you like to use the hammer and chisel on?");
										scanf("%d",&select);
										break;
									case 3:
										puts("You use the hammer and chisel on the door and it does not work.\nWhat would you like to use the hammer and chisel on?");
										scanf("%d",&select);
										break;
									case 5:
										puts("Despite not listing the clothes as an option, you decided to be a rebel and use the hammer and chisel on the pile of clothes anyway. You somehow tear the clothes using the hammer and chisel and found a key embedded into the clothes. You use the key on the locked door and discovered it worked! You escaped!");
										exit(EXIT_SUCCESS);
									default:
										puts("That is not a valid choice, please pick a number from 1 to 5");
										scanf("%d",&select);
										break;
								}
							}

							puts("You use the hammer and chisel on the crack, creating a bigger hole that allows your arm to fit through. You reach inside and retrieved an old lockpick. What would you like to use the lockpick on?\n1. The well\n2. The crates\n3. The door");
							scanf("%d",&select);
							while(select != 2) {
								switch(select) {
									case 1:
										puts("Moving closer to the well you stumbled and drop the lockpick into the well. Without the lockpick you cannot leave. LOCKS like you PICKED a bad time to be clumsy. You lose.");
										exit(EXIT_SUCCESS);
									case 3:
										puts("You attempted to pick the lock on the door but to no avail. \nWhat would you like to use the lockpick on?");
										scanf("%d",&select);
										break;
									default:
										puts("That is not a valid choice, please pick a number from 1 to 3");
										scanf("%d",&select);
										break;
								}
							}
							
							puts("You move closer to the crates and see 3 crates with certain distinctions. Crate 1 is quiet and new with a string wrapped around the lid. Crate 2 is fairly old and dusty, littered with claw marks all around the crate. Crate 3 is shorter than the first two and appears to be stuck to the ground. What would you like to use the lockpick on?\n1. Crate 1\n2. Crate 2\n3. Crate 3");
							scanf("%d",&select);
							while(select != 2) {
								switch(select) {
									case 1:
										puts("You pick the lock for the first crate and discovered a bomb! By opening the crate you set off a bomb and exploded. Isn't that just CRATE. You lose.");
										exit(EXIT_SUCCESS);
									case 3:
										puts("You picked the lock for the third crate and found nothing. It turned out to be an unimpressive find. \nWhat would you like to use the lockpick on?");
										scanf("%d",&select);
										break;
									default:
										puts("That is not a valid choice, please pick a number from 1 to 3");
										scanf("%d",&select);
										break;
								} 
							}
							
							puts("You decided to pick the lock on the second crate and discovered that the creature which created the claw marks had long since passed. Lying next to the creature is more rope that could physically fit in the crate. As bizarre as that seems you decided to take the rope.\n");
							puts("With the newly acquired rope you go to the well and decided to retrieve the shiny object at the bottom. What would you like to do?\n1. Tie the rope around the well's wooden beam and climb down\n2. Lasso the object using the long piece of rope\n3. Look around for alternatives");
							scanf("%d",&select);
							int select2;
							while(select != 3) {
								switch(select) {
									case 1:
										puts("You tie the rope around the wooden beam and tug it to ensure a stable descent. It appears to be stable. Descend?\n1. Yes\n2. No");
										scanf("%d",&select2);
										switch(select2) {
											case 1:
												puts("You climb into the well and descend slowly and steadily. All goes well until you misplace your footing and slip, causing you to fall and snapping the rope. Looks like that went down in a SNAP. You lose.");
												exit(EXIT_SUCCESS);
											case 2:
												puts("You untie the rope and decided against climbing down. What would you like to do?\n1. Tie the rope and climb\n2. Lasso the object\n3. Look around for alternatives");
												scanf("%d",&select);
												break;
											default:
												puts("That is not a valid choice, please pick a number from 1 to 2");
										}
									case 2:
										puts("You tie one end of the rope in a particular shape in order to scoop up the shiny object. It does not work. \nWhat would you like to do?");
										scanf("%d",&select);
										break;
									default:
										puts("That is not a valid choice, please pick a number from 1 to 3");
										scanf("%d",&select);
										break;
								}
							}
																										
							puts("You decided to look around the room once more and discover a convenient bucket within the sealed up closet. With this you are sure you can retrieve the object. What will you use to retrieve the bucket?\n1. Hammer and chisel\n2. Lockpick\n3. Rope");
							scanf("%d",&select);
							while(select != 3) {
								switch(select) {
									case 1:
										puts("You attempt to use the hammer and chisel to widen the hole, but end up collapsing the wall on yourself. It seems like your future COLLAPSED around you. You lose.");
										exit(EXIT_SUCCESS);
									case 2:
										puts("I know you can do better than that, try something else.");
										scanf("%d",&select);
										break;
									default:
										puts("That is not a valid choice, please pick a number from 1 to 3");
										scanf("%d",&select);
										break;
								}
							}
							puts("You decided to use the rope and managed to sling the rope around the bucket somehow. You tug it towards you until you retrieved the bucket. Once retrieved, you tie the rope around the bucket's handle and lower it into the well. Steadily and nimbly, you scoop the shiny object into the bucket and pull it upwards. The object was a key! You used the key on the door and escaped! You win!");
							exit(EXIT_SUCCESS);
					}
					break;
			}
			case 7:
			{
					while(choice != 99)
				{ 
 				       puts("You open the door to find yourself back in your highschool algebra class...");
				       puts("There is one problem on the board that 92 percent of people get wrong it reads:");
				       puts("6/2(1+2)");
				       puts("What is the correct Answer?:");	  	 	   
				       scanf("%d",&choice);
				       switch(choice)
					{

				       	        default:
							puts("The answer is wrong. You are forced to repeat Algebra again for the rest of your miserable life. GAME OVER");
							choice = 99;
							break;
						
						case 9:
							puts("Congratulations, you passed Highschool Algebra! The door behind you opens...");
							break;	
					
											
						
					}
					break;
				}
					break;
			}
			case 8:
			{
					while(choice != 99)
					{
							puts("You open the door and find youself in a dungeon with five doors.");
							puts("One of the five doors is the safe passage to escape and the other four are traps.");
							puts("Which door do you want to open and choose wisely!:");
							puts("1. Open the door #1");
							puts("2. Open the door #2");
							puts("3. Open the door #3");
							puts("4. Open the door #4");
							puts("5. Open the door #5");
							scanf("%d",&choice);

							switch(choice)
							{
								case 1:
								puts("NO! IT's A TRAP! The door leads you the courtyard and the knights surrounded and beat you to death for escaping.");
								puts("GAME OVER!");
								break;

								case 2:
                                                		puts("OH NO! The door you open leads you into a pit of spikes! You loss your footing and fell into the pit!");
								puts("GAME OVER!");
                                                		break;

                                               			case 3:
                                                		puts("OH MY GOD! The door leads you into a room where a fire breathing dragon is sleeping front of you and the door shuts tight. You tried open but it's no use as the dragon awakened from his slumber and unleashed his fire breath.");
								puts("GAME OVER!");
                                                		break;

                                               			case 4:
                                                		puts("Well done, the door you enter leads you to the road to your next challenge and your jouney continues");
                                                		break;

                                               			case 5:
                                                		puts("AH!!!! The door you open released a prisoner and trapped you into his cell as a scapegoat so the prisoner can escape. You are unable to break the door and trapped in the room forever!");
								puts("GAME OVER!");
                                                		break;

                                               			default:
                                                		puts("Error!!! You entered an invalid number type any number between 1 and 5!");
								break;
                                                		}
                                        }
					break;
			}
			case 9:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 10:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 11:
			{
					while(choice != 99)
					{
							int boxNum=0;
							int randNum=0;
							char aString[256];
							FILE *writePage;

							puts("You open the door and find a damp room, mostly empty, three boxes lay on the floor");
							puts("You feel the urge to look through them");
							puts("How many would you like to look through?");
							scanf("%d",&choice);
							srand(time(NULL));
							if(choice>3||choice==0)
							{
								puts("Why? just leave");
							}
							else
							{
								for(i=0;i<choice;i++)
								{
									printf("Which box would you like to look in?\n");
									scanf("%d",&boxNum);
									switch(boxNum)
									{
										case 1:
											printf("There is a Dice Would you like to Roll it?\n");
											scanf("%s",aString);
											if(isalpha(aString[0]))
											{
												aString[0]=tolower(aString[0]);
												if(isalpha(aString[1]))
												{
													aString[1]=tolower(aString[1]);
													if(isalpha(aString[2]))
													{
														aString[2]=tolower(aString[2]);
													}
												}
											}
											if(aString[0]=='y' && aString [1]=='e' && aString[2]=='s')
											{
												randNum=(rand()%5)+1;
												printf("You rolled a %d, that's it\n",randNum);
											}
											break;
										case 2:
											printf("Under the box you find a pencil and a small page\n");
												writePage=fopen("page.txt","w");
												printf("What would you like to write in it?\nKEEP IT SHORT!\n");
												scanf("%s",aString);
												fputs(aString,writePage);
											}
											break;
										case 3:
											printf("Box #%d was empty\n",boxNum);
											break;
										default:
											break;
									}
								}
								if(choice==3)
								{
									puts("You just wasted your time looking through 3 useless boxes");
								}
							}
							break;
					}
					break;
			}
			case 12:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							printf("A room full of games\nWelcome this is room 12\nWhat would you like to do: \n99. Leave Room 12\n2.Stay\n");
							/* scanf("%d",&choice); */
							int input=0;
							srand(time(NULL));
							scanf("%d", &choice);

							if(choice==1)
							{
								puts("Thank You Come Again");
							}

							if(choice==2)
	 						{
	 							while(input!=5)
	 							{
	 								puts("Let's play some games");
									puts("Choose a game");
									printf("Games:\n1. Guess the number\n2. Word Modification\n3. Guess the word\n4. Roll a dice\n5. Leave Games Room\n");
								
									scanf("%d",&input);

									if(input==1)
									{
										puts("Welcome to Guess the Number Game");
										int a=0;
										int b=(rand() % 10);;
					

										while(a!=b)
										{
											printf("Write a number between 0 and 10 inclusive\n");
											scanf("%d",&a);

											while(a<=0 && a>=11)
											{
												printf("Number is out of bounds\n");
												printf("Write a number between 0 and 10 inclusive\n");
												scanf("%d",&a);
											}

											if(a<b)
											{
												printf("Too low \n");
											}

											if(a>b)
											{
												printf("Too high \n");
											}

											if(a==b)
											{
												printf("Correct guess\n");
											}

										}
				
									}

									else if(input==2)
									{
										puts("Welcome to the word Modification Game");
										printf("Write a word to see it printed backwards\n");
										int i=0;
										int arrayCounter=0;
										int line=0;
										char backwards[30]=" ";
				
										scanf("%29s",backwards);
				
										for(i=29; i>=0; i--)
										{
											printf("%c", backwards[i]);
										}
										puts("");
										puts("");
									}

									else if(input==3)
									{
										puts("Welcome to Guess the word Game");
										puts("Used to ride in parks");
				
				
									}

									else if(input==4)
									{
										puts("Welcome to Roll the Dice Game");
									}	

									else if(input==99)
									{
										puts("Thank You Come Again");
									}
		 						}
							}
					}
					break;
			}
			case 13:
			{
					while(choice != 99)
					{
					
						int choices;
						int battlecommands;
						int bossBattle,attackDamage,bossAttackdamage ,BossDamlower=100 ,BossDamnupper=400; //boss range for damage is higher than the kids defend command will have one save after that only damage reduction will be 25%
						int demogorgonHP=9999,partyHP=1000;
						srand(time(NULL));
						puts("welcome to room13 there please chose a direction to move  1 for west 2 for east 3 for south 4 for north");
						scanf("%d",&choices);
						switch(choices)
						{
    							case 1:
							{	
							puts("You encounter a demogorgon, the kids from stranger things appear to help you fight including eleven");
							puts("battle begins \nmenu press the number to use the command example 1 to fight./n \nfight \ndefend \nitem \nrun");
    							scanf("%d",&battlecommands);
 								while(battlecommands!=5&&demogorgonHP>0&&partyHP>0)
								{
									if(battlecommands==1)
									{
										puts("Mike and the other kids ready various weapons none look too dangerous while eleven charges up her psychic powers who do you choice to attack? 1 for the kids 2 for eleven");
	   		 							scanf("%d",&bossBattle);
											if(bossBattle==1)
											{
												puts("mike and the other kids attack");
												attackDamage= 1+(rand() %25);
												puts("Demogorgon roars and counter attacks");
												bossAttackdamage=1+(rand()+BossDamlower) %(BossDamnupper+1);
				    								demogorgonHP-=attackDamage;
												partyHP-=bossAttackdamage;
				    								printf("boss hp =%d   , party hp =%d \n",demogorgonHP,partyHP);
				    								puts("maybe we should let eleven attack ");
											}
	 			 							if(bossBattle==2)
	 										{
	 			    								puts("Eleven attacks!");
	 	            									attackDamage= 1+(rand() +1000) %(4000);
	 	            									if(attackDamage>3000){
	 	           									puts("demogorgon is pinned against the wall and can't attack!");
												demogorgonHP-=attackDamage;
					    							printf("boss hp =%d   , party hp =%d \n",demogorgonHP,partyHP);
					    						}
	 										else
	 										{
	 											puts("demogorgon is stunned but swipes at eleven");
	 											bossAttackdamage=1+(rand()+BossDamlower) %(BossDamnupper+1);
	 											partyHP-=attackDamage;
	 											partyHP+=50;//attack is weaker vs eleven so they don't lose as much
					    							demogorgonHP-=attackDamage;
												printf("boss hp =%d   , party hp =%d \n",demogorgonHP,partyHP);
					    						}
				 
				 
										} //if end
		            puts("\nmenu press the number to use the command example 1 to fight./n \nfight \ndefend \nitem \nrun");
			    scanf("%d",&battlecommands);
			
			}	
	
	 if(battlecommands==2)
	 {
			puts("Lucas screams how can we defend against This thing!!");
			puts("try something else!");
			puts("\nmenu press the number to use the command example 1 to fight./n \nfight \ndefend \nitem \nrun");
			scanf("%d",&battlecommands);
			
	 }
		
	 if(battlecommands==3)
	   {
	   		puts("Eleven uses eggo waffles increases attack damage! note using this command again will not stack attack damage");
	   		puts("\nmenu press the number to use the command example 1 to fight./n \nfight \ndefend \nitem \nrun");
			scanf("%d",&battlecommands);
	   }
	 if(battlecommands==4)
	 {
	  	        puts("cannot escape try something else!");
	  	        puts("\nmenu press the number to use the command example 1 to fight./n \nfight \ndefend \nitem \nrun");
			scanf("%d",&battlecommands);
	  }
								}
	if(partyHP<=50)
	{
		puts("game is over the kids have lost the upside down world has become our world");
		return 0;
	}
			        else
			        {
			        	puts("Eleven destroys the demogorgon but she is pulled into the upside down world as a result to be continued.. you however end up back in your room safe and sound with a box of eggo waffles");
				}
			        	break;
}
// end of choice 1 if
case 2:
{
	puts("you move into room with a lake");
	break;
}


case 3:
{
	puts("room fills with water no escape game over");
	break;
}
case 4:
{
	puts(" you find the sword of truth");
	break;
}
default:
{
		puts("wrong button or impossible direction try again");
		break;
}



}//room 13 end Bradford Mcdaniel
					break;
			}
			case 14:
			{
					while(choice != 99)
					{
						char newName[256];
						char quest[256];
						char color[256];
						char capital[256];
						char airVelocity[256];
						int i = 0;

						puts("You enter room 14 and the door closes behind you. You hear a click that tells you the door is sealed from the water outside, but also locked. The first thing you notice is that it's dark. Like, really dark. Darker than I like my coffee. And that's pretty dark. Anyway, you hear a disembodied voice that seems to come from everywhere. It tells you if you want to progress you must correctly answer all its questions.");
 						puts("He asks his first question: \"WHAT... is your name?\"");
						scanf("%s", newName);
						if(strcmp(name, newName) != 0)
						{
							puts("You die");
							break;
						}
        					puts("You hear an electric hum as the lights in the room turn on and begin to brighten. They're uncomfortably bright, like looking into the sun, but at least you can see. The room is qite large - larger than it should be considering how close the other doors were. Besides the lights, the room is completely and utterly undecorated. So much so it doesn't even have a door. Including the one you came through. Strange, isn't it?");
        					puts("\"WHAT... is your quest?\"");
        					scanf("%s", quest);
        					puts("\"WHAT... is your favorite color?\"");
        					scanf("%s", color);
						scanf("%s", color);
						// I have to put this second scan or else it just skips it. Idk why.
        					puts("\"WHAT... is the capital of Assyria?\"");
        					scanf("%[^\n]s", capital);
        					for(i = 0; i < 256; i++)
        					{
                					capital[i] = tolower(capital[i]);
        					}
        					if((strcmp(capital, "assur") != 0) && (strcmp(capital, "nineveh") != 0))
        					{
        					        puts("You die");
        					        break;
        					}
        					puts("\"WHAT... is the air speed velocity of an unladen swallow?\"");
						scanf("%[^\n]s", airVelocity);
        					for(i = 0; i < 256; i++)
        					{
        					        airVelocity[i] = tolower(airVelocity[i]);
        					}
        					if(strcmp(airVelocity, "whatdoyoumean?anafricanoreuropeanswallow?") != 0)
        					{
							puts("You die");
        					        break;
						}
						puts("On the side of the room opposite from where you entered, the wall slowly ascends like a garage door to reveal a bridge. You cross the bridge, and find yourself... back in the damn water room somehow.");
						break;
					}
					break;
			}
			case 15://Sean
			{
					
					while(choice !=99)
					{
						

							printf("Hello! Welcome, gamer! You are now in room 15...");
							printf("You hear a loud growl. Suddenly you hear loud footsteps. You panick but you try to rely on your instincts");
							printf("You are shocked to your eyes to see a massive bear coming out of a cave!");
							printf("You have a piece of rock laying next to you and a long club laying further away");
							printf("What do you do? Please choose from the following options!");
							printf("Press 99 if you want to quit since video games cause violence");

					scanf(%d, &choice);
						int roll_0 =(rand() %10) +1;
						int roll1 = (rand() %10) + 1;
						int die = 0;


						if(choice ==1)
						{
							printf("You automatically rely on running out of the room. The room is locked out and there is no other exit besides the 
										cave that the bear came out of. Since you're panick attack has gotten worse, you make poor judgments and gets
							beaten to death by the bear. Now you have lost your legacy!");
						}
						else if(choice ==2)
						{
							printf("You decide to make friends with the bear. The bear seems to utter some sounds. It appears to speak a human language, but you are just being delusional. It turns out that the bear does not speak English, therefore, you instantly get eaten by the bear!");

						}
						else if(choice==3)
						{
							printf("You decide to use the stone rod that is laying on the floor. You end up getting bruised, although you emerge victorious after beating the bear to death and you feel accomplished!. Now you can move on to other rooms. Good luck on your journey!");
									for (i = 0; i < die; i++);
									{
										if(roll_0 == roll1)
										{
											printf("You won the jackpot! Nobody knows what it is however...");
										}
									}
									FILE *outfile = fopen( "outfile.txt", "a");
									fclose(outfile);

								}

						else
						{
							printf("Please enter a valid option or just play a different game you rebel...");
						}
       
					}
					break;
			}
			case 16:
			{
					while(choice != 99)
					{
						        int userInput, trapAnswer;
							int wallet = 0;
       						        int userHealth = 50;
							int siren = 50;
							printf("Beginning Health: %d\n", userHealth);
							printf("Beginning Money: %d\n", wallet);
       							puts("Arriving in room 16, an empty cavern governed with sleeping bats, the noise of your footsteps jump off against the walls.");
						        puts("Towards the end, you can see light coming through, as if it were an exit.");
    						        puts("On your left looks to be a never ending cave.");
       						        puts("On your right you can hear what seems to be water rushing downwards.");
       					                puts("Pick a number between 1-3 to see which direction you fall in.");

       							scanf("%d", &userInput);

							if(userInput == 1)
							{
									printf("Walking towards the end of the cavern, the light becomes brighter and brighter.");
									puts("Upon entering, you are met with a room of variety of chests.");
									puts("Can you trust this mysterious treasure room? Choose between 1-5.");
								
									scanf("%d", &trapAnswer);
									if((trapAnswer == 1) || (trapAnswer == 3))
									{	
										printf("Opening the raggedy wooden chests, you are met with a flock of bats!");
										puts("You put your arms up in an attempt to protect yourself, resulting in wounds.");
										puts("The bats quickly leave the room. -10 HP from damage.");
									
										userHealth = userHealth - 10;
										break;
									}
									if((trapAnswer == 2) || (trapAnswer == 4))
									{
										userHealth = 0;
										puts("Upon opening the chest, you are met with an intoxicating vennoumous cloud!");
										puts("Having inhaled the fumes, your surroundings start to fade and your body become heavy.");
										puts("The room becomes dark as you meet your doom for being greeedy. Better luck next time!");
										printf("Health: %d\n", userHealth);
										break;
									}
									if(trapAnswer == 5)
									{
										puts("You found a chest with gold! You rightfully put the money in your wallet.");
										wallet = wallet + 35;
									}
									printf("Health: %d\n", userHealth);
									printf("Money: %d\n", wallet);
									break;
							}
							if(userInput == 2)
							{
								printf("Health: %d", userHealth);
								puts("Walking towards the never ending cavern, you try to get a feel of your surroundings.");
								puts("The more you walk, the more your surroundings become darker and darker...");
								while(userHealth != 0)
								{
									userHealth = userHealth - 5;
									if(userHealth == 0)
									{
										printf("As you keep walking, your body starts to get sluggish...");
										puts("Too late, it dawns on you that this cavern was filled with an odorless poison before falling over allowing death embrace your lifeless body...");
									}
								}
								break;
							}
							if(userInput == 3)
							{
								puts("Heading towards the sound of what is assumed to be water, you find a crystal clear lake!.");
								puts("Across from where your standing is a medium sized waterfall; yet you sense you are not alone.");
								puts("Moving cautiously close to the edge of the lake, you see creatures never before seen.");
								puts("One of the creatures peers her head out slowly creeping towards you.");
								puts("Shes the most beautiful being you have ever seen; and yet she has a fish tail?");
								puts("Before you can question her, she speaks; ");
								printf("Siren: What brings you to the Sirens Cove, human?");
								puts("As you try to explain yourself, you cant help but feel attracted to her voice...");
								puts("Choose between 1-3.");
								scanf("%d", &trapAnswer);
								if(trapAnswer == 1)
								{
									puts("You quickly come to your senses as you see her face inches away from yours!");
									puts("Quick thinking leads you to taking out your dagger and slashing at her!");
									puts("She screams out, scaring her comrades away!");
									puts("However, she immediately retaliates!");
									while(siren != 0)
									{
										printf("The fight goes on! You keep slashing her to kill her! Siren Health: %d\n", siren);
										siren = siren - 10;
										if(siren == 0)
										{
											puts("With one final blow, she cries out before turning into sea foam.");
											puts("You lose HP however gain money out of it.");
											userHealth = userHealth - 20;
											printf("Health: %d\n", userHealth);
											printf("Money: %d\n", wallet);
										}
									}
									break;
								}
								if(trapAnswer == 2)
								{
									puts("Youre eyes start to get heavy, her voice starting to sound like a dream.");
									puts("As you close your eyes you see her beautiful face become horrendous and pearly white teeth turn into decaying fangs!");
									puts("You try to scream but all you can hear is her voice; your surroudings become dark and your breathing coming to a stop.");
									userHealth = userHealth - 50;
									printf("Better luck nextime! Health: %d\n", userHealth);
									break;
								}
								if(trapAnswer == 3)
								{
									puts("You shake your head to bring yourself back to reality.");
									puts("You explain to her youre looking for your way out.");
									puts("As the conversation goes, she eyes you up and down before stopping you...");
									puts("Siren: what will you offer me in return if I were to help?");
									puts("You start to ponder at the thought.");
									puts("You offer either of the following:");
									puts("1 - Youre family heirloom, a silver dagger that is nicely polished.");
									puts("2 - Some of your HP seeing as how she most likely wields magic.");
									puts("3 - Your charm. As obnoxious as that is.");
									scanf("%d", &trapAnswer);
									if(trapAnswer == 1)
									{
										puts("You take out your sheithed dagger, pulling it out to show how beautiful it is.");
										puts("She eyes it, curiosity beaming in her eyes over such a beautiful weapon.");
										puts("With a gentle tone behind her voice, she asks to hold it to which you agree.");
										puts("Grabbing hold of it she pulls it out of its sheith, looking at the sharp edges...");
										puts("......");
										puts("....before a smirk forms across her face, the end of the dagger meeting your chest!");
										puts("Your eyes widen before the taste of iron comes through your mouth, looking down seeing blood start to drip and come out...");
										puts("Your body collapses as the room begins to feel cold and your vision fades...");
										userHealth = userHealth - 50;
										printf("...dont just hand strangers weapons. Health: %d\n", userHealth);
										break;
									}
									if(trapAnswer == 2)
									{
										puts("You start to barter with her, offering some of your life force in return to be magically transported back home!");
										puts("She does not seem convinced, but at the thought of obtaining some life force entices her!");
										puts("She agrees but warns how such a spell could lead to a near death experience.");
										puts("At this point you dont care as long as your back home in your bed with your dozens of cats. You agree.");
										puts("She thinks your crazy but doesnt push you further before putting her hands on your chest...");
										puts("...you feel yourself start to weaken, however your mind becomes filled with thought of being home.");
										userHealth = userHealth - 40;
										puts("As your body gets heavy, you feel yourself fall back onto something soft...");
										puts("Managing to open your eyes, you see familiar surroundings and realize your back home!!");
										printf("But your too tired to get up and decided to recover with whatever time is left in the day. Current Health: %d", userHealth);
										puts("You recover 15 HP. Youre back home, time for some well deserved rest.");
										userHealth = userHealth + 15;
										printf("Ending Health: %d", userHealth);
										break;
									}
									if(trapAnswer == 3)
									{
										printf("Current HP: %d\n", userHealth);
										puts("You try your best to whoo her with your charming looks, but in all honesty she finds you repulsive.");
										puts("Wanting to save you from emberassing yourself more, she splashes the lakes crystal clear water onto you.");
										puts("It feels refreshing to have the water on you! You could feel yourself gain HP!");
										userHealth = userHealth + 30;
										printf("Current Health: %d\n", userHealth);
										puts("You both look at each other before deciding to laugh it off.");
										puts("Out of empathy and wanting to forget this emberassing move, she tells you where to go back from to leave the cavern.");
										break;
									}

								}
							}	
						}				
					break;
			}
			case 17: // This room just adds to the game. Can be edited later to result in a loss and terminate the program. Currently, solving or failing to solve the problem ends up with the player choosing a room again
			{
				while(choice != 99)
				{
					puts("\nYou open the door to room 17.");
					puts("Upon entering, the door slams behind you and you hear it lock.");
					puts("A lightbulb hanging from the ceiling begins to light up. After waiting a few moments, the lights slightly turn up and you notice something in the center of the room.");
					puts("In the center of the room, you see a small table with a number pad embedded onto it.");
				        puts("Upon inspection of the number pad, you press it  and the whole room suddenly lights up entirely, putting you in a daze.");
					puts("You recover from the daze. Upon recovering, you see a small screen display hanging in front of you connected to the number pad.");
					puts("Even worse, you notice multiple explosives, enough to blow the room (and yourself) out of existence.");
					puts("On the screen display, it shows: Enter the correct 4 number password. After 3 wrong attempts, say bye to your life.");
					puts("You look around the room and see a lot of scratch and scribbles, but you notice something barely legible.");
					puts("You decipher it and it says roomx365."); // The 4 number password is 17 * 365, which is 6205
					puts("You question the meaning of it as you hesitate to approach the number pad.");
					puts("You must now enter the 4 number password.");

					int i;						
																						   						for(i = 1; i<4; i++)
					{
						scanf("%d", &choice);
						if(choice != 6205)
						{
							printf("\nYou guessed wrong. Attempt %d failed.\n", i);
							if(i ==3)
							{
								puts("\nAll attempts failed, goodbye.");
								puts("The explosion magically blows you back to where you started. Hey at least you aren't dead ... yet\n");
								//choice = 99; //uncommenting would execute this: puts("Magically you are transported through space and time. You are back at the beginning....."); and end the program	break;
							}
						}																																					
						else if(choice == 6205)
						{
							puts("\nThe screen displays: Congratulations, you can math, as you hear the door unlock and open behind you.");
							puts("You never sprinted so fast in your life as you exit the room.");
							puts("As you are about to exit the room, a portal appears out of no where and you inadvertently run through it...\n"); 
							// After the correct choice, the player is transported back to the beginning as if nothing happened
							break;
						}
						else
						{
							printf("You guessed wrong. Attempt %d failed.", i);
							break;
						}	
					}			
					break; // Break statement needed here to avoid infinite loop of room 17 whether correct or wrong	
				}				
				break;	
			}
			case 18://MINE: JOSEPH MORENO - ROOM 18			
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							puts("Terra Fictitia!");
							puts("Are you the one? The the champion destined to beat them?");
							puts("Traveling through the cavern of Smaug, you come across a goblet of gold.");
							puts("Will you touch the goblet?");
							puts("0 = no; 1 = yes");
							scanf("%d", &choice);
							if (choice == 1)
							{
								puts("The goblet was laced in poison. You tried your best, lancer! Surely, another story awaits you.\n");
								break;
							} 
							else if (choice == 0)
							{
								puts("Good choice! Ah, a dragon! RUN, escape!\n");
								puts("We're journeying through the Ice Spires of Kyurem. Watch your step.\n");
								puts("It looks like you can slide down the mountain. Would you like to, or would you like to trudge slowly?");
								puts("0 = slide; 1 = trudge");
								scanf("%d", &choice);
								if (choice == 1) 
								{
									puts("Oh no! The dragon caught up to us! It looks like slow and steady didn't win this race. Shame, maybe the next one will be the champion...\n");
									break;
								}
								else if (choice == 0)
								{
									puts("\nSnow's up, lancer! You shaved several hours with your sick shred time.");
									puts("But it looks like you've discovered the Fire Pits of Apokylyps and its slums in the distance.");
									puts("\nOn your way to the capital you've discovered a ferocius man-beast. He's charging at you, charge back or tuck and roll?");
									puts("0 = tuck; 1 = charge");
									scanf("%d", &choice);
									if (choice == 1)
									{
										puts("He charged faster than you. Kabob is not a look that suits you. Better luck next time! Your next adventure awaits.");
										break;
									} 
									else if (choice == 0)
									{
										puts("You dodged him! But he's coming back! slash and roll or head on charge?");
										puts("0 = slash; 1 = charge");
										scanf("%d", &choice);
										if (choice == 1)
										{
											puts("Head on attacks were probably not the best idea. That helmet you've got on doesn't look good in blood red.Find another world to travel");
											break;
										}
										else if (choice == 0)
										{
											puts("\nThat slash damaged his leg terribly! But beast boy over there is coming for one last head charge. Slash or charge, Lancer?");
											puts("0 = slash; 1 = charge");
											scanf("%d", &choice);
											if (choice == 1)
											{
												puts("A direct charge was not the best idea. If only we'd been able to know that from the beginning. You were a great warrior. Try again next time!");
												break;
											} 
											else if (choice == 0)
											{
												puts("\n That did it. The monster is slain. Now let's be on our way lancer, I hear people coming from the slums.");
												puts("\n...\n");
												puts("From the distance, a villager shouts 'Kalibak is dead'.");
												puts("\nYou must now trudge through the Holland Marsh. Something appears to be pulling you deeper into the water.");
												puts("\n...\nWhat's that?! That thing is coming out of the swamp!");
												puts("Will you fight it or try to befriend it?");
												puts("0 = fight; 1 = befriend");
												scanf("%d", &choice);
												if (choice == 0)
												{
													puts("As you raise your lance, you're pulled into the swamp. Another sacrifice to the thing of Holland Marsh. A shame. You were so close too...");
													break;
												} 
												else if(choice == 1) 
												{
													puts("Its.. Its friendly? He's allowing you to pass! Lets go, we're almost out of here.\n");
													puts("We did it... You did it! You passed the Bat-Mites trials. You're ready. It's time to take you to the next ste-\n\nOh. I'm afraid to inform that we've been cancelled. But here's a reward for your troubles! A signed T-Shirt! Be sure to take it on your next adventure.. ");
													break;
												}
											}
										}
									}
								}								
							}
							break;
							scanf("%d",&choice);
					}
					break;
			}
			case 19:
			{
					while(choice != 99)
					{
                        puts("\nWelcome to Room 19..");
                        puts("\nYou take your first steps and see a case at the end of the hall.");
                        puts("Out of the corners of the dark room leprechauns begin appearing and");
                        puts("walk towards the case holding clubs, swords, and weapons of all sorts.");
                        puts("\nEnter..\n");
                        puts("1.If you want to exit room 19");
                        puts("2.If you talk your way out of this");
                        puts("3.If you unsheathe your Great Sword and commence an attack\n");
                        
                        char usr_buff[256] = {0};
                        int choice;
                        fgets(usr_buff, 256, stdin);
                        fgets(usr_buff, 256, stdin);
                        sscanf(usr_buff, "%d", &choice);
                        
                        switch (choice)
                        {
                            case 1:
                                puts("\nYou turn around to walk out but the door has been locked.\n");
                                puts("A sign reads:\n\t\"Who's the hottest rapper in Brooklyn?");
                                puts("You have 3 tries, guess right or room self-destructs. Come again.\"");
                                puts("You only think of one rapper so you enter 2 digits.");
                                int tekashi = 69;
                                int guess;
                                int chance = 3;
                                do
                                {
                                    scanf("%d", &guess);
                                    if (guess > tekashi && choice > 0)
                                    {
                                        printf("\n%d is too high\n", guess);
                                        chance--;
                                        printf("You have %d chances remaining\n", chance);
                                    }
                                    else if (guess < tekashi && choice > 0)
                                    {
                                        printf("\n%d is too low\n", guess);
                                        chance--;
                                        printf("You have %d chances remaining\n", chance);
                                    }
                                    else if (chance == 0)
                                    {
                                        puts("\n-------ROOM SELF DESTRUCTS--------\n\tGAME OVER!!!\n\n");
                                        
                                    }
                                    else if (guess == tekashi)
                                    {
                                        printf("\n %d Deadass!! Tekashi 6-9\n", guess);
                                        printf("Door unlocks-_-_-\"Click!\"\n\n");
                                        break;
                                    }
                                } while (chance != 0);
                                break;
                            case 2:
                                puts("You say to the leprechauns how on earth could both races have disagreements at a time like this!?");
                                puts("Instead of fighting one another \"ENTER GENERIC STORY PLOT LINE HERE:_____________\"");
                                puts("It turns out the head of this gang was a gambler of sorts so you took out a pair of dice.");
                                puts("Rolling snake eyes in their culture was the only way to win. What is at stake?");
                                puts("Well you would be forced to marry the head of the gangs child and create an heir");
                                puts("So with sweat dripping down the palms of your hands you throw the pair of 3 sided dice...\n");
                                
                                srand(time(NULL));
                                int roll_one = 1 + rand() % 3;
                                int roll_two = 1 + rand() % 3;
                                printf("THE FIRST DIE STOPS ROLLING... IT'S A %d !!!\n", roll_one);
                                printf("THE SECOND DIE STOPS....ITS A %d !!!!\n\n", roll_two);
                                if (roll_one == 1 && roll_two == 1)
                                {
                                    puts("You say your goodbyes and quickly leave room 19....\"fuck this shit\"\n");
                                }
                                else
                                {
                                    puts("A wedding is planned and you are forced shotgun wedding to marry your leprauchan");
                                    puts("Half humans half leprauchans little yous ar produced and well...");
                                    puts("This is your life now you think as you fall asleep.\n");
                                }
                                break;
                            case 3:
                                puts("Before you begin your assault you remember what your Sensei Mr.Poppe always said..");
                                puts("\"One must ALWAYS using FILE PROCESSING when doing projects in CSC251\"");
                                puts("With that in mind you decide to write a farewell note to your fellow classmates");
                                puts("Theres only one way this will end and you want the world to know what happened");
                                puts("By the way you should find it in ALL_CAPS.txt");
                                
                                FILE *all_caps = fopen( "ALL_CAPS.txt", "a");
                                puts("So you begin to write your farewell letter.... !!!\n");
                                char quote[256] = {0};
                                fgets(usr_buff, 256, stdin);
                                fputs(usr_buff, all_caps);
                                fclose(all_caps);
                                
                                
                                puts("The first victim comes at you and \"SLAAAASH\", his head rolls away into the darkness");
                                puts("Who's next!? you yell. They shoot and you jump off the bullets like like a frog does lillypads");
                                puts("You spin full 360 with your blade dismembering limbs left and right, so much blood....");
                                
                                int i;
                                int b = 1;
                                for (i = 35; i >= b; i--)
                                {
                                    if (i%b == 0)
                                    {
                                        printf("%d left...\n", i);
                                    }
                                    else if(i%b != 0)
                                    {
                                        puts("SLASH!!!");
                                    }
                                    
                                    if (i == b)
                                    {
                                        puts ("ONE FINAL SWING!!!!");
                                    }
                                    
                                    b++;
                                    
                                }
                                
                                puts("\nYou look around at the blood covered marble floor and walk towards the briefcase");
                                puts("You open it and a gold auroa eminates from it, its....its...beautiful");
                                puts("The room starts to shake, you begin to lose consciousness...what is going on!?\n");
                                break;
                            default:
                                puts("Error! Input 1-3 only");
                                break;
                        }
                        break;
					}
					break;
			}
			case 20:
			{
                srand(time(NULL));
                int password = 20;
                int health = 100;
                int defense = 0;
                int money = 0;
                int bonusMoney = 0;
                int enemyHitMax = 2;
                int enemyHit = (rand()%(enemyHit-1));
                int myHit = 3;
                system("clear");
                printf("The door labeled Room 20 is locked you must enter the 2 digit password: \n");
                scanf("%d", &choice);
                
                if(choice == password)
                {
                    system("clear");
                    printf("You enter the door labled Room 20\n");
                    printf("Current Status - Health: %d \t Defense: %d \t Money: %d\n\n\n\n", health,defense,money);
                }
                else
                {
                    system("clear");
                    printf("You are locked out\n\n");
                    if(password > choice)
                    {
                        printf("You guessed a lower number than the password\n\n");
                    }
                    else if(password < choice)
                    {
                        printf("You guessed a greater number than the password\n\n");
                    }
                    break;
                }
                system("clear");
                printf("You have guessed right the door opens and you walk into never ending hallways full of enemys\n");
                printf("You have encountered a sewer rat\n");
                printf("\nYou enter the battle with your hands\n");
                
                puts("You have three choices:");
                puts("1. Fight.");
                puts("2. Run.");
                puts("3. Insult its mother.");
                scanf("%d",&choice);
                int ratH = (rand()%(3-1))+1;
                int attack;
                switch(choice){
                    case 1:
                        system("clear");
                        printf("You have entered the battle:");
                        while(ratH > 0)
                        {
                            printf("\n1.Punch \n2.Kick");
                            scanf("%d",&choice);
                            printf("Rat health: %d", ratH);
                            if(choice == 1)
                            {
                                attack =(rand()%(2-1))+1;
                                printf("\n%d\n",attack);
                                ratH = ratH-attack;
                                health -= 1;
                            }
                            else if(choice == 2)
                            {
                                attack = (rand()%(3-1)+1);
                                printf("\n%d\n",attack);
                                ratH = ratH-attack;
                                health -= 1;
                            }
                        }
                        printf("The rat is dead\n");
                        money += 10;
                        printf("Current Status - Health: %d \t Defense: %d \t Money: %d\n\n\n\n", health,defense,money);
                        break;
                        
                    case 2:
                        system("clear");
                        printf("You have ran away\n\n");
                        break;
                        
                    case 3:
                        system("clear");
                        printf("The rat has ran away...\n\n\n");
                        printf("...(Ground Rumbles)...\n\n\n");
                        printf("It turnes out the rat ran away to tell its mutant mother\n");
                        printf("The glowing green mother rat towers over you blocking the sun\n");
                        printf("You have entered the battle:");
                        ratH = 99999;
                        while(ratH > 0)
                        {
                            puts("\n1.Punch \n2.Kick");
                            scanf("%d",&choice);
                            printf("Rat health: %d", ratH);
                            if(health<=0)
                            {
                                printf("\n\nYou died\n");
                                break;
                            }
                            if(choice == 1)
                            {
                                attack =(rand()%(2-1))+1;
                                printf("\n%d\n",attack);
                                ratH = ratH-attack;
                                health -= 99999;
                            }
                            else if(choice == 2)
                            {
                                attack = (rand()%(3-1)+1);
                                printf("\n%d\n",attack);
                                ratH = ratH-attack;
                                health -= 99999;
                            }
                        }
                        system("clear");
                        break;
                }
                FILE *fp;
                char filename[100];
                char ch;
                int linecount, wordcount, charcount;
                printf("If you would like to open a file for a chance to get bonus gold press 1 else press 2 to continue\n");
                scanf("%d",&choice);
                
                switch(choice){
                    case 1:
                        charcount = 0;
                        system("clear");
                        printf("Enter a filename :");
                        scanf("%s",filename);
                        system("clear");
                        
                        fp = fopen(filename,"r");
                        
                        if ( fp )
                        {
                            while ((ch=getc(fp)) != EOF) {
                                if (ch != ' ' && ch != '\n') { ++charcount; }
                            }
                            if(charcount >= 100)
                            {
                                bonusMoney = 10;
                                printf("You have earned %d gold\n", bonusMoney);
                                money += bonusMoney;
                            }
                            else if(charcount >= 50 && charcount < 100)
                            {
                                bonusMoney = 5;
                                printf("You have earned %d gold\n", bonusMoney);
                                money += bonusMoney;
                            }
                            else if(charcount >= 10 && charcount < 50)
                            {
                                bonusMoney = 10;
                                printf("You have earned %d gold\n", bonusMoney);
                                money += bonusMoney;
                            }
                            else if(charcount < 10)
                            {
                                printf("You earn nothing loser\n");
                            }
                            
                        }
                        else
                        {
                            printf("Failed to open the file\n");
                        }
                        break;
                    case 2:
                        system("clear");
                        printf("You say 'No thank You'\n");
                        break;
                }
                while(choice != 99)
                {
                    if(money >= 100)
                    {
                        system("clear");
                        printf("You have earned enough money to exit\n\n");
                        break;
                    }
                    if(health <= 0)
                    {
                        system("clear");
                        printf("You have died\n\n");
                        break;
                    }
                    int enemyHealth = (rand()%(enemyHitMax-1)+1);
                    int attack = (rand()%(enemyHitMax-1)+1);
                    printf("Current Status - Health: %d \t Defense: %d \t Money: %d\n\n\n\n", health,defense,money);
                    printf("You have encountered an enemy\n");
                    
                    puts("You have three choices:");
                    puts("1. Fight.");
                    puts("2. Run. (-2 gold)");
                    puts("3. Store.");
                    puts("4. Exit");
                    scanf("%d",&choice);
                    
                    switch(choice){
                        case 1:
                            system("clear");
                            printf("You have entered the battle:");
                            
                            while(enemyHealth > 0)
                            {
                                printf("\n1.Punch \n2.Kick");
                                scanf("%d",&choice);
                                if(choice == 1)
                                {
                                    
                                    attack =(rand()%(myHit-1))+1;
                                    printf("\n%d\n",attack);
                                    enemyHealth -= attack;
                                    health -= 2;
                                }
                                else if(choice == 2)
                                {
                                    
                                    attack = (rand()%(myHit-1)+1);
                                    printf("\n%d\n",attack);
                                    enemyHealth -= attack;
                                    health -= 2;
                                }
                            }
                            
                            money += 5;
                            myHit += 2;
                            enemyHitMax += 2;
                            system("clear");
                            printf("The enemy is dead\n");
                            break;
                            
                        case 2:
                            system("clear");
                            printf("You have ran away\n\n");
                            money -= 2;
                            break;
                            
                        case 3:
                            system("clear");
                            printf("Shop is under construction\n\nPotions and Armor coming soon\n\n");
                            
                            break;
                        case 4:
                            health = 0;
                    }
                    
                    
                }
                break;
			}
			case 21:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 22:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 23:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 24:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 25:
			{
					while(choice != 99)
					{
							puts("You open the door and close it behind you.");
							puts("After you overcome the panic from almost drowning, you look around and You find yourself in a cave, the air is damp and you smell mold.");
									printf ("You got lucky. You may press more buttons! Sounds like fun...");
							puts("You notice a skeleton at your feet with it's right hand clenched around something. The cave ahead leads to a tunnel and you see a door to your right.");
							puts("At this point you have 3 choices:");
							puts("1. Examine the skeleton.");
							puts("2. Proceed further ahead in the cave.");
							puts("3. Enter the door to your right.");
							scanf("%d",&choice);
							if(choice == 1)
							{
								puts("You reach down and pry open the skeleton's hand, a finger breaks loose and you place it in your pocket. Once you pry the opject free you look at it closely in the light and see it is a live grenade and the pin springs free. You drop the grenade and dash through the cave. You can hear the grenade explode, collapsing the tunnel behind you.");
								puts("To be continued...");
								break;
							}
							else if(choice == 2)
							{
								puts("You find yourself further ahead in the cave.");
