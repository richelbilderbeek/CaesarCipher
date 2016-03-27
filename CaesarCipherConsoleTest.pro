include(../RibiLibraries/ConsoleApplicationNoWeffcpp.pri)
include(../RibiLibraries/Boost.pri)
include(../RibiLibraries/GeneralConsole.pri)

include(../CaesarCipher/CaesarCipherConsole.pri)
include(../CaesarCipher/CaesarCipherConsoleTest.pri)

include(../RibiClasses/CppCaesarCipher/CppCaesarCipher.pri)
include(../RibiClasses/CppLoopReader/CppLoopReader.pri)

SOURCES += main_test.cpp

LIBS += -lboost_unit_test_framework
