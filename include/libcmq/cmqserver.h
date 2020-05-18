#pragma once
#include "cmqrecv_callback.h"
#include "cmqserver_listener.h"

class cmqserver
{
public:

	//	����ʵ��
	static cmqserver* new_instance();

	//	��ʼ��
	virtual int cmqserver_init() = 0;

	//	���ӷ�����
	virtual int bind(const char* _ip, int _port) = 0;


	//	���ý������ݻص�
	virtual void set_cmqrecv_callback(cmqrecv_callback* _recv_callback) = 0;

	//	���÷�����������
	virtual void set_cmqserver_listener(cmqserver_listener* _listener) = 0;

	//	�Ͽ���������

	//	��������
	virtual int subscribe(const void* _topic, size_t _topic_len) = 0;

	//	ȡ����������
	virtual int unsubscribe(const void* _topic, size_t _topic_len) = 0;

	//	��������
	virtual void publish(const void* _topic, size_t _topic_len, const void* buf, size_t _buf_len) = 0;
};