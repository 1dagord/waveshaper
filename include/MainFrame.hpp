#pragma once

#ifndef MAINFRAME_H
#define MAINFRAME_H

#include <wx/wx.h>

class MainFrame: public wxFrame {
    // MainFrame is the class for our window,
	// It contains the window and all objects in it 
public:
	MainFrame(const wxString &title);
public:
	wxPanel* main_panel;

	void CreateControls();
	void SetupSizers();
};

#endif