/*
 *	server/zone/managers/user/UserManager.h generated by engine3 IDL compiler 0.55
 */

#ifndef USERMANAGER_H_
#define USERMANAGER_H_

#include "engine/orb/DistributedObjectBroker.h"

class ZoneServer;

class UserManager : public DistributedObjectStub {
public:
	UserManager(ZoneServer* server);

	bool checkUser(unsigned int ipid);

	bool isAdmin(const string& name);

	void grantAdmin(const string& name);

	void removeAdmin(const string& name);

	void parseBanList();

	void banUser(const string& ipaddr);

	bool banUserByName(string& name, string& admin);

	bool kickUser(string& name, string& admin);

	void changeUserCap(int amount);

	bool isBannedUser(unsigned int ipid);

	int getUserCap();

protected:
	UserManager(DummyConstructorParameter* param);

	virtual ~UserManager();

	friend class UserManagerHelper;
};

class UserManagerImplementation;

class UserManagerAdapter : public DistributedObjectAdapter {
public:
	UserManagerAdapter(UserManagerImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	bool checkUser(unsigned int ipid);

	bool isAdmin(const string& name);

	void grantAdmin(const string& name);

	void removeAdmin(const string& name);

	void parseBanList();

	void banUser(const string& ipaddr);

	bool banUserByName(string& name, string& admin);

	bool kickUser(string& name, string& admin);

	void changeUserCap(int amount);

	bool isBannedUser(unsigned int ipid);

	int getUserCap();

protected:
	string _param0_isAdmin__string_;
	string _param0_grantAdmin__string_;
	string _param0_removeAdmin__string_;
	string _param0_banUser__string_;
	string _param0_banUserByName__string_string_;
	string _param1_banUserByName__string_string_;
	string _param0_kickUser__string_string_;
	string _param1_kickUser__string_string_;
};

class UserManagerHelper : public DistributedObjectClassHelper, public Singleton<UserManagerHelper> {
	static UserManagerHelper* staticInitializer;

public:
	UserManagerHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<UserManagerHelper>;
};

class UserManagerServant : public DistributedObjectServant {
public:
	UserManager* _this;

public:
	UserManagerServant();
	virtual ~UserManagerServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*USERMANAGER_H_*/
