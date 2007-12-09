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
 *	server/zone/objects/tangible/instrument/Instrument.cpp generated by Engine3 IDL compiler 0.51
 */

#include "../TangibleObject.h"

#include "../../player/Player.h"

#include "Instrument.h"

#include "InstrumentImplementation.h"

/*
 *	InstrumentStub
 */

Instrument::Instrument() : TangibleObject(NULL) {
}

Instrument::Instrument(ORBObjectServant* obj) : TangibleObject(obj) {
}

Instrument::Instrument(Instrument& ref) : TangibleObject(ref) {
}

Instrument::~Instrument() {
}

Instrument* Instrument::clone() {
	return new Instrument(*this);
}


int Instrument::useObject(Player* player) {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 6);
		invocation.addObjectParameter(player);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((InstrumentImplementation*) _impl)->useObject(player);
}

int Instrument::getInstrumentType() {
	 if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 7);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((InstrumentImplementation*) _impl)->getInstrumentType();
}

/*
 *	InstrumentAdapter
 */

InstrumentAdapter::InstrumentAdapter(InstrumentImplementation* obj) : TangibleObjectAdapter(obj) {
}

Packet* InstrumentAdapter::invokeMethod(uint32 methid, ORBMethodInvocation* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		resp->insertSignedInt(useObject((Player*) inv->getObjectParameter()));
		break;
	case 7:
		resp->insertSignedInt(getInstrumentType());
		break;
	default:
		return NULL;
	}

	return resp;
}

int InstrumentAdapter::useObject(Player* player) {
	return ((InstrumentImplementation*) impl)->useObject(player);
}

int InstrumentAdapter::getInstrumentType() {
	return ((InstrumentImplementation*) impl)->getInstrumentType();
}

/*
 *	InstrumentHelper
 */

ORBClassHelper* InstrumentHelper::instance = new InstrumentHelper();

InstrumentHelper::InstrumentHelper() {
	className = "Instrument";

	ObjectRequestBroker::instance()->registerClass(className, this);
}

ORBClassHelper* InstrumentHelper::getInstance() {
	if (instance == NULL)
		return instance = new InstrumentHelper();
	else
		return instance;
}

ORBObject* InstrumentHelper::instantiateObject() {
	return new Instrument();
}

ORBObjectAdapter* InstrumentHelper::createAdapter(ORBObjectServant* obj) {
	ORBObjectAdapter* adapter = new InstrumentAdapter((InstrumentImplementation*)obj);

	ORBObjectStub* stub = new Instrument(obj);
	stub->_setORBClassName(className);
	stub->_setClassHelper(this);

	adapter->setStub(stub);

	obj->_setStub(stub);

	return adapter;
}

/*
 *	InstrumentServant
 */

InstrumentServant::InstrumentServant(unsigned long long oid, int tp) : TangibleObjectImplementation(oid, tp) {
	_classHelper = InstrumentHelper::getInstance();
}

InstrumentServant::~InstrumentServant() {
}
void InstrumentServant::_setStub(ORBObjectStub* stub) {
	_this = (Instrument*) stub;
	TangibleObjectServant::_setStub(stub);
}

ORBObjectStub* InstrumentServant::_getStub() {
	return _this;
}

