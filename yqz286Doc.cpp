// yqz286Doc.cpp : implementation of the CYqz286Doc class
//

#include "stdafx.h"
#include "yqz286.h"

#include "yqz286Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CYqz286Doc

IMPLEMENT_DYNCREATE(CYqz286Doc, CDocument)

BEGIN_MESSAGE_MAP(CYqz286Doc, CDocument)
	//{{AFX_MSG_MAP(CYqz286Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CYqz286Doc construction/destruction

CYqz286Doc::CYqz286Doc()
{
	// TODO: add one-time construction code here

}

CYqz286Doc::~CYqz286Doc()
{
}

BOOL CYqz286Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CYqz286Doc serialization

void CYqz286Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CYqz286Doc diagnostics

#ifdef _DEBUG
void CYqz286Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CYqz286Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CYqz286Doc commands

BOOL LoadBmpFile (char*);
BOOL CYqz286Doc::OnOpenDocument(LPCTSTR lpszPathName) 
{
	if (!CDocument::OnOpenDocument(lpszPathName))
		return FALSE;
	
	// TODO: Add your specialized creation code here
	LoadBmpFile((char*) lpszPathName);
	return TRUE;
}
