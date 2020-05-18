#pragma once
#include "cmqrecv_callback.h"

struct init_param
{
	char identity_[64];		//	ͬ���������豣֤Ψһ
};

class cmqclient
{
public:
	static cmqclient* new_instance();

	//	���ӷ�����
	virtual int connect(const char* _ip, int _port) = 0;

	//	�Ͽ�����
	virtual int disconnect() = 0;

	//	���ý������ݻص�
	virtual void set_cmqrecv_callback(cmqrecv_callback* _recv_callback) = 0;

	//	��������
	virtual int subscribe(const void* _topic, size_t _topic_len) = 0;

	//	ȡ����������
	virtual int unsubscribe(const void* _topic, size_t _topic_len) = 0;

	//	��������
	virtual void publish(const void* _topic, size_t _topic_len, const void* buf, size_t _buf_len) = 0;

};