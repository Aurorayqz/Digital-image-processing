#if !defined(AFX_DLGHISTOGRAM_H__0B584F71_2F26_4249_91B6_88E139A0DB6B__INCLUDED_)
#define AFX_DLGHISTOGRAM_H__0B584F71_2F26_4249_91B6_88E139A0DB6B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DlgHistogram.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDlgHistogram dialog

class CDlgHistogram : public CDialog
{
// Construction
public:
	CDlgHistogram(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDlgHistogram)
	enum { IDD = IDD_HISTOGRAM };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDlgHistogram)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDlgHistogram)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DLGHISTOGRAM_H__0B584F71_2F26_4249_91B6_88E139A0DB6B__INCLUDED_)
