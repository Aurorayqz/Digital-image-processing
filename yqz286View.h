// yqz286View.h : interface of the CYqz286View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_YQZ286VIEW_H__F11D99DD_99A0_4118_8F44_5E024321020F__INCLUDED_)
#define AFX_YQZ286VIEW_H__F11D99DD_99A0_4118_8F44_5E024321020F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CYqz286View : public CScrollView
{
protected: // create from serialization only
	CYqz286View();
	DECLARE_DYNCREATE(CYqz286View)

// Attributes
public:
	CYqz286Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CYqz286View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CYqz286View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CYqz286View)
	afx_msg void OnGray();
	afx_msg void OnUpdateGray(CCmdUI* pCmdUI);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnHistogram();
	afx_msg void OnUpdateHistogram(CCmdUI* pCmdUI);
	afx_msg void OnLinetrans();
	afx_msg void OnUpdateLinetrans(CCmdUI* pCmdUI);
	afx_msg void OnEqualize();
	afx_msg void OnUpdateEqualize(CCmdUI* pCmdUI);
	afx_msg void OnFourier();
	afx_msg void OnUpdateFourier(CCmdUI* pCmdUI);
	afx_msg void OnIfourier();
	afx_msg void OnUpdateIfourier(CCmdUI* pCmdUI);
	afx_msg void OnFft();
	afx_msg void OnUpdateFft(CCmdUI* pCmdUI);
	afx_msg void OnIfft();
	afx_msg void OnUpdateIfft(CCmdUI* pCmdUI);
	afx_msg void OnAverageFilter();
	afx_msg void OnUpdateAverageFilter(CCmdUI* pCmdUI);
	afx_msg void OnMedianFilter();
	afx_msg void OnUpdateMedianFilter(CCmdUI* pCmdUI);
	afx_msg void OnGradSharp();
	afx_msg void OnUpdateGradSharp(CCmdUI* pCmdUI);
	afx_msg void OnRaplasSharp();
	afx_msg void OnUpdateRaplasSharp(CCmdUI* pCmdUI);
	afx_msg void OnIFFourier();
	afx_msg void OnUpdateIFFourier(CCmdUI* pCmdUI);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in yqz286View.cpp
inline CYqz286Doc* CYqz286View::GetDocument()
   { return (CYqz286Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_YQZ286VIEW_H__F11D99DD_99A0_4118_8F44_5E024321020F__INCLUDED_)
