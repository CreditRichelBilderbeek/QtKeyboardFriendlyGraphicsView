#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Weffc++"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#pragma GCC diagnostic ignored "-Wunused-but-set-parameter"
#include <QApplication>
#include <QDesktopWidget>
#include "qttestqtkeyboardfriendlygraphicsviewmenudialog.h"
#pragma GCC diagnostic pop

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);

  ribi::QtTestKeyboardFriendlyGraphicsViewMenuDialog d;
  d.show();
  return a.exec();
}
