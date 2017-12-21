// yqz286.h : main header file for the YQZ286 application
//

#if !defined(AFX_YQZ286_H__738F1457_E708_488F_A275_1A9F205EEBD1__INCLUDED_)
#define AFX_YQZ286_H__738F1457_E708_488F_A275_1A9F205EEBD1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CYqz286App:
// See yqz286.cpp for the implementation of this class
//

class CYqz286App : public CWinApp
{
public:
	CYqz286App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CYqz286App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CYqz286App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_YQZ286_H__738F1457_E708_488F_A275_1A9F205EEBD1__INCLUDED_)
