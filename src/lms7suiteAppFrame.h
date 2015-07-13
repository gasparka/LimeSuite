#ifndef __LMS7SuiteAppFrame__
#define __LMS7SuiteAppFrame__

/**
@file
Subclass of AppFrame_view, which is generated by wxFormBuilder.
*/

#include "lms7suiteApp_gui.h"

//// end generated include

class LMScomms;
class LMS7002M;
class pnlMiniLog;
class fftviewer_frFFTviewer;
class ADF4002;
class ADF4002_wxgui;
class Si5351C;
class Si5351C_wxgui;
class LMS_Programing_wxgui;
class RFSpark_wxgui;
class HPM7_wxgui;
class FPGAcontrols_wxgui;

/** Implementing AppFrame */
class LMS7SuiteAppFrame : public AppFrame_view
{
	protected:
		// Handlers for AppFrame events.
		void OnClose( wxCloseEvent& event );
		void OnQuit( wxCommandEvent& event );
		void OnShowConnectionSettings( wxCommandEvent& event );
		void OnAbout( wxCommandEvent& event );        
        void OnControlBoardConnect(wxCommandEvent& event);
        void OnDataBoardConnect(wxCommandEvent& event);
        void HandleLMSevent(wxCommandEvent& event);
        void OnFFTviewerClose(wxCloseEvent& event);
        void OnShowFFTviewer(wxCommandEvent& event);
        void OnADF4002Close(wxCloseEvent& event);
        void OnShowADF4002(wxCommandEvent& event);
        void OnSi5351Close(wxCloseEvent& event);
        void OnShowSi5351C(wxCommandEvent& event);
        void OnProgramingClose(wxCloseEvent& event);
        void OnShowPrograming(wxCommandEvent& event);
        void OnRFSparkClose(wxCloseEvent& event);
        void OnShowRFSpark(wxCommandEvent& event);
        void OnHPM7Close(wxCloseEvent& event);
        void OnShowHPM7(wxCommandEvent& event);
        void OnFPGAcontrolsClose(wxCloseEvent& event);
        void OnShowFPGAcontrols(wxCommandEvent& event);
    public:
		/** Constructor */
		LMS7SuiteAppFrame( wxWindow* parent );		
	//// end generated class members
		virtual ~LMS7SuiteAppFrame();
	protected:
        void OnLogMessage(wxCommandEvent &event);
		const std::string cWindowTitle = "LMS7Suite";
		const int cDeviceInfoCollumn = 1;
		const int cDeviceVerRevMaskCollumn = 2;

        pnlMiniLog* log;
        	
        LMScomms* lms7controlPort;
        LMScomms* streamBoardPort;
        LMS7002M* lmsControl;
		pnlMiniLog* mMiniLog;
        fftviewer_frFFTviewer* fftviewer;

        ADF4002* adfModule;
        ADF4002_wxgui* adfGUI;

        Si5351C* si5351module;
        Si5351C_wxgui* si5351gui;
	
        LMS_Programing_wxgui* programmer;
        RFSpark_wxgui* rfspark;
        HPM7_wxgui* hpm7;
        FPGAcontrols_wxgui* fpgaControls;
};


#endif // __LMS7SuiteAppFrame__

