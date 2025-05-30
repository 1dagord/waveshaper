#include <memory>
#include <wx/wx.h>

#include "App.hpp"
#include "MainFrame.hpp"

/*
    cmake .. && cmake --build . && ./waveshaper
*/

wxIMPLEMENT_APP(App);

bool App::OnInit() {
    MainFrame* mainFrame = new MainFrame("WaveShaper", wxDefaultPosition, wxSize(800, 600));
    mainFrame->Show();
    return true;
}