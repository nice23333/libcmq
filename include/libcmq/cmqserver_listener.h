#pragma once

class cmqserver_listener
{
public:
	
	//	�¿ͻ�������
	virtual void notify_clent_online() = 0;

	//	�ͻ�������
	virtual void notify_clent_offline() = 0;

	//	
};