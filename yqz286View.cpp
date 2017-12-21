// yqz286View.cpp : implementation of the CYqz286View class
//

#include "stdafx.h"
#include "yqz286.h"
#include "DlgHistogram.h"

#include "yqz286Doc.h"
#include "yqz286View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CYqz286View

IMPLEMENT_DYNCREATE(CYqz286View, CScrollView)

BEGIN_MESSAGE_MAP(CYqz286View, CScrollView)
	//{{AFX_MSG_MAP(CYqz286View)
	ON_COMMAND(ID_GRAY, OnGray)
	ON_UPDATE_COMMAND_UI(ID_GRAY, OnUpdateGray)
	ON_WM_LBUTTONDOWN()
	ON_COMMAND(ID_HISTOGRAM, OnHistogram)
	ON_UPDATE_COMMAND_UI(ID_HISTOGRAM, OnUpdateHistogram)
	ON_COMMAND(ID_LINETRANS, OnLinetrans)
	ON_UPDATE_COMMAND_UI(ID_LINETRANS, OnUpdateLinetrans)
	ON_COMMAND(ID_EQUALIZE, OnEqualize)
	ON_UPDATE_COMMAND_UI(ID_EQUALIZE, OnUpdateEqualize)
	ON_COMMAND(ID_FOURIER, OnFourier)
	ON_UPDATE_COMMAND_UI(ID_FOURIER, OnUpdateFourier)
	ON_COMMAND(ID_IFOURIER, OnIfourier)
	ON_UPDATE_COMMAND_UI(ID_IFOURIER, OnUpdateIfourier)
	ON_COMMAND(ID_FFT, OnFft)
	ON_UPDATE_COMMAND_UI(ID_FFT, OnUpdateFft)
	ON_COMMAND(ID_IFFT, OnIfft)
	ON_UPDATE_COMMAND_UI(ID_IFFT, OnUpdateIfft)
	ON_COMMAND(ID_AVERAGE_FILTER, OnAverageFilter)
	ON_UPDATE_COMMAND_UI(ID_AVERAGE_FILTER, OnUpdateAverageFilter)
	ON_COMMAND(ID_MEDIAN_FILTER, OnMedianFilter)
	ON_UPDATE_COMMAND_UI(ID_MEDIAN_FILTER, OnUpdateMedianFilter)
	ON_COMMAND(ID_GRAD_SHARP, OnGradSharp)
	ON_UPDATE_COMMAND_UI(ID_GRAD_SHARP, OnUpdateGradSharp)
	ON_COMMAND(ID_RAPLAS_SHARP, OnRaplasSharp)
	ON_UPDATE_COMMAND_UI(ID_RAPLAS_SHARP, OnUpdateRaplasSharp)
	ON_COMMAND(ID_IFFourier, OnIFFourier)
	ON_UPDATE_COMMAND_UI(ID_IFFourier, OnUpdateIFFourier)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CScrollView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CYqz286View construction/destruction

CYqz286View::CYqz286View()
{
	// TODO: add construction code here

}

CYqz286View::~CYqz286View()
{
}

BOOL CYqz286View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CScrollView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CYqz286View drawing

extern LPBITMAPINFO   lpBitsInfo;
extern BITMAPINFO *lpDIB_FFT;
extern BITMAPINFO *lpDIB_IFFT;
void CYqz286View::OnDraw(CDC* pDC)
{

	CYqz286Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	if (NULL == lpBitsInfo) 
		return;
	LPVOID lpBits = (LPVOID)&lpBitsInfo ->bmiColors[lpBitsInfo ->bmiHeader.biClrUsed];

//添加调色板代码（2值图片）：
/*	RGBQUAD pal[2];
	pal[0].rgbRed      = 255;
	pal[0].rgbGreen    = 0;
	pal[0].rgbBlue     = 0;
	pal[0].rgbReserved = 0;
	pal[1].rgbRed      = 255;
	pal[1].rgbGreen    = 255;
	pal[1].rgbBlue     = 255;
	pal[1].rgbReserved = 0;
	memcpy(lpBitsInfo ->bmiColors,pal,8);
	*/


//添加调色板代码（16值图片 只添加红白两色）：
/*	RGBQUAD pal[16];
	for(int i=0;i<8;i++)
	{
	pal[i].rgbRed      = 255;
	pal[i].rgbGreen    = 0;
	pal[i].rgbBlue     = 0;
	pal[i].rgbReserved = 0;
	}
	for(int j=8;j<16;j++)
	{
	pal[j].rgbRed      = 255;
	pal[j].rgbGreen    = 255;
	pal[j].rgbBlue     = 255;
	pal[j].rgbReserved = 0;
	}
	memcpy(lpBitsInfo ->bmiColors,pal,64);
*/


	//如果要在桌面显示，把下面函数的第一个参数改为::GetDC(NULL)
	StretchDIBits (pDC->GetSafeHdc(), 
					   0, 0, lpBitsInfo->bmiHeader.biWidth, lpBitsInfo->bmiHeader.biHeight,
					   0, 0, lpBitsInfo->bmiHeader.biWidth, lpBitsInfo->bmiHeader.biHeight,
					   lpBits, lpBitsInfo,
					   DIB_RGB_COLORS, SRCCOPY);

	if (lpDIB_FFT)
		{
			lpBits = (LPVOID)&lpDIB_FFT->bmiColors[lpDIB_FFT->bmiHeader.biClrUsed];
			StretchDIBits( 
				pDC->GetSafeHdc(),
				600,0,
				lpDIB_FFT->bmiHeader.biWidth,
				lpDIB_FFT->bmiHeader.biHeight,
				0,0,
				lpDIB_FFT->bmiHeader.biWidth,
				lpDIB_FFT->bmiHeader.biHeight,
				lpBits,
				lpDIB_FFT, // bitmap data 
				DIB_RGB_COLORS,
				SRCCOPY);
		}

	if (lpDIB_IFFT)
	{
		lpBits = (LPVOID)&lpDIB_IFFT->bmiColors[lpDIB_IFFT->bmiHeader.biClrUsed];
		StretchDIBits( 
			pDC->GetSafeHdc(),
			0,600,
			lpDIB_IFFT->bmiHeader.biWidth,
			lpDIB_IFFT->bmiHeader.biHeight,
			0,0,
			lpDIB_IFFT->bmiHeader.biWidth,
			lpDIB_IFFT->bmiHeader.biHeight,
			lpBits,
			lpDIB_IFFT, // bitmap data 
			DIB_RGB_COLORS,
			SRCCOPY);
	}

}

