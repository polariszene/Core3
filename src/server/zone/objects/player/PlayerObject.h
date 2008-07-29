/*
 *	server/zone/objects/player/PlayerObject.h generated by engine3 IDL compiler 0.55
 */

#ifndef PLAYEROBJECT_H_
#define PLAYEROBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

class Zone;

class SceneObject;

class Player;

class FriendsList;

class WaypointObject;

class PlayerManager;

#include "../scene/SceneObject.h"

class PlayerObject : public SceneObject {
public:
	PlayerObject(Player* player);

	void sendToOwner();

	void sendTo(Player* player, bool doClose = true);

	void addExperience(const string& xpType, int xp, bool updateClient);

	void removeExperience(const string& xpType, int xp, bool updateClient);

	bool setCharacterBit(unsigned int bit, bool updateClient = false);

	bool clearCharacterBit(unsigned int bit, bool updateClient = false);

	void setForcePowerBar(unsigned int fp);

	void setMaxForcePowerBar(unsigned int fp, bool updateClient = true);

	void setForcePower(unsigned int fp);

	void setForcePowerMax(unsigned int fp);

	void setForceRegen(unsigned int fp);

	unsigned int getForcePower();

	unsigned int getForcePowerMax();

	unsigned int getForceRegen();

	bool isJedi();

	bool isOnFullForce();

	unsigned int getCharacterBitmask();

	int getWaypointListSize();

	int getDrinkFilling();

	int getDrinkFillingMax();

	int getFoodFilling();

	int getFoodFillingMax();

	void setDrinkFilling(int filling, bool updateClient);

	void setDrinkFillingMax(int filling);

	void setFoodFilling(int filling, bool updateClient);

	void setFoodFillingMax(int filling);

	void changeDrinkFilling(int filling, bool updateClient);

	void changeFoodFilling(int filling, bool updateClient);

	bool isDigesting();

	unsigned int getJediState();

	WaypointObject* getWaypoint(unsigned long long id);

	void addWaypoint(WaypointObject* wp, bool updateClient);

	bool removeWaypoint(WaypointObject* wp, bool updateClient);

	void updateWaypoint(WaypointObject* wp);

	Player* getPlayer();

	void setCurrentTitle(string& nTitle, bool updateClient);

	void setTitle(string& temptitle);

	string& getCurrentTitle();

	unsigned int getExperienceListCount();

	unsigned int getNewExperienceListCount(int cnt);

	unsigned int getWaypointListCount();

	unsigned int getNewWaypointListCount(int cnt);

	FriendsList* getFriendsList();

	void addFriend(string& name, string& inServer);

	void friendsMagicNumberReset();

	void removeFriend(string& name);

	void findFriend(string& name, PlayerManager* playerManager);

	void saveFriends();

	void loadFriends();

	void updateAllFriends(PlayerObject* playerObject);

	void saveIgnorelist(Player* player);

	void saveWaypoints(Player* player);

	WaypointObject* searchWaypoint(Player* play, const string& name);

protected:
	PlayerObject(DummyConstructorParameter* param);

	virtual ~PlayerObject();

	string _return_getCurrentTitle;

	friend class PlayerObjectHelper;
};

class PlayerObjectImplementation;

class PlayerObjectAdapter : public SceneObjectAdapter {
public:
	PlayerObjectAdapter(PlayerObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void sendToOwner();

	void sendTo(Player* player, bool doClose);

	void addExperience(const string& xpType, int xp, bool updateClient);

	void removeExperience(const string& xpType, int xp, bool updateClient);

	bool setCharacterBit(unsigned int bit, bool updateClient);

	bool clearCharacterBit(unsigned int bit, bool updateClient);

	void setForcePowerBar(unsigned int fp);

	void setMaxForcePowerBar(unsigned int fp, bool updateClient);

	void setForcePower(unsigned int fp);

	void setForcePowerMax(unsigned int fp);

	void setForceRegen(unsigned int fp);

	unsigned int getForcePower();

	unsigned int getForcePowerMax();

	unsigned int getForceRegen();

	bool isJedi();

	bool isOnFullForce();

	unsigned int getCharacterBitmask();

	int getWaypointListSize();

	int getDrinkFilling();

	int getDrinkFillingMax();

	int getFoodFilling();

	int getFoodFillingMax();

	void setDrinkFilling(int filling, bool updateClient);

	void setDrinkFillingMax(int filling);

	void setFoodFilling(int filling, bool updateClient);

	void setFoodFillingMax(int filling);

	void changeDrinkFilling(int filling, bool updateClient);

	void changeFoodFilling(int filling, bool updateClient);

	bool isDigesting();

	unsigned int getJediState();

	WaypointObject* getWaypoint(unsigned long long id);

	void addWaypoint(WaypointObject* wp, bool updateClient);

	bool removeWaypoint(WaypointObject* wp, bool updateClient);

	void updateWaypoint(WaypointObject* wp);

	Player* getPlayer();

	void setCurrentTitle(string& nTitle, bool updateClient);

	void setTitle(string& temptitle);

	string& getCurrentTitle();

	unsigned int getExperienceListCount();

	unsigned int getNewExperienceListCount(int cnt);

	unsigned int getWaypointListCount();

	unsigned int getNewWaypointListCount(int cnt);

	FriendsList* getFriendsList();

	void addFriend(string& name, string& inServer);

	void friendsMagicNumberReset();

	void removeFriend(string& name);

	void findFriend(string& name, PlayerManager* playerManager);

	void saveFriends();

	void loadFriends();

	void updateAllFriends(PlayerObject* playerObject);

	void saveIgnorelist(Player* player);

	void saveWaypoints(Player* player);

	WaypointObject* searchWaypoint(Player* play, const string& name);

protected:
	string _param0_addExperience__string_int_bool_;
	string _param0_removeExperience__string_int_bool_;
	string _param0_setCurrentTitle__string_bool_;
	string _param0_setTitle__string_;
	string _param0_addFriend__string_string_;
	string _param1_addFriend__string_string_;
	string _param0_removeFriend__string_;
	string _param0_findFriend__string_PlayerManager_;
	string _param1_searchWaypoint__Player_string_;
};

class PlayerObjectHelper : public DistributedObjectClassHelper, public Singleton<PlayerObjectHelper> {
	static PlayerObjectHelper* staticInitializer;

public:
	PlayerObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<PlayerObjectHelper>;
};

#include "../scene/SceneObjectImplementation.h"

class PlayerObjectServant : public SceneObjectImplementation {
public:
	PlayerObject* _this;

public:
	PlayerObjectServant(unsigned long long oid, int type);
	virtual ~PlayerObjectServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*PLAYEROBJECT_H_*/
