// yqz286Doc.h : interface of the CYqz286Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_YQZ286DOC_H__BDED6D73_61E0_46DC_8A51_9604B09FCEC7__INCLUDED_)
#define AFX_YQZ286DOC_H__BDED6D73_61E0_46DC_8A51_9604B09FCEC7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CYqz286Doc : public CDocument
{
protected: // create from serialization only
	CYqz286Doc();
	DECLARE_DYNCREATE(CYqz286Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CYqz286Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	virtual BOOL OnOpenDocument(LPCTSTR lpszPathName);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CYqz286Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CYqz286Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_YQZ286DOC_H__BDED6D73_61E0_46DC_8A51_9604B09FCEC7__INCLUDED_)
