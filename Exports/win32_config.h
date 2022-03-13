/** @file LineIndentor.cpp
 * Win32 configuration for NscLib.
 * 
 * 
 * 
 *
 **/
 // Copyright (C) 2022 - Leonardo Silva 
 // The License.txt file describes the conditions under which this software may be distributed.

#pragma once

#define HAVE_STDLIB_H
#define HAVE_STRING_H
#define HAVE_MALLOC_H
#define HAVE_CTYPE_H
#define HAVE_ASSERT_H
#define HAVE_STDARG_H
#define HAVE_STDLIB_H
#define HAVE_STDLIB_H
#define HAVE_STDLIB_H
#define HAVE_STDLIB_H

#define HAVE_STRICMP
#define HAVE_STRNICMP
#define HAVE_SNPRINTF
#define HAVE_STRLWR

#define strlwr _strlwr
#define stricmp _stricmp

#define _alloca _malloca


#pragma warning (disable : 4477 6328 6387 26439 26451 26495 26812 26813)

using namespace std;