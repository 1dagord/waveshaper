#include <iostream>
#include <vector>
#include <wx/wx.h>
#include <wx/gbsizer.h>

#include "MainFrame.hpp"

MainFrame::MainFrame(const wxString &title) : wxFrame(
    nullptr
    , wxID_ANY
    , title
){
    CreateControls();
    SetupSizers();
}

void MainFrame::CreateControls() {
    main_panel = new wxPanel(this);
}

void MainFrame::SetupSizers() {
    const auto margin = FromDIP(10);
    wxBoxSizer* main_sizer = new wxBoxSizer(wxVERTICAL);
    wxGridBagSizer* inner_sizer = new wxGridBagSizer(margin, margin);

    std::vector<std::pair<wxGBPosition, wxGBSpan>> items = {
        {{0, 0}, {3, 2}},
        {{0, 2}, {3, 2}},
        {{3, 0}, {1, 1}},
        {{3, 1}, {1, 1}},
        {{3, 2}, {1, 2}}
    };

    for (auto &[pos, span] : items) {
        auto initial_size = inner_sizer->GetEmptyCellSize() * 2;
        if (pos == wxGBPosition(0, 0))
            initial_size.SetWidth(FromDIP(300));
        else if (pos == wxGBPosition(3, 0) || pos == wxGBPosition(3, 1))
            initial_size.SetWidth(FromDIP(150));

        wxPanel* p = new wxPanel(main_panel, wxID_ANY, wxDefaultPosition, initial_size);
        p->SetBackgroundColour(wxColour(100, 50, 100));

        inner_sizer->Add(p, pos, span, wxEXPAND);
    }

    inner_sizer->AddGrowableRow(0, 3);
    inner_sizer->AddGrowableRow(3, 1);

    inner_sizer->AddGrowableCol(2);
    inner_sizer->AddGrowableCol(3);

    inner_sizer->SetMinSize(FromDIP(wxSize(300, 200)));

    main_panel->SetSizer(inner_sizer);

    main_sizer->Add(main_panel, 1, wxEXPAND | wxALL, margin);
    this->SetSizerAndFit(main_sizer);
    
    // Use on a grid sizer to force window size to respect contents
    // main_sizer->SetSizeHints(this);
}