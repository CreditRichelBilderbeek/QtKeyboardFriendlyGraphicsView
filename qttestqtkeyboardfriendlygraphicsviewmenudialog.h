//---------------------------------------------------------------------------
/*
TestKeyboardFriendlyGraphicsView, tests QtKeyboardFriendlyGraphicsView
Copyright (C) 2012-2015 Richel Bilderbeek

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.If not, see <http://www.gnu.org/licenses/>.
*/
//---------------------------------------------------------------------------
//From http://www.richelbilderbeek.nl/ToolTestKeyboardFriendlyGraphicsView.htm
//---------------------------------------------------------------------------
#ifndef QTTESTKEYBOARDFRIENDLYGRAPHICSVIEWMENUDIALOG_H
#define QTTESTKEYBOARDFRIENDLYGRAPHICSVIEWMENUDIALOG_H

#include "qthideandshowdialog.h"

namespace Ui {
  class QtTestKeyboardFriendlyGraphicsViewMenuDialog;
}

namespace ribi {

class QtTestKeyboardFriendlyGraphicsViewWidget;

class QtTestKeyboardFriendlyGraphicsViewMenuDialog : public QtHideAndShowDialog
{
  Q_OBJECT //!OCLINT
  
public:
  explicit QtTestKeyboardFriendlyGraphicsViewMenuDialog(QWidget *parent = 0);
  QtTestKeyboardFriendlyGraphicsViewMenuDialog(
    const QtTestKeyboardFriendlyGraphicsViewMenuDialog&
  ) = delete;
  QtTestKeyboardFriendlyGraphicsViewMenuDialog& operator=(
    const QtTestKeyboardFriendlyGraphicsViewMenuDialog&
  ) = delete;
  ~QtTestKeyboardFriendlyGraphicsViewMenuDialog() noexcept;

  void ShowAbout();
  void ToggleVirtualBastard();
  void Quit();

private slots:
  void keyPressEvent(QKeyEvent* e);
  void OnTimer();
  void OnVirtualBastard();


private:
  Ui::QtTestKeyboardFriendlyGraphicsViewMenuDialog *ui;

  using Widget = QtTestKeyboardFriendlyGraphicsViewWidget;
  QTimer * const m_timer_virtual_bastard;
  Widget * m_widget;
};

std::string GetTestKeyboardFriendlyGraphicsViewVersion() noexcept;
std::vector<std::string> GetTestKeyboardFriendlyGraphicsViewVersionHistory() noexcept;

} //~namespace ribi

#endif // TESTKEYBOARDFRIENDLYGRAPHICSVIEWMENUDIALOG_H
