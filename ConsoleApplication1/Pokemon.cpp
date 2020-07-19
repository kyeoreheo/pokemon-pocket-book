#include "Pokemon.hpp"


Pokemon::Pokemon() {
	name_ = "";
	height_ = "";
	weight_ = "";
	type_ = "";
}

Pokemon::~Pokemon() {
	name_ = "";
	height_ = "";
	weight_ = "";
	type_ = "";
	friends_.clear();
}

Pokemon::Pokemon(const std::string& name, const std::string& height, const std::string &weight, const std::string& type) {
	name_ = name;
	height_ = height;
	weight_ = weight;
	type_ = type;
}

void Pokemon::addFriend(const std::string &name) {
	
}

void Pokemon::removeFriendByName(const std::string& name) {

}

void Pokemon::clearFriends() {

}

int Pokemon::numberOfFriends() {
	return 0;
}

void Pokemon::info() {

}