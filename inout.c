#include <stdio.h>
#include <stdlib.h>

#include "common.h"

void data_input( int count, struct student *s) {
	if ( count < 1) return;
	if ( count > MAX_STUDENTS) return;
	for( int i = 0; i < count; i++) {
		printf("Please enter data for student %d:\n", i+1);
		scanf("%s %s %d %d", (s + i)->name, (s + i)->lastname,
					&(s + i)->group_id, &(s + i)->course);
	}
	return;
}

void data_output( int count, struct student *s) {
	if(count < 1) goto exit;
	if(count > MAX_STUDENTS) goto exit;
	printf("User entered data: \n");
	for( int i = 0; i < count; i++) {
		printf("%s\t%s\t%d\t%d\n", (s + i)->name, (s + i)->lastname, (s + i)->group_id, (s + i)->course);
	}

exit: 
		return;
}

