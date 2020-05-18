#include "cmqserver_impl.h"

int do_once = 0;
static cmqserver* new_instance()
{
	if (do_once == 0)
	{
		WSADATA data;
		int rc = WSAStartup(MAKEWORD(2, 2), &data);
		assert(rc == 0);
		do_once++;
	}

}

cmqserver_impl::cmqserver_impl()
{
	
}


cmqserver_impl::~cmqserver_impl()
{
}

int cmqserver_impl::cmqserver_init()
{
	s_ = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (s_ == SOCKET_ERROR)
		return -1;
	return 0;
}

int cmqserver_impl::bind(const char* _ip, int _port)
{
	return 0;
}

void cmqserver_impl::set_cmqrecv_callback(cmqrecv_callback* _recv_callback)
{
	throw std::logic_error("The method or operation is not implemented.");
}

void cmqserver_impl::set_cmqserver_listener(cmqserver_listener* _listener)
{
	throw std::logic_error("The method or operation is not implemented.");
}

int cmqserver_impl::subscribe(const void* _topic, size_t _topic_len)
{
	throw std::logic_error("The method or operation is not implemented.");
}

int cmqserver_impl::unsubscribe(const void* _topic, size_t _topic_len)
{
	throw std::logic_error("The method or operation is not implemented.");
}

void cmqserver_impl::publish(const void* _topic, size_t _topic_len, const void* buf, size_t _buf_len)
{
	throw std::logic_error("The method or operation is not implemented.");
}
