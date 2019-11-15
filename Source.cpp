#include <stdio.h>
using namespace std;

int main() {
	char chr;
	
	// variable for each outcome and user input
	int bulbasuar = 0;
	int charmander = 0;
	int squirtle = 0;
	int pikachu = 0;
	int caterpie = 0;
	int eevee = 0;
	char input; // user input


	// question 1
	printf ( "what's your favorite element?: \n" );
	printf ( "g-grass, f-fire, w-water, e-electric, b-bug, n-normal: \n" );
	scanf_s("%c", &input);   //gets keyboard input, stores it into variable
	if (input == 'g') //checks if user put in a g
		bulbasuar++; //if it's a g, bulbasaur gets a point
	else if (input == 'f')
		charmander++;
	else if (input == 'w')
		squirtle++;
	else if (input == 'e')
		pikachu++;
	else if (input == 'b')
		caterpie++;
	else if (input == 'n')
		eevee++;

	// question 2

	printf ( "what's your favorite move?: \n" );
	printf ( "v-vine whip, f-flamethrower, w-watergun, t-thunderbolt, b-bug bite, s-swift: \n" );
	scanf_s ("%c", &input);
	if (input == 'v')
		bulbasuar++;
	else if (input == 'f')
		charmander++;
	else if (input == 'w')
		squirtle++;
	else if (input == 't')
		pikachu++;
	else if (input == 'b')
		caterpie++;
	else if (input == 's')
		eevee++;

	// question 3

	printf ( "what's your favorite color?: \n");
	printf ( "g-green, o-orange, b-blue, y-yellow, y/g-yellow green, b-brown: \n");
	scanf_s ("%c", &input);
	if (input == 'g')
		bulbasuar++;
	else if (input == 'o')
		charmander++;
	else if (input == 'b')
		squirtle++;
	else if (input == 'y')
		pikachu++;
	else if (input == 'y/g')
		caterpie++;
	else if (input == 'b')
		eevee++;

	// question 4

	printf ( "what's your favorite envlove version?: \n");
	printf ( "i-ivysaur, c-charmeleon, w-wartortle, r-raichu, m-metapod, v-vaporeon: \n");
	scanf_s ("%c", input);
	if (input == 'i')
		bulbasuar++;
	else if (input == 'c')
		charmander++;
	else if (input == 'w')
		squirtle++;
	else if (input == 'r')
		pikachu++;
	else if (input == 'm')
		caterpie++;
	else if (input == 'v')
		eevee++;

	// question 5

	printf ( "what's your favorite strenght?: \n");
	printf ( "g-ground, s-steel, f-fire, w-water, p-psychic, n-none: \n");
	scanf_s ("%c", input);
	if (input == 'g')
		bulbasuar++;
	else if (input == 's')
		charmander++;
	else if (input == 'f')
		squirtle++;
	else if (input == 'w')
		pikachu++;
	else if (input == 'p')
		caterpie++;
	else if (input == 'n')
		eevee++;

	// check which pokemon has the most points

	if (bulbasuar >= charmander && bulbasuar >= squirtle && bulbasuar >= pikachu && bulbasuar >= caterpie && bulbasuar >= eevee)//checks if bulbasaur has the most points
		printf ( "I choose you bulbasuar!: \n") ;
	else if (charmander > bulbasuar && charmander > squirtle && charmander > pikachu && charmander > caterpie && charmander > eevee)
		printf ( "I choose you charmander!: \n");
	else if (squirtle > bulbasuar && squirtle > charmander && squirtle > pikachu && squirtle > caterpie && squirtle > eevee)
		printf ( "I choose you squirtle!: \n");
	else if (pikachu > bulbasuar && pikachu > charmander && pikachu > squirtle && pikachu > caterpie && pikachu > eevee)
		printf ( "I choose you pikachu!: \n");
	else if (caterpie > bulbasuar && caterpie > charmander && caterpie > squirtle && caterpie > pikachu && caterpie > eevee)
		printf ( "I choose you caterpie!: \n");
	else if (eevee > bulbasuar && eevee > charmander && eevee > squirtle && eevee > pikachu && eevee > caterpie)
		printf ( "I choose you eevee!: \n");
}