void CYqz286View::OnInitialUpdate()
{
	CScrollView::OnInitialUpdate();

	//设置滚动条
	CSize sizeTotal;
	// TODO: calculate the total size of this view
	sizeTotal.cx = sizeTotal.cy = 1200;
	SetScrollSizes(MM_TEXT, sizeTotal);
}

/////////////////////////////////////////////////////////////////////////////
// CYqz286View printing

BOOL CYqz286View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CYqz286View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CYqz286View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CYqz286View diagnostics

#ifdef _DEBUG
void CYqz286View::AssertValid() const
{
	CScrollView::AssertValid();
}

void CYqz286View::Dump(CDumpContext& dc) const
{
	CScrollView::Dump(dc);
}

CYqz286Doc* CYqz286View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CYqz286Doc)));
	return (CYqz286Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CYqz286View message handlers

void gray();
void CYqz286View::OnGray() 
{
	// TODO: Add your command handler code here
	gray();
	Invalidate();

}

void CYqz286View::OnUpdateGray(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->Enable(lpBitsInfo != NULL && lpBitsInfo->bmiHeader.biBitCount == 24);
}

void pixel(int i, int j);
void CYqz286View::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	pixel(point.y, point.x);
	CScrollView::OnLButtonDown(nFlags, point);
}

void CYqz286View::OnHistogram() 
{
	// TODO: Add your command handler code here
	CDlgHistogram dlg;
	dlg.DoModal();
}

void CYqz286View::OnUpdateHistogram(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->Enable(lpBitsInfo != NULL && lpBitsInfo->bmiHeader.biBitCount == 8);
}

void LinerTrans(float, float);
void CYqz286View::OnLinetrans() 
{
	// TODO: Add your command handler code here
	LinerTrans(2, -100);
	Invalidate();
}

void CYqz286View::OnUpdateLinetrans(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->Enable(lpBitsInfo != NULL && lpBitsInfo->bmiHeader.biBitCount == 8);
}

void Equalize();
void CYqz286View::OnEqualize() 
{
	// TODO: Add your command handler code here
	Equalize();
	Invalidate();

}

void CYqz286View::OnUpdateEqualize(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->Enable(lpBitsInfo != NULL && lpBitsInfo->bmiHeader.biBitCount == 8);
}

void Fourier();
void CYqz286View::OnFourier() 
{
	// TODO: Add your command handler code here
	Fourier();
	Invalidate();

}

void CYqz286View::OnUpdateFourier(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->Enable(lpBitsInfo != NULL && lpBitsInfo->bmiHeader.biBitCount == 8);
}

void IFourier();
void CYqz286View::OnIfourier() 
{
	// TODO: Add your command handler code here
	IFourier();
	Invalidate();

}

void CYqz286View::OnUpdateIfourier(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->Enable(lpBitsInfo != NULL && lpBitsInfo->bmiHeader.biBitCount == 8);
}

void FFourier();
void CYqz286View::OnFft() 
{
	// TODO: Add your command handler code here
	if (lpDIB_FFT)
	free(lpDIB_FFT);

	FFourier();
	Invalidate();

}

void CYqz286View::OnUpdateFft(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->Enable(lpBitsInfo != NULL && lpBitsInfo->bmiHeader.biBitCount == 8);
}

void IFFourier();
void CYqz286View::OnIfft() 
{
	// TODO: Add your command handler code here
	if (lpDIB_IFFT)
	free(lpDIB_IFFT);

	IFFourier();
	Invalidate();

}

void CYqz286View::OnUpdateIfft(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->Enable(lpDIB_FFT != NULL);
}

void AverageFilter();
void MedianFilter();
void GradSharp();
void RaplasSharp();
void Ideal_Filter_FFT(int);

void CYqz286View::OnAverageFilter() 
{
	// TODO: Add your command handler code here
	AverageFilter();
	Invalidate();

}

void CYqz286View::OnUpdateAverageFilter(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->Enable(lpBitsInfo != NULL);
}

void CYqz286View::OnMedianFilter() 
{
	// TODO: Add your command handler code here
	MedianFilter();
	Invalidate();

}

void CYqz286View::OnUpdateMedianFilter(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->Enable(lpBitsInfo != NULL);
}

void CYqz286View::OnGradSharp() 
{
	// TODO: Add your command handler code here
	GradSharp();
	Invalidate();	

}

void CYqz286View::OnUpdateGradSharp(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->Enable(lpBitsInfo != NULL);
}

void CYqz286View::OnRaplasSharp() 
{
	// TODO: Add your command handler code here
	RaplasSharp();
	Invalidate();
}

void CYqz286View::OnUpdateRaplasSharp(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->Enable(lpBitsInfo != NULL);
}

void CYqz286View::OnIFFourier() 
{
	// TODO: Add your command handler code here
	Ideal_Filter_FFT(15);
	Invalidate();
}

void CYqz286View::OnUpdateIFFourier(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->Enable(lpBitsInfo != NULL);
}
