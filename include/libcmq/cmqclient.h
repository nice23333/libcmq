#pragma once
#include "cmqrecv_callback.h"

struct init_param
{
	char identity_[64];		//	同服务器内需保证唯一
};

class cmqclient
{
public:
	static cmqclient* new_instance();

	//	连接服务器
	virtual int connect(const char* _ip, int _port) = 0;

	//	断开连接
	virtual int disconnect() = 0;

	//	设置接收数据回调
	virtual void set_cmqrecv_callback(cmqrecv_callback* _recv_callback) = 0;

	//	订阅数据
	virtual int subscribe(const void* _topic, size_t _topic_len) = 0;

	//	取消订阅数据
	virtual int unsubscribe(const void* _topic, size_t _topic_len) = 0;

	//	发布数据
	virtual void publish(const void* _topic, size_t _topic_len, const void* buf, size_t _buf_len) = 0;

};