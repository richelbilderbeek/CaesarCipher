#include "qtcaesarciphermenudialog.h"
#include <boost/test/unit_test.hpp>
#include <QKeyEvent>

BOOST_AUTO_TEST_CASE(ribi_qtcaesarciphermenudialog_default_constructor)
{
  BOOST_CHECK_NO_THROW(ribi::QtCaesarCipherMenuDialog());
}

BOOST_AUTO_TEST_CASE(ribi_qtcaesarciphermenudialog_press_esc)
{
  ribi::QtCaesarCipherMenuDialog d;
  QKeyEvent esc(QEvent::KeyPress,Qt::Key_Escape,Qt::NoModifier);
  BOOST_CHECK_NO_THROW(d.keyPressEvent(&esc));
}
