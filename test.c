#include "buffer.h"
#include <assert.h>

int main()
{
    buffer_t * p_buffer = buffer_create(0);
    assert(NULL != p_buffer);
    assert(0 == p_buffer->offset);
    assert(0 == buffer_append(p_buffer, "Hello", 5));
    assert(5 == p_buffer->offset);
    assert(5 == p_buffer->buffer_len);
    assert(0 == buffer_destroy(&p_buffer));


    buffer_t * p_buffer2 = buffer_create(10);
    assert(NULL != p_buffer2);
    assert(0 == p_buffer2->offset);
    assert(0 == buffer_append(p_buffer2, "Hello world this is a test", 25));
    assert(25 == p_buffer2->offset);
    assert(25 == p_buffer2->buffer_len);
    assert(0 == buffer_destroy(&p_buffer2));
    return 0;
}