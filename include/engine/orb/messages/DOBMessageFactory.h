/*
Copyright (C) 2007 <SWGEmu>. All rights reserved.
Distribution of this file for usage outside of Core3 is prohibited.
*/

#ifndef DOBMESSAGEFACTORY_H_
#define DOBMESSAGEFACTORY_H_

#include "system/lang.h"

#include "DOBMessage.h"

#include "engine/core/Task.h"

namespace engine {
  namespace ORB {

	class DOBMessageFactory {
	public:
		DOBMessageFactory();

		void process(DOBServiceClient* client, Packet* packet);

	private:
		DOBMessage* create(uint32 messageType, Packet* packet);

		class MessageProcessorTask : public Task {

		};
	};

  } // namespace ORB
} // namespace engine

using namespace engine::ORB;

#endif /*DOBMESSAGEFACTORY_H_*/
