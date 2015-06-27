#include <afxwin.h>
class DebugWindow : public CWinApp {
	//friend MainDebugWindow;
	protected:
		BOOL InitInstance();
	public:
		DebugWindow();
		~DebugWindow();

		void Log();
		void *Clear();

};