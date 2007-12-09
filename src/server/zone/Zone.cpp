/*
Copyright (C) 2007 <SWGEmu>

This File is part of Core3.

This program is free software; you can redistribute
it and/or modify it under the terms of the GNU Lesser
General Public License as published by the Free Software
Foundation; either version 2 of the License,
or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
See the GNU Lesser General Public License for
more details.

You should have received a copy of the GNU Lesser General
Public License along with this program; if not, write to
the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

Linking Engine3 statically or dynamically with other modules
is making a combined work based on Engine3.
Thus, the terms and conditions of the GNU Lesser General Public License
cover the whole combination.

In addition, as a special exception, the copyright holders of Engine3
give you permission to combine Engine3 program with free software
programs or libraries that are released under the GNU LGPL and with
code included in the standard release of Core3 under the GNU LGPL
license (or modified versions of such code, with unchanged license).
You may copy and distribute such a system following the terms of the
GNU LGPL for Engine3 and the licenses of the other code concerned,
provided that you include the source code of that other code when
and as the GNU LGPL requires distribution of source code.

Note that people who make modified versions of Engine3 are not obligated
to grant this special exception for their modified versions;
it is their choice whether to do so. The GNU Lesser General Public License
gives permission to release a modified version without this exception;
this exception also makes it possible to release a modified version
which carries forward this exception.
*/

/*
 *	server/zone/Zone.cpp generated by Engine3 IDL compiler 0.51
 */

#include "objects/scene/SceneObject.h"

#include "ZoneServer.h"

#include "../chat/ChatManager.h"

#include "managers/planet/PlanetManager.h"

#include "managers/creature/CreatureManager.h"

#include "Zone.h"

#include "ZoneImplementation.h"

/*
 *	ZoneStub
 */

Zone::Zone() : ORBObjectStub(NULL) {
}

Zone::Zone(ORBObjectServant* obj) : ORBObjectStub(obj) {
}

Zone::Zone(Zone& ref) : ORBObjectStub(ref) {
}

Zone::~Zone() {
}

Zone* Zone::clone() {
	return new Zone(*this);
}


void Zone::lock(bool doLock) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 6);
		invocation.addBooleanParameter(doLock);

		invocation.executeWithVoidReturn();
	} else
		((ZoneImplementation*) _impl)->lock(doLock);
}

void Zone::unlock(bool doLock) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 7);
		invocation.addBooleanParameter(doLock);

		invocation.executeWithVoidReturn();
	} else
		((ZoneImplementation*) _impl)->unlock(doLock);
}

void Zone::registerObject(SceneObject* obj) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 8);
		invocation.addObjectParameter(obj);

		invocation.executeWithVoidReturn();
	} else
		((ZoneImplementation*) _impl)->registerObject(obj);
}

SceneObject* Zone::lookupObject(unsigned long long oid) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 9);
		invocation.addUnsignedLongParameter(oid);

		return (SceneObject*) invocation.executeWithObjectReturn();
	} else
		return ((ZoneImplementation*) _impl)->lookupObject(oid);
}

SceneObject* Zone::deleteObject(unsigned long long oid) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 10);
		invocation.addUnsignedLongParameter(oid);

		return (SceneObject*) invocation.executeWithObjectReturn();
	} else
		return ((ZoneImplementation*) _impl)->deleteObject(oid);
}

SceneObject* Zone::deleteObject(SceneObject* obj) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 11);
		invocation.addObjectParameter(obj);

		return (SceneObject*) invocation.executeWithObjectReturn();
	} else
		return ((ZoneImplementation*) _impl)->deleteObject(obj);
}

int Zone::getZoneID() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 12);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((ZoneImplementation*) _impl)->getZoneID();
}

ZoneServer* Zone::getZoneServer() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 13);

		return (ZoneServer*) invocation.executeWithObjectReturn();
	} else
		return ((ZoneImplementation*) _impl)->getZoneServer();
}

ChatManager* Zone::getChatManager() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 14);

		return (ChatManager*) invocation.executeWithObjectReturn();
	} else
		return ((ZoneImplementation*) _impl)->getChatManager();
}

CreatureManager* Zone::getCreatureManager() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 15);

		return (CreatureManager*) invocation.executeWithObjectReturn();
	} else
		return ((ZoneImplementation*) _impl)->getCreatureManager();
}

PlanetManager* Zone::getPlanetManager() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 16);

		return (PlanetManager*) invocation.executeWithObjectReturn();
	} else
		return ((ZoneImplementation*) _impl)->getPlanetManager();
}

