#include <iostream>
#include <wx/wx.h>

#include "MainFrame.hpp"

MainFrame::MainFrame(const wxString &title, const wxPoint &pos, const wxSize &size) : wxFrame(
    nullptr
    , wxID_ANY
    , title
    , wxDefaultPosition
    , wxSize(800, 600)
)
{}