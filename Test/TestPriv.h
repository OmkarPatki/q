/*
 *  TestPriv.h
 *  Test
 *
 *  Created by Omkar Patki on 10/04/15.
 *  Copyright (c) 2015 Omkar Patki. All rights reserved.
 *
 */

#include <CoreFoundation/CoreFoundation.h>

#pragma GCC visibility push(hidden)

class CTest {
	public:
		CFStringRef UUID(void);
};

#pragma GCC visibility pop
