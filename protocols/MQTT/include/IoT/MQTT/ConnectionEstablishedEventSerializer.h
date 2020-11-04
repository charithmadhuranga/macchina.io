//
// ConnectionEstablishedEventSerializer.h
//
// Package: Generated
// Module:  TypeSerializer
//
// This file has been generated.
// Warning: All changes to this will be lost when the file is re-generated.
//
// Copyright (c) 2015-2020, Applied Informatics Software Engineering GmbH.
// All rights reserved.
// 
// SPDX-License-Identifier: GPL-3.0-only
//


#ifndef TypeSerializer_IoT_MQTT_ConnectionEstablishedEvent_INCLUDED
#define TypeSerializer_IoT_MQTT_ConnectionEstablishedEvent_INCLUDED


#include "IoT/MQTT/ConnectionInfoDeserializer.h"
#include "IoT/MQTT/ConnectionInfoSerializer.h"
#include "IoT/MQTT/MQTTClient.h"
#include "Poco/RemotingNG/TypeSerializer.h"


namespace Poco {
namespace RemotingNG {


template <>
class TypeSerializer<IoT::MQTT::ConnectionEstablishedEvent>
{
public:
	static void serialize(const std::string& name, const IoT::MQTT::ConnectionEstablishedEvent& value, Serializer& ser)
	{
		using namespace std::string_literals;
		
		ser.serializeStructBegin(name);
		serializeImpl(value, ser);
		ser.serializeStructEnd(name);
	}

	static void serializeImpl(const IoT::MQTT::ConnectionEstablishedEvent& value, Serializer& ser)
	{
		using namespace std::string_literals;
		
		static const std::string REMOTING__NAMES[] = {"connectionInfo"s,""s};
		TypeSerializer<IoT::MQTT::ConnectionInfo >::serialize(REMOTING__NAMES[0], value.connectionInfo, ser);
	}

};


} // namespace RemotingNG
} // namespace Poco


#endif // TypeSerializer_IoT_MQTT_ConnectionEstablishedEvent_INCLUDED

