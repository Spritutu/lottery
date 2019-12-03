
// LotteryDlg.h : ͷ�ļ�
//

#pragma once
#include "DUIPlotWnd.h"

// CLotteryDlg �Ի���
class CLotteryDlg : public CDialog
{
// ����
public:
	CLotteryDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_LOTTERY_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
private:
	DuiLib::CDUIPlotWnd m_DUIManWnd;
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
};
