#pragma once

#ifndef APP_H
#define APP_H

#include <wx/wx.h>

class App: public wxApp {
	// MainApp just acts as a container for the window, or frame in MainFrame
public:
	virtual bool OnInit(); 
};

#endif