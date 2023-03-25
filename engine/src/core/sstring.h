#pragma once

#include "defines.h"

// Returns the length of the given string.
SAPI u64 string_length(const char* str);

SAPI char* string_duplicate(const char* str);

// Case-sensitive string comparison. True if the same, otherwise false.
SAPI b8 strings_equal(const char* str0, const char* str1);