
// MFCSDITest3View.cpp : implementation of the CMFCSDITest3View class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "MFCSDITest3.h"
#endif

#include "MFCSDITest3Doc.h"
#include "MFCSDITest3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCSDITest3View

IMPLEMENT_DYNCREATE(CMFCSDITest3View, CView)

BEGIN_MESSAGE_MAP(CMFCSDITest3View, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMFCSDITest3View construction/destruction

CMFCSDITest3View::CMFCSDITest3View()
{
	// TODO: add construction code here

}

CMFCSDITest3View::~CMFCSDITest3View()
{
}

BOOL CMFCSDITest3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CMFCSDITest3View drawing

void CMFCSDITest3View::OnDraw(CDC* /*pDC*/)
{
	CMFCSDITest3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CMFCSDITest3View printing

BOOL CMFCSDITest3View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMFCSDITest3View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMFCSDITest3View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CMFCSDITest3View diagnostics

#ifdef _DEBUG
void CMFCSDITest3View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCSDITest3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCSDITest3Doc* CMFCSDITest3View::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCSDITest3Doc)));
	return (CMFCSDITest3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCSDITest3View message handlers
