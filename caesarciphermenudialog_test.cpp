//---------------------------------------------------------------------------
/*
CaesarCipher, Caesar cipher tool
Copyright (C) 2014-2016 Richel Bilderbeek

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.
*/
//---------------------------------------------------------------------------
//From http://www.richelbilderbeek.nl/ToolCaesarCipher.htm
//---------------------------------------------------------------------------
#include "caesarciphermenudialog.h"
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(ribi_caesarcipher_menudialog_test)
{
  ribi::CaesarCipherMenuDialog d;
  //Correct runs
  BOOST_CHECK_EQUAL(d.Execute( {"CaesarCipher", "-k", "0", "--text", "HELLOWORLD", "-s" } ), 0);
  BOOST_CHECK_EQUAL(d.Execute( {"CaesarCipher", "-k", "1", "--text", "HELLOWORLD", "-s" } ), 0);
  BOOST_CHECK_EQUAL(d.Execute( {"CaesarCipher", "-k", "2", "--text", "HELLOWORLD", "-s" } ), 0);
  BOOST_CHECK_EQUAL(d.Execute( {"CaesarCipher", "-k", "123", "--cipher", "HELLOWORLD", "-s" } ), 0);

  //Informative runs
  BOOST_CHECK_EQUAL(d.Execute( {"CaesarCipher", "--help" } ), 0);
  BOOST_CHECK_EQUAL(d.Execute( {"CaesarCipher", "--history" } ), 0);
  BOOST_CHECK_EQUAL(d.Execute( {"CaesarCipher", "--license" } ), 0);
  BOOST_CHECK_EQUAL(d.Execute( {"CaesarCipher", "--version" } ), 0);

  //Incorrect runs
  BOOST_CHECK_EQUAL(d.Execute( {"CaesarCipher" } ), 1);
  BOOST_CHECK_EQUAL(d.Execute( {"CaesarCipher", "-k", "no_number", "--text", "HELLOWORLD", "-s" } ), 1);
}
