#pragma once

class cmqserver_listener
{
public:
	
	//	新客户端上线
	virtual void notify_clent_online() = 0;

	//	客户端下线
	virtual void notify_clent_offline() = 0;

	//	
};