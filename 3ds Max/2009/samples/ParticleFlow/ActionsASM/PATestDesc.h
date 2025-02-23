/**********************************************************************
 *<
	FILE:			PATestDesc.h

	DESCRIPTION:	Test Class Descriptor (declaration)
											 
	CREATED BY:		Oleg Bayborodin

	HISTORY:		created 12-03-01

 *>	Copyright (c) 2001, All Rights Reserved.
 **********************************************************************/

#ifndef  _PATESTDESC_H_
#define  _PATESTDESC_H_

#include "max.h"
#include "iparamb2.h"

namespace PartASM {

//	Descriptor declarations
class PATestDesc: public ClassDesc2 {
	public:
	~PATestDesc();
	int 			IsPublic();
	void *			Create(BOOL loading = FALSE);
	const TCHAR *	ClassName();
	SClass_ID		SuperClassID();
	Class_ID		ClassID();
	Class_ID		SubClassID();
	const TCHAR* 	Category();

	const TCHAR*	InternalName();
	HINSTANCE		HInstance();

	INT_PTR Execute(int cmd, ULONG_PTR arg1, ULONG_PTR arg2, ULONG_PTR arg3);

	static HBITMAP m_depotIcon;
	static HBITMAP m_depotMask;
};

} // end of namespace PartASM

#endif // _PATESTDESC_H_