#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*	A little example about how classes work
 *	in c99
 *	
 *	It seems you have to actually create an struct
 *	and then call methods, passing the struct instance
 *	as the first parameter (by reference)
 *
 *	You can define structs with function pointers
 * 	inside, but that actually destroys the purpose,
 *	you need to make a whole lot of implementations to
 * 	make it work.
 *	And that's exactly what I'm gonna do right now
 **/

//class Human
typedef struct {
	char __name[50];
}Human;

Human CreateHuman(char* name){Human this;
	strcpy(this.__name,name);
	return this /*you piece of shit*/;
}
//end class

//class Animal
typedef struct{
	char __name[50];
	char __species[100];
}Animal;

Animal CreateAnimal(char* name, char* species){Animal this;

	strcpy(this.__name, name);
	strcpy(this.__species, species);

return this;}



int main(){
	Human yo;
	yo = CreateHuman("Daniel Flores");

	Animal byte = CreateAnimal("Baitoo", "Gato");
	/*finally*/


	printf("%s",yo.__name);/*now the piece of
				shit is printing
				this thing*/
	printf("\n");

	printf("%s %s", byte.__name, byte.__species);
	
	return 0; /*idk why is this here*/
}
