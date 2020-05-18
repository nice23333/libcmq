#pragma once
#include "cmqrecv_callback.h"
#include "cmqserver_listener.h"

class cmqserver
{
public:

	//	创建实例
	static cmqserver* new_instance();

	//	初始化
	virtual int cmqserver_init() = 0;

	//	连接服务器
	virtual int bind(const char* _ip, int _port) = 0;


	//	设置接收数据回调
	virtual void set_cmqrecv_callback(cmqrecv_callback* _recv_callback) = 0;

	//	设置服务器监视器
	virtual void set_cmqserver_listener(cmqserver_listener* _listener) = 0;

	//	断开所有连接

	//	订阅数据
	virtual int subscribe(const void* _topic, size_t _topic_len) = 0;

	//	取消订阅数据
	virtual int unsubscribe(const void* _topic, size_t _topic_len) = 0;

	//	发布数据
	virtual void publish(const void* _topic, size_t _topic_len, const void* buf, size_t _buf_len) = 0;
};