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
 *	server/zone/objects/creature/shuttle/ShuttleCreature.cpp generated by Engine3 IDL compiler 0.51
 */

#include "../Creature.h"

#include "../../player/Player.h"

#include "ShuttleCreature.h"

#include "ShuttleCreatureImplementation.h"

/*
 *	ShuttleCreatureStub
 */

ShuttleCreature::ShuttleCreature() : Creature(NULL) {
}

ShuttleCreature::ShuttleCreature(ORBObjectServant* obj) : Creature(obj) {
}

ShuttleCreature::ShuttleCreature(ShuttleCreature& ref) : Creature(ref) {
}

ShuttleCreature::~ShuttleCreature() {
}

ShuttleCreature* ShuttleCreature::clone() {
	return new ShuttleCreature(*this);
}


void ShuttleCreature::doTakeOff() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 6);

		invocation.executeWithVoidReturn();
	} else
		((ShuttleCreatureImplementation*) _impl)->doTakeOff();
}

void ShuttleCreature::doLanding() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 7);

		invocation.executeWithVoidReturn();
	} else
		((ShuttleCreatureImplementation*) _impl)->doLanding();
}

void ShuttleCreature::sendPlayerTo(Player* player, const string& shuttle) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 8);
		invocation.addObjectParameter(player);
		invocation.addAsciiParameter(shuttle);

		invocation.executeWithVoidReturn();
	} else
		((ShuttleCreatureImplementation*) _impl)->sendPlayerTo(player, shuttle);
}

string& ShuttleCreature::getCity() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 9);

		invocation.executeWithAsciiReturn(_return_getCity);
		return _return_getCity;
	} else
		return ((ShuttleCreatureImplementation*) _impl)->getCity();
}

string& ShuttleCreature::getPlanet() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 10);

		invocation.executeWithAsciiReturn(_return_getPlanet);
		return _return_getPlanet;
	} else
		return ((ShuttleCreatureImplementation*) _impl)->getPlanet();
}

Coordinate* ShuttleCreature::getArrivalPoint() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 11);

		return (Coordinate*) invocation.executeWithObjectReturn();
	} else
		return ((ShuttleCreatureImplementation*) _impl)->getArrivalPoint();
}

int ShuttleCreature::getArrivalTime() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 12);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((ShuttleCreatureImplementation*) _impl)->getArrivalTime();
}

/*
 *	ShuttleCreatureAdapter
 */

ShuttleCreatureAdapter::ShuttleCreatureAdapter(ShuttleCreatureImplementation* obj) : CreatureAdapter(obj) {
}

Packet* ShuttleCreatureAdapter::invokeMethod(uint32 methid, ORBMethodInvocation* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		doTakeOff();
		break;
	case 7:
		doLanding();
		break;
	case 8:
		sendPlayerTo((Player*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_sendPlayerTo__Player_string_));
		break;
	case 9:
		resp->insertAscii(getCity());
		break;
	case 10:
		resp->insertAscii(getPlanet());
		break;
	case 11:
		resp->insertLong(getArrivalPoint()->_getORBObjectID());
		break;
	case 12:
		resp->insertSignedInt(getArrivalTime());
		break;
	default:
		return NULL;
	}

	return resp;
}

void ShuttleCreatureAdapter::doTakeOff() {
	return ((ShuttleCreatureImplementation*) impl)->doTakeOff();
}

void ShuttleCreatureAdapter::doLanding() {
	return ((ShuttleCreatureImplementation*) impl)->doLanding();
}

void ShuttleCreatureAdapter::sendPlayerTo(Player* player, const string& shuttle) {
	return ((ShuttleCreatureImplementation*) impl)->sendPlayerTo(player, shuttle);
}

string& ShuttleCreatureAdapter::getCity() {
	return ((ShuttleCreatureImplementation*) impl)->getCity();
}

string& ShuttleCreatureAdapter::getPlanet() {
	return ((ShuttleCreatureImplementation*) impl)->getPlanet();
}

Coordinate* ShuttleCreatureAdapter::getArrivalPoint() {
	return ((ShuttleCreatureImplementation*) impl)->getArrivalPoint();
}

int ShuttleCreatureAdapter::getArrivalTime() {
	return ((ShuttleCreatureImplementation*) impl)->getArrivalTime();
}

/*
 *	ShuttleCreatureHelper
 */

ORBClassHelper* ShuttleCreatureHelper::instance = new ShuttleCreatureHelper();

ShuttleCreatureHelper::ShuttleCreatureHelper() {
	className = "ShuttleCreature";

	ObjectRequestBroker::instance()->registerClass(className, this);
}

ORBClassHelper* ShuttleCreatureHelper::getInstance() {
	if (instance == NULL)
		return instance = new ShuttleCreatureHelper();
	else
		return instance;
}

ORBObject* ShuttleCreatureHelper::instantiateObject() {
	return new ShuttleCreature();
}

ORBObjectAdapter* ShuttleCreatureHelper::createAdapter(ORBObjectServant* obj) {
	ORBObjectAdapter* adapter = new ShuttleCreatureAdapter((ShuttleCreatureImplementation*)obj);

	ORBObjectStub* stub = new ShuttleCreature(obj);
	stub->_setORBClassName(className);
	stub->_setClassHelper(this);

	adapter->setStub(stub);

	obj->_setStub(stub);

	return adapter;
}

/*
 *	ShuttleCreatureServant
 */

ShuttleCreatureServant::ShuttleCreatureServant(unsigned long long oid) : CreatureImplementation(oid) {
	_classHelper = ShuttleCreatureHelper::getInstance();
}

ShuttleCreatureServant::~ShuttleCreatureServant() {
}
void ShuttleCreatureServant::_setStub(ORBObjectStub* stub) {
	_this = (ShuttleCreature*) stub;
	CreatureServant::_setStub(stub);
}

ORBObjectStub* ShuttleCreatureServant::_getStub() {
	return _this;
}

