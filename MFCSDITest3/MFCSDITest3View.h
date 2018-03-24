
// MFCSDITest3View.h : interface of the CMFCSDITest3View class
//

#pragma once


class CMFCSDITest3View : public CView
{
protected: // create from serialization only
	CMFCSDITest3View();
	DECLARE_DYNCREATE(CMFCSDITest3View)

// Attributes
public:
	CMFCSDITest3Doc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CMFCSDITest3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCSDITest3View.cpp
inline CMFCSDITest3Doc* CMFCSDITest3View::GetDocument() const
   { return reinterpret_cast<CMFCSDITest3Doc*>(m_pDocument); }
#endif

