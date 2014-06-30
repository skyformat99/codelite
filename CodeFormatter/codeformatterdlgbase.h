//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: codeformatterdlg.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef CODEFORMATTERDLG_BASE_CLASSES_H
#define CODEFORMATTERDLG_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/splitter.h>
#include <wx/panel.h>
#include <wx/propgrid/manager.h>
#include <wx/propgrid/property.h>
#include <wx/propgrid/advprops.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/stc/stc.h>
#include <wx/button.h>
#include "formatoptions.h"

class CodeFormatterBaseDlg : public wxDialog
{
protected:
    wxSplitterWindow* m_splitterSettingsPreview;
    wxPanel* m_panelSettings;
    wxSplitterWindow* m_splitter16;
    wxPanel* m_splitterPage20;
    wxPropertyGridManager* m_pgMgr;
    wxPGProperty* m_pgPropAstyleOptions;
    wxPGProperty* m_pgPropPreDefinedStyles;
    wxPGProperty* m_pgPropBrackets;
    wxPGProperty* m_pgPropIndentation;
    wxPGProperty* m_pgPropFormatting;
    wxPanel* m_splitterPage24;
    wxStaticText* m_staticText3;
    wxTextCtrl* m_textCtrlUserFlags;
    wxPanel* m_panelPreview;
    wxStyledTextCtrl* m_textCtrlPreview;
    wxStdDialogButtonSizer* m_stdBtnSizer30;
    wxButton* m_buttonOK;
    wxButton* m_buttonApply;
    wxButton* m_buttonCancel;
    wxButton* m_buttonHelp;

protected:
    virtual void OnAStylePropertyChanged(wxPropertyGridEvent& event) { event.Skip(); }
    virtual void OnCustomAstyleFlags(wxCommandEvent& event) { event.Skip(); }
    virtual void OnOK(wxCommandEvent& event) { event.Skip(); }
    virtual void OnApplyUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnApply(wxCommandEvent& event) { event.Skip(); }
    virtual void OnHelp(wxCommandEvent& event) { event.Skip(); }

public:
    CodeFormatterBaseDlg(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Formatter Options"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~CodeFormatterBaseDlg();
};

#endif
