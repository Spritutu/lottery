#pragma once

/*
 ���ܣ���������ҳ�棬������ҳ��ľ�����ܶ�����������ʱ����ʾ���鿴���ࡿ��ť��������鿴���ࡿ�����ô��ڡ�
 ��Ӧxml��OLVideoPlotWnd.xml
 �ô���չ��������Ϣ��������ȫ��ʾʱ��չʾ��������
*/

#define  TIMERID_RAND 1
#define  TIMER_INTERVAL 20

#define  TIMER_TEST 2
#define  TIMER_INTERVAL_TEST  1000
namespace DuiLib
{

	class CDUIPlotWnd: public CWindowWnd, public INotifyUI
	{
	public:
		CDUIPlotWnd(void);
		~CDUIPlotWnd(void);

		LPCTSTR GetWindowClassName() const ;
		void Notify(TNotifyUI &msg);
		LRESULT OnCreate(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
		LRESULT HandleMessage(UINT uMsg, WPARAM wParam, LPARAM lParam);
		LRESULT OnNcHitTest(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);

		void SetPlotText(CString str); //����������Ϣ

		LRESULT OnClose(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
		LRESULT OnDestory(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
		LRESULT OnTimer(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
		LRESULT OnKeyDowm(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
		void Init();
		BOOL GetSysAppFilePath(HMODULE hModule, CString &strAppWorkRoot, CString &strAppFilePath, CString &strAppFileName, CString &strAppName, CString &strAppExt);
		void Start(int type=0);
		void Stop(int type=0);
		void ReLottery();
		int IsOK();
		int GetRandomNum();
		
		void CalcResult();
	private:
		CPaintManagerUI m_PaintMgr;
		vector<CString>     m_OrgV;
		vector<CString>     m_OrgF;
		vector<CString>     m_OrgB;
		map<CString,int>		m_Old;
		UINT            m_nTimerRand;

		BOOL           m_bStart;
		CString   m_orgFile;
	

		//int  m_calcResult[200];

	};

}
