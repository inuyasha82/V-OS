//------------------------------------------------------------------------------
//	LocalTestObject.cpp
//
//------------------------------------------------------------------------------

// Standard Includes -----------------------------------------------------------

// System Includes -------------------------------------------------------------

// Project Includes ------------------------------------------------------------

// Local Includes --------------------------------------------------------------
#include "LocalTestObject.h"

// Local Defines ---------------------------------------------------------------

// Globals ---------------------------------------------------------------------

//------------------------------------------------------------------------------
TIOTest::TIOTest(int32 i)
	:	data(i)
{
	;
}
//------------------------------------------------------------------------------
TIOTest::TIOTest(BMessage *archive)
{
	 data = archive->FindInt32("TIOTest::data");
}
//------------------------------------------------------------------------------
status_t TIOTest::Archive(BMessage *archive, bool deep)
{
	 status_t err = archive->AddString("class", "TIOTest");
	 if (!err)
	 	err = archive->AddInt32("TIOTest::data", data);

	 return err;
}
//------------------------------------------------------------------------------
TIOTest* TIOTest::Instantiate(BMessage *archive)
{
	 if (validate_instantiation(archive, "TIOTest"))
	 	return new TIOTest(archive);

	 return NULL;
}
//------------------------------------------------------------------------------


/*
 * $Log $
 *
 * $Id  $
 *
 */



