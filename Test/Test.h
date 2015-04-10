/*
 *  Test.h
 *  Test
 *
 *  Created by Omkar Patki on 10/04/15.
 *  Copyright (c) 2015 Omkar Patki. All rights reserved.
 *
 */

extern "C" {
#include <CoreFoundation/CoreFoundation.h>

#pragma GCC visibility push(default)

/* External interface to the Test, C-based */

CFStringRef TestUUID(void);

#pragma GCC visibility pop
}
