// -*- C++ -*- generated by wxGlade 0.5 on Tue May  1 20:53:12 2007 from /tdata/home/Desktop/stx-eparser/wxparserdemo/wxparserdemo.wxg

#include <wx/wx.h>
#include <wx/image.h>

#ifndef WMAIN_WXG_H
#define WMAIN_WXG_H

// begin wxGlade: ::dependencies
#include <wx/notebook.h>
#include <wx/grid.h>
// end wxGlade


class WMain_wxg: public wxFrame {
public:
    // begin wxGlade: WMain_wxg::ids
    enum {
        ID_BUTTON_EVALUATE = wxID_HIGHEST + 1000,
        ID_GRID_VARIABLES = wxID_HIGHEST + 1001,
        ID_BUTTON_ADD_VARIABLE = wxID_HIGHEST + 1002,
        ID_BUTTON_DEL_VARIABLE = wxID_HIGHEST + 1003
    };
    // end wxGlade

    WMain_wxg(wxWindow* parent, int id, const wxString& title, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_FRAME_STYLE);

private:
    // begin wxGlade: WMain_wxg::methods
    void set_properties();
    void do_layout();
    // end wxGlade

protected:
    // begin wxGlade: WMain_wxg::attributes
    wxStaticBox* sizer_6_staticbox;
    wxStaticBox* sizer_5_staticbox;
    wxStaticBox* sizer_2_staticbox;
    wxTextCtrl* textctrlExpression;
    wxButton* buttonEvaluate;
    wxGrid* gridVariables;
    wxBitmapButton* buttonAddVariable;
    wxBitmapButton* buttonDelVariable;
    wxPanel* notebook_1_pane_1;
    wxTextCtrl* textctrlStringExpression;
    wxTextCtrl* textctrlResultType;
    wxTextCtrl* textctrlResultValue;
    wxPanel* notebook_1_pane_2;
    wxTextCtrl* textctrlXmlTree;
    wxPanel* notebook_1_pane_3;
    wxNotebook* notebookResults;
    wxPanel* panel_Main;
    // end wxGlade
}; // wxGlade: end class


#endif // WMAIN_WXG_H
