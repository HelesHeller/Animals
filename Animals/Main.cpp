#include "Dog.h"
#include "Cat.h"
#include"parrot.h"
#include"Hamster.h"
#include<iostream>
#include<Windows.h>

using namespace std;


int main() {

	Dog dog("Buddy");
    Cat cat("Whiskers");
    parrot parrot("Polly");
    Hamster hamster("Nibbles");

	dog.Show();
	dog.Type();
	dog.Sound();

    cat.Show();
    cat.Type();
    cat.Sound();

    parrot.Show();
    parrot.Type();
    parrot.Sound();

    hamster.Show();
    hamster.Type();
    hamster.Sound();

}