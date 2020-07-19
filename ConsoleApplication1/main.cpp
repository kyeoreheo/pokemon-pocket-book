#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "DataReader.hpp"
#include "Pokemon.hpp"

using namespace std;

int main()
{
	DataReader dataReader("pokemons.txt");
	cout << dataReader.pokemonNames[3] << endl;
	cout << dataReader.type[2] << endl;
	cout << dataReader.height[5] << endl;
	cout << dataReader.friends[1] << endl;

	Pokemon pokemon(dataReader.pokemonNames[0], dataReader.height[0], dataReader.weight[0], dataReader.type[0]);

}