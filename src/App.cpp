#include <memory>
#include <wx/wx.h>

#include "App.hpp"
#include "MainFrame.hpp"

/*
    cd build
    cmake .. && cmake --build . && ./waveshaper
*/

wxIMPLEMENT_APP(App);

bool App::OnInit() {
    MainFrame* main_frame = new MainFrame("WaveShaper");
    main_frame->SetClientSize(800, 600);
    main_frame->Center();
    main_frame->Show();
    return true;
}