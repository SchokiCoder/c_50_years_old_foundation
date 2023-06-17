#ifndef _19_STRING_H
#define _19_STRING_H

#include "19_string_utils.h"

static const size_t STR_NEW_SIZE = 8;

struct String {
	size_t size;
	size_t len;
	char *str;
};

struct String String_new();

struct String String_from(const char *str);

void String_append(struct String *self, const char *str);

void String_clear(struct String *self);

#endif				/* _19_STRING_H */
