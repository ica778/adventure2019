#include <string>
#include <cstdlib> //std::rand
#include "../include/WorldManager.h"
#include "../../character/include/Character.h"



WorldManager::WorldManager() {}

void WorldManager::generateWorld() {
    //temporary hard coded rooms
    for(int i = 0; i < 10; i++){
        std::string roomName = "Room number " + std::to_string(i+1);
        std::string roomDescription = "This dark room contains only the number " + std::to_string(i+1);
        int exit1TargetID = std::rand() % (i+1); //rand ID from 0 to i
        int exit2TargetID = std::rand() % (i+1); //rand ID from 0 to i

        Room r(roomName, roomDescription);
        r.createExit("Exit 1", "The first exit. Looks shady.", 0, exit1TargetID);
        r.createExit("Exit 2", "The second exit. Looks way better than exit 1.", 0, exit2TargetID);
        worldRooms[i] = r;
    }
}

int WorldManager::move(usermanager::User * character, short direction) {
	int currentRoomID = character->getRoomID();
	int newRoomID = worldRooms[currentRoomID].move(character, direction);
	if( newRoomID < 0) return -1; //if move failed, return -1

	character->setRoomID(newRoomID);
	bool moveWasValid = worldRooms[newRoomID].addCharacter(character); //add character to new room in world

	if(moveWasValid == false) return -1;
	return newRoomID;
}

std::string WorldManager::look(unsigned int roomID) const {
		return worldRooms[roomID].getDescription();
}
