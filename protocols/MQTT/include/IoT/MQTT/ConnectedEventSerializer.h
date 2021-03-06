//
// ConnectedEventSerializer.h
//
// Package: Generated
// Module:  TypeSerializer
//
// This file has been generated.
// Warning: All changes to this will be lost when the file is re-generated.
//
// Copyright (c) 2015, Applied Informatics Software Engineering GmbH.
// All rights reserved.
// 
// SPDX-License-Identifier: GPL-3.0-only
//


#ifndef TypeSerializer_IoT_MQTT_ConnectedEvent_INCLUDED
#define TypeSerializer_IoT_MQTT_ConnectedEvent_INCLUDED


#include "IoT/MQTT/ConnectionInfoDeserializer.h"
#include "IoT/MQTT/ConnectionInfoSerializer.h"
#include "IoT/MQTT/MQTTClient.h"
#include "Poco/RemotingNG/TypeSerializer.h"


namespace Poco {
namespace RemotingNG {


template <>
class TypeSerializer<IoT::MQTT::ConnectedEvent>
{
public:
	static void serialize(const std::string& name, const IoT::MQTT::ConnectedEvent& value, Serializer& ser)
	{
		ser.serializeStructBegin(name);
		serializeImpl(value, ser);
		ser.serializeStructEnd(name);
	}

	static void serializeImpl(const IoT::MQTT::ConnectedEvent& value, Serializer& ser)
	{
		remoting__staticInitBegin(REMOTING__NAMES);
		static const std::string REMOTING__NAMES[] = {"connectionInfo",""};
		remoting__staticInitEnd(REMOTING__NAMES);
		TypeSerializer<IoT::MQTT::ConnectionInfo >::serialize(REMOTING__NAMES[0], value.connectionInfo, ser);
	}

};


} // namespace RemotingNG
} // namespace Poco


#endif // TypeSerializer_IoT_MQTT_ConnectedEvent_INCLUDED

