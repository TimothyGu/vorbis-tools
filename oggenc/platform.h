#ifndef __PLATFORM_H
#define __PLATFORM_H

#include <stdio.h>

#ifdef __sun
#include <alloca.h>
#endif

#ifdef __OS2__
#define INCL_DOS
#define INCL_NOPMAPI
#include <os2.h>
#endif

#if defined(_WIN32) || defined(__OS2__)
#include <malloc.h>

void setbinmode(FILE *);

#define DEFAULT_NAMEFMT_REMOVE "/\\:"
#define DEFAULT_NAMEFMT_REPLACE NULL

#else /* Unix, mostly */

#define setbinmode(x) {}
#define DEFAULT_NAMEFMT_REMOVE "/"
#define DEFAULT_NAMEFMT_REPLACE NULL

#endif

#endif /* __PLATFORM_H */

