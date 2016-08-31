include(../RibiLibraries/ConsoleApplicationNoWeffcpp.pri)
include(../RibiLibraries/Boost.pri)
include(../RibiLibraries/GeneralConsole.pri)

include(CaesarCipherConsole.pri)
include(CaesarCipherConsoleTest.pri)

include(CppCaesarCipher.pri)
include(../RibiClasses/CppLoopReader/CppLoopReader.pri)

SOURCES += main_test.cpp

LIBS += -lboost_unit_test_framework

# QResources give this error
QMAKE_CXXFLAGS += -Wno-unused-variable
