#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "DataReader.hpp"
#include "Pokemon.hpp"

using namespace std;

void generateFriends(const vector<Pokemon> &inputPokeDex) {
	for(int i = 0; i < inputPokeDex.size(); i++){
		for (int j = 0; j < inputPokeDex[i].; j++) {

		}
}

int main()
{
	DataReader dataReader("pokemons.txt");
	vector<Pokemon> pokeDex;

	for (int i = 0; i < dataReader.pokemonNames.size(); i++) {
		Pokemon temp(dataReader.pokemonNames[i], dataReader.height[i], dataReader.weight[i], dataReader.type[i], dataReader.friends[i]);
	}


	
	//cout << dataReader.pokemonNames[3] << endl;
	//cout << dataReader.type[2] << endl;
	//cout << dataReader.height[5] << endl;
	//cout << dataReader.friends[1] << endl;
	//
	//Pokemon abra(dataReader.pokemonNames[0], dataReader.height[0], dataReader.weight[0], dataReader.type[0], dataReader.friends[0]);
	//abra.info();

	//Pokemon arbok(dataReader.pokemonNames[2], dataReader.height[2], dataReader.weight[2], dataReader.type[2]);
	//abra.addFriend(arbok);
	//abra.info();
	//cout << dataReader.friends[0];
}