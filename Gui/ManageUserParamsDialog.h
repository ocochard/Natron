/* ***** BEGIN LICENSE BLOCK *****
 * This file is part of Natron <http://www.natron.fr/>,
 * Copyright (C) 2013-2017 INRIA and Alexandre Gauthier-Foichat
 *
 * Natron is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * Natron is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Natron.  If not, see <http://www.gnu.org/licenses/gpl-2.0.html>
 * ***** END LICENSE BLOCK ***** */

#ifndef Gui_ManageUserParamsDialog_h
#define Gui_ManageUserParamsDialog_h

// ***** BEGIN PYTHON BLOCK *****
// from <https://docs.python.org/3/c-api/intro.html#include-files>:
// "Since Python may define some pre-processor definitions which affect the standard headers on some systems, you must include Python.h before any standard headers are included."
#include <Python.h>
// ***** END PYTHON BLOCK *****

#include "Global/Macros.h"

#if !defined(Q_MOC_RUN) && !defined(SBK_RUN)
#include <boost/scoped_ptr.hpp>
#endif

CLANG_DIAG_OFF(deprecated)
CLANG_DIAG_OFF(uninitialized)
#include <QDialog>
CLANG_DIAG_ON(deprecated)
CLANG_DIAG_ON(uninitialized)

#include "Gui/GuiFwd.h"

NATRON_NAMESPACE_ENTER

struct ManageUserParamsDialogPrivate;
class ManageUserParamsDialog
    : public QDialog
{
GCC_DIAG_SUGGEST_OVERRIDE_OFF
    Q_OBJECT
GCC_DIAG_SUGGEST_OVERRIDE_ON

public:


    ManageUserParamsDialog(DockablePanel* panel,
                           QWidget* parent);

    virtual ~ManageUserParamsDialog();

public Q_SLOTS:

    void onAddClicked();

    void onPickClicked();

    void onDeleteClicked();

    void onEditClicked();

    void onUpClicked();

    void onDownClicked();

    void onCloseClicked();

    void onKnobsTreeSelectionChanged();
    void onViewerTreeSelectionChanged();

    void onKnobsTreeItemDoubleClicked(QTreeWidgetItem *item, int column);
    void onViewerTreeItemDoubleClicked(QTreeWidgetItem *item, int column);

private:


    // Prompts user to create a user page
    bool ensureHasUserPage();

    virtual void keyPressEvent(QKeyEvent* e) OVERRIDE FINAL;

    
    void onKnobsEditClickedInternal(const QList<QTreeWidgetItem*> &selection);
    void onViewerUIEditClickedInternal(const QList<QTreeWidgetItem*> &selection);

    boost::scoped_ptr<ManageUserParamsDialogPrivate> _imp;
};

NATRON_NAMESPACE_EXIT

#endif // Gui_ManageUserParamsDialog_h