unsigned long long Zone::getGalacticTime() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 17);

		return invocation.executeWithUnsignedLongReturn();
	} else
		return ((ZoneImplementation*) _impl)->getGalacticTime();
}

unsigned int Zone::getWeatherId() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 18);

		return invocation.executeWithUnsignedIntReturn();
	} else
		return ((ZoneImplementation*) _impl)->getWeatherId();
}

float Zone::getWeatherCloudX() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 19);

		return invocation.executeWithFloatReturn();
	} else
		return ((ZoneImplementation*) _impl)->getWeatherCloudX();
}

float Zone::getWeatherCloudY() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 20);

		return invocation.executeWithFloatReturn();
	} else
		return ((ZoneImplementation*) _impl)->getWeatherCloudY();
}

void Zone::setSize(float minx, float miny, float maxx, float maxy) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 21);
		invocation.addFloatParameter(minx);
		invocation.addFloatParameter(miny);
		invocation.addFloatParameter(maxx);
		invocation.addFloatParameter(maxy);

		invocation.executeWithVoidReturn();
	} else
		((ZoneImplementation*) _impl)->setSize(minx, miny, maxx, maxy);
}

void Zone::insert(QuadTreeEntry* obj) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 22);
		invocation.addObjectParameter(obj);

		invocation.executeWithVoidReturn();
	} else
		((ZoneImplementation*) _impl)->insert(obj);
}

void Zone::remove(QuadTreeEntry* obj) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 23);
		invocation.addObjectParameter(obj);

		invocation.executeWithVoidReturn();
	} else
		((ZoneImplementation*) _impl)->remove(obj);
}

void Zone::removeAll() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 24);

		invocation.executeWithVoidReturn();
	} else
		((ZoneImplementation*) _impl)->removeAll();
}

bool Zone::update(QuadTreeEntry* obj) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 25);
		invocation.addObjectParameter(obj);

		return invocation.executeWithBooleanReturn();
	} else
		return ((ZoneImplementation*) _impl)->update(obj);
}

void Zone::inRange(QuadTreeEntry* obj, float range) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 26);
		invocation.addObjectParameter(obj);
		invocation.addFloatParameter(range);

		invocation.executeWithVoidReturn();
	} else
		((ZoneImplementation*) _impl)->inRange(obj, range);
}

void Zone::startManagers() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 27);

		invocation.executeWithVoidReturn();
	} else
		((ZoneImplementation*) _impl)->startManagers();
}

/*
 *	ZoneAdapter
 */

ZoneAdapter::ZoneAdapter(ZoneImplementation* obj) : ORBObjectAdapter((ORBObjectServant*) obj) {
}

Packet* ZoneAdapter::invokeMethod(uint32 methid, ORBMethodInvocation* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		lock(inv->getBooleanParameter());
		break;
	case 7:
		unlock(inv->getBooleanParameter());
		break;
	case 8:
		registerObject((SceneObject*) inv->getObjectParameter());
		break;
	case 9:
		resp->insertLong(lookupObject(inv->getUnsignedLongParameter())->_getORBObjectID());
		break;
	case 10:
		resp->insertLong(deleteObject(inv->getUnsignedLongParameter())->_getORBObjectID());
		break;
	case 11:
		resp->insertLong(deleteObject((SceneObject*) inv->getObjectParameter())->_getORBObjectID());
		break;
	case 12:
		resp->insertSignedInt(getZoneID());
		break;
	case 13:
		resp->insertLong(getZoneServer()->_getORBObjectID());
		break;
	case 14:
		resp->insertLong(getChatManager()->_getORBObjectID());
		break;
	case 15:
		resp->insertLong(getCreatureManager()->_getORBObjectID());
		break;
	case 16:
		resp->insertLong(getPlanetManager()->_getORBObjectID());
		break;
	case 17:
		resp->insertLong(getGalacticTime());
		break;
	case 18:
		resp->insertInt(getWeatherId());
		break;
	case 19:
		resp->insertFloat(getWeatherCloudX());
		break;
	case 20:
		resp->insertFloat(getWeatherCloudY());
		break;
	case 21:
		setSize(inv->getFloatParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getFloatParameter());
		break;
	case 22:
		insert((QuadTreeEntry*) inv->getObjectParameter());
		break;
	case 23:
		remove((QuadTreeEntry*) inv->getObjectParameter());
		break;
	case 24:
		removeAll();
		break;
	case 25:
		resp->insertBoolean(update((QuadTreeEntry*) inv->getObjectParameter()));
		break;
	case 26:
		inRange((QuadTreeEntry*) inv->getObjectParameter(), inv->getFloatParameter());
		break;
	case 27:
		startManagers();
		break;
	default:
		return NULL;
	}

	return resp;
}

void ZoneAdapter::lock(bool doLock) {
	return ((ZoneImplementation*) impl)->lock(doLock);
}

void ZoneAdapter::unlock(bool doLock) {
	return ((ZoneImplementation*) impl)->unlock(doLock);
}

void ZoneAdapter::registerObject(SceneObject* obj) {
	return ((ZoneImplementation*) impl)->registerObject(obj);
}

SceneObject* ZoneAdapter::lookupObject(unsigned long long oid) {
	return ((ZoneImplementation*) impl)->lookupObject(oid);
}

SceneObject* ZoneAdapter::deleteObject(unsigned long long oid) {
	return ((ZoneImplementation*) impl)->deleteObject(oid);
}

SceneObject* ZoneAdapter::deleteObject(SceneObject* obj) {
	return ((ZoneImplementation*) impl)->deleteObject(obj);
}

int ZoneAdapter::getZoneID() {
	return ((ZoneImplementation*) impl)->getZoneID();
}

ZoneServer* ZoneAdapter::getZoneServer() {
	return ((ZoneImplementation*) impl)->getZoneServer();
}

ChatManager* ZoneAdapter::getChatManager() {
	return ((ZoneImplementation*) impl)->getChatManager();
}

CreatureManager* ZoneAdapter::getCreatureManager() {
	return ((ZoneImplementation*) impl)->getCreatureManager();
}

PlanetManager* ZoneAdapter::getPlanetManager() {
	return ((ZoneImplementation*) impl)->getPlanetManager();
}

unsigned long long ZoneAdapter::getGalacticTime() {
	return ((ZoneImplementation*) impl)->getGalacticTime();
}

unsigned int ZoneAdapter::getWeatherId() {
	return ((ZoneImplementation*) impl)->getWeatherId();
}

float ZoneAdapter::getWeatherCloudX() {
	return ((ZoneImplementation*) impl)->getWeatherCloudX();
}

float ZoneAdapter::getWeatherCloudY() {
	return ((ZoneImplementation*) impl)->getWeatherCloudY();
}

void ZoneAdapter::setSize(float minx, float miny, float maxx, float maxy) {
	return ((ZoneImplementation*) impl)->setSize(minx, miny, maxx, maxy);
}

void ZoneAdapter::insert(QuadTreeEntry* obj) {
	return ((ZoneImplementation*) impl)->insert(obj);
}

void ZoneAdapter::remove(QuadTreeEntry* obj) {
	return ((ZoneImplementation*) impl)->remove(obj);
}

void ZoneAdapter::removeAll() {
	return ((ZoneImplementation*) impl)->removeAll();
}

bool ZoneAdapter::update(QuadTreeEntry* obj) {
	return ((ZoneImplementation*) impl)->update(obj);
}

void ZoneAdapter::inRange(QuadTreeEntry* obj, float range) {
	return ((ZoneImplementation*) impl)->inRange(obj, range);
}

void ZoneAdapter::startManagers() {
	return ((ZoneImplementation*) impl)->startManagers();
}

/*
 *	ZoneHelper
 */

ORBClassHelper* ZoneHelper::instance = new ZoneHelper();

ZoneHelper::ZoneHelper() {
	className = "Zone";

	ObjectRequestBroker::instance()->registerClass(className, this);
}

ORBClassHelper* ZoneHelper::getInstance() {
	if (instance == NULL)
		return instance = new ZoneHelper();
	else
		return instance;
}

ORBObject* ZoneHelper::instantiateObject() {
	return new Zone();
}

ORBObjectAdapter* ZoneHelper::createAdapter(ORBObjectServant* obj) {
	ORBObjectAdapter* adapter = new ZoneAdapter((ZoneImplementation*)obj);

	ORBObjectStub* stub = new Zone(obj);
	stub->_setORBClassName(className);
	stub->_setClassHelper(this);

	adapter->setStub(stub);

	obj->_setStub(stub);

	return adapter;
}

/*
 *	ZoneServant
 */

ZoneServant::ZoneServant() {
	_classHelper = ZoneHelper::getInstance();
}

ZoneServant::~ZoneServant() {
}
void ZoneServant::_setStub(ORBObjectStub* stub) {
	_this = (Zone*) stub;
}

ORBObjectStub* ZoneServant::_getStub() {
	return _this;
}

