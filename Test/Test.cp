/*
 *  Test.cp
 *  Test
 *
 *  Created by Omkar Patki on 10/04/15.
 *  Copyright (c) 2015 Omkar Patki. All rights reserved.
 *
 */

#include "Test.h"
#include "TestPriv.h"

CFStringRef TestUUID(void)
{
	CTest* theObj = new CTest;
	return theObj->UUID();
}

CFStringRef CTest::UUID()
{
	return CFSTR("0001020304050607");
}
