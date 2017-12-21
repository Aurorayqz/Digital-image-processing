; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CYqz286View
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "yqz286.h"
LastPage=0

ClassCount=6
Class1=CYqz286App
Class2=CYqz286Doc
Class3=CYqz286View
Class4=CMainFrame

ResourceCount=3
Resource1=IDD_ABOUTBOX
Class5=CAboutDlg
Resource2=IDR_MAINFRAME
Class6=CDlgHistogram
Resource3=IDD_HISTOGRAM

[CLS:CYqz286App]
Type=0
HeaderFile=yqz286.h
ImplementationFile=yqz286.cpp
Filter=N

[CLS:CYqz286Doc]
Type=0
HeaderFile=yqz286Doc.h
ImplementationFile=yqz286Doc.cpp
Filter=N
LastObject=CYqz286Doc
BaseClass=CDocument
VirtualFilter=DC

[CLS:CYqz286View]
Type=0
HeaderFile=yqz286View.h
ImplementationFile=yqz286View.cpp
Filter=C
LastObject=ID_IFFourier
BaseClass=CScrollView
VirtualFilter=VWC


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
LastObject=ID_GRAY
BaseClass=CFrameWnd
VirtualFilter=fWC




[CLS:CAboutDlg]
Type=0
HeaderFile=yqz286.cpp
ImplementationFile=yqz286.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_PRINT
Command6=ID_FILE_PRINT_PREVIEW
Command7=ID_FILE_PRINT_SETUP
Command8=ID_FILE_MRU_FILE1
Command9=ID_APP_EXIT
Command10=ID_EDIT_UNDO
Command11=ID_EDIT_CUT
Command12=ID_EDIT_COPY
Command13=ID_EDIT_PASTE
Command14=ID_VIEW_TOOLBAR
Command15=ID_VIEW_STATUS_BAR
Command16=ID_APP_ABOUT
Command17=ID_GRAY
CommandCount=17

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
CommandCount=14

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
Command9=ID_HISTOGRAM
Command10=ID_LINETRANS
Command11=ID_EQUALIZE
Command12=ID_FOURIER
Command13=ID_IFOURIER
Command14=ID_FFT
Command15=ID_IFFT
Command16=ID_AVERAGE_FILTER
Command17=ID_MEDIAN_FILTER
Command18=ID_GRAD_SHARP
Command19=ID_RAPLAS_SHARP
Command20=ID_IFFourier
CommandCount=20

[CLS:CDlgHistogram]
Type=0
HeaderFile=DlgHistogram.h
ImplementationFile=DlgHistogram.cpp
BaseClass=CDialog
Filter=D
LastObject=CDlgHistogram
VirtualFilter=dWC

[DLG:IDD_HISTOGRAM]
Type=1
Class=CDlgHistogram
ControlCount=2
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816

