#ifndef CLTABLEWITHPAGINATION_H
#define CLTABLEWITHPAGINATION_H

#include "codelite_exports.h"
#include <vector>
#include <wx/arrstr.h>
#include <wx/button.h>
#include <wx/panel.h>
#include <wx/stattext.h>

class wxDataViewListCtrl;
class WXDLLIMPEXP_SDK clTableWithPagination : public wxPanel
{
    int m_linesPerPage;
    int m_currentPage;
    std::vector<wxArrayString> m_data;
    wxArrayString m_columns;
    wxDataViewListCtrl* m_ctrl;
    wxButton* m_btnNextPage;
    wxButton* m_btnPrevPage;
    wxStaticText* m_staticText;

protected:
    bool CanNext() const;
    bool CanPrev() const;

public:
    clTableWithPagination(wxWindow* parent, wxWindowID winid = wxID_ANY, const wxPoint& pos = wxDefaultPosition,
                          const wxSize& size = wxDefaultSize, long style = wxTAB_TRAVERSAL | wxNO_BORDER,
                          const wxString& name = wxPanelNameStr);
    virtual ~clTableWithPagination();

    void SetLinesPerPage(int numLines);

    /**
     * @brief define the columns for this table
     * Calling this functions clears all the data from the table!
     */
    void SetColumns(const wxArrayString& columns);

    /**
     * @brief
     * @param line
     */
    void SetData(std::vector<wxArrayString>& data);

    /**
     * @brief clear all data and columns from the table
     */
    void ClearAll();

    /**
     * @brief display the nth page
     */
    void ShowPage(int nPage);
};

#endif // CLTABLEWITHPAGINATION_H