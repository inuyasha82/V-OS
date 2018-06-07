/*
 * Copyright 2006, Marcus Overhagen, <marcus@overhagen.de>
 * Distributed under the terms of the MIT License.
 */


#include <OS.h>
#include <stdio.h>
#include <string.h>


/*
 *
 */

port_id id;
char data[100];

int32
test_thread(void *)
{
	status_t s;

	printf("write port...\n");
	s = write_port(id, 0x5678, data, 20);
	printf("write port result 0x%08lx (%s)\n", s, strerror(s));

	return 0;
}


int
main()
{
	status_t s;
	
	id = create_port(1, "test port");
	printf("created port %ld\n", id);
	
	s = write_port(id, 0x1234, data, 10);
	printf("write port result 0x%08lx (%s)\n", s, strerror(s));

	printf("write should block for 5 seconds now, as port is full, until port is closed\n");
	
	thread_id thread = spawn_thread(test_thread, "test thread", B_NORMAL_PRIORITY, NULL);
	resume_thread(thread);
	snooze(5000000);

	printf("close port...\n");
	s = close_port(id); 
	printf("close port result 0x%08lx (%s)\n", s, strerror(s));

	printf("waiting for thread to terminate\n");
	wait_for_thread(thread, &s);
	
	return 0;
}
