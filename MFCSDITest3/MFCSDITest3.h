
// MFCSDITest3.h : main header file for the MFCSDITest3 application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CMFCSDITest3App:
// See MFCSDITest3.cpp for the implementation of this class
//

class CMFCSDITest3App : public CWinApp
{
public:
	CMFCSDITest3App();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCSDITest3App theApp;
