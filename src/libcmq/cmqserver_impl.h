#pragma once
#include "cmqserver.h"
#include "cmq_global.h"

class cmqserver_impl : public cmqserver
{
public:
	cmqserver_impl();
	~cmqserver_impl();

	virtual int cmqserver_init()override;

	virtual int bind(const char* _ip, int _port) override;


	virtual void set_cmqrecv_callback(cmqrecv_callback* _recv_callback) override;


	virtual void set_cmqserver_listener(cmqserver_listener* _listener) override;


	virtual int subscribe(const void* _topic, size_t _topic_len) override;


	virtual int unsubscribe(const void* _topic, size_t _topic_len) override;


	virtual void publish(const void* _topic, size_t _topic_len, const void* buf, size_t _buf_len) override;

private:
	SOCKET  s_;


};

