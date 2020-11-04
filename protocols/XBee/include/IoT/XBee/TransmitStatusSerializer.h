//
// TransmitStatusSerializer.h
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


#ifndef TypeSerializer_IoT_XBee_TransmitStatus_INCLUDED
#define TypeSerializer_IoT_XBee_TransmitStatus_INCLUDED


#include "IoT/XBee/XBeeNode.h"
#include "Poco/RemotingNG/TypeSerializer.h"


namespace Poco {
namespace RemotingNG {


template <>
class TypeSerializer<IoT::XBee::TransmitStatus>
{
public:
	static void serialize(const std::string& name, const IoT::XBee::TransmitStatus& value, Serializer& ser)
	{
		using namespace std::string_literals;
		
		ser.serializeStructBegin(name);
		serializeImpl(value, ser);
		ser.serializeStructEnd(name);
	}

	static void serializeImpl(const IoT::XBee::TransmitStatus& value, Serializer& ser)
	{
		using namespace std::string_literals;
		
		static const std::string REMOTING__NAMES[] = {"frameID"s,"status"s,""s};
		TypeSerializer<Poco::UInt8 >::serialize(REMOTING__NAMES[0], value.frameID, ser);
		TypeSerializer<Poco::UInt8 >::serialize(REMOTING__NAMES[1], value.status, ser);
	}

};


} // namespace RemotingNG
} // namespace Poco


#endif // TypeSerializer_IoT_XBee_TransmitStatus_INCLUDED

