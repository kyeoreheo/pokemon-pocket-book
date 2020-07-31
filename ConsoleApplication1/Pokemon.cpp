#include "Pokemon.hpp"
#include "DataReader.hpp"
#include <iostream>

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
	friendNames_.clear();
}

Pokemon::Pokemon(const std::string& name, const std::string& height, const std::string &weight, const std::string& type, const std::string &friendNames) {
	name_ = name;
	height_ = height;
	weight_ = weight;
	type_ = type;
	separateFriends(friendNames);
}

std::string Pokemon::getName() const {
	return name_;
}

void Pokemon::addFriend(const Pokemon &inputFriend) {
	friends_.push_back(inputFriend);
}

void Pokemon::removeFriendByName(const std::string &name) {
	for (int i = 0; i < friends_.size(); i++) {
		if (friends_[i].getName() == name) { //check string
			//remove friend
			friends_.erase(friends_.begin() + i);
		}
	}
}

void Pokemon::clearFriends() {
	friends_.clear();
}

int Pokemon::numberOfFriends() {
	return friends_.size();
}

void Pokemon::info() {
	std::cout << "Name: " << name_ << "\n" << "Height: " << height_ << "\n" << "Weight: " << weight_ << "\n" << "Type: " << type_ << std::endl;
	std::cout << "Friends: ";
	for (int i = 0; i < friendNames_.size(); i++) {
		std::cout << friendNames_[i];
	}
}

void Pokemon::separateFriends(const std::string& friendName) {
	std::string temp = "";
	int currentIndex = 0;
	//std::cout << friendName << std::endl;
	while (currentIndex < friendName.size()) {
		//std::cout << currentIndex << std::endl;
		if (friendName[currentIndex] != ',') {
			temp += friendName[currentIndex];
			currentIndex++;
		} else {
			friendNames_.push_back(temp);
			temp = "";
			currentIndex += 1;			
		}
	}
	friendNames_.push_back(temp);
}