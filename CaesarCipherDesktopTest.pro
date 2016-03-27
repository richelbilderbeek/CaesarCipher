# Qt does not go well with -Weffc++
include(../RibiLibraries/DesktopApplicationNoWeffcpp.pri)
include(../RibiLibraries/Boost.pri)
include(../RibiLibraries/GeneralConsole.pri)
include(../RibiLibraries/GeneralDesktop.pri)

include(../RibiClasses/CppCaesarCipher/CppCaesarCipher.pri)
include(../RibiClasses/CppCaesarCipher/CppCaesarCipherTest.pri)

include(../RibiClasses/CppLoopReader/CppLoopReader.pri)

include(CaesarCipherConsoleTest.pri)
include(CaesarCipherDesktop.pri)
include(CaesarCipherDesktopTest.pri)

SOURCES += qtmain_test.cpp

# Boost.Test
LIBS += -lboost_unit_test_framework

# gcov
QMAKE_CXXFLAGS += -fprofile-arcs -ftest-coverage
LIBS += -lgcov

# QResources give this error
QMAKE_CXXFLAGS += -Wno-unused-variable
