#pragma once

class cmqrecv_callback
{
public:
	virtual void recv_data(const void* _topic, size_t _topic_len, const void* _buf, size_t _buf_len) = 0;
};