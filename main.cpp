#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "DataReader.hpp"
#include "Pokemon.hpp"

using namespace std;

int pokemonIndexByName(const vector<Pokemon>& pokeDex, const string& inputName) {
	for(int i = 0; i < pokeDex.size(); i++) {
		if(inputName == pokeDex[i].getName()) {
			return i;
		}
	}
	return -1;
}

void linkFriends(vector<Pokemon> &inputPokeDex) {
	for(int i = 0; i < inputPokeDex.size(); i++) {
		for(int j = 0; j < inputPokeDex[i].friendNames_.size(); j++) {
			string name = inputPokeDex[i].friendNames_[j];
			int friendIndex = pokemonIndexByName(inputPokeDex, name);
			inputPokeDex[i].addFriend(inputPokeDex[friendIndex]);
		}
	}
}

int main() {
	DataReader dataReader("pokemons.txt");
	vector<Pokemon> pokeDex;

	for(int i = 0; i < dataReader.pokemonNames.size(); i++) {
		Pokemon temp(dataReader.pokemonNames[i], dataReader.height[i], dataReader.weight[i], dataReader.type[i], dataReader.friends[i]);
		pokeDex.push_back(temp);
	}

	linkFriends(pokeDex);

	return 0;
}