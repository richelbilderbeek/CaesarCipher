include(../RibiLibraries/ConsoleApplicationNoWeffcpp.pri)
include(../RibiLibraries/Boost.pri)
include(../RibiLibraries/GeneralConsole.pri)

include(CaesarCipherConsole.pri)
include(CppCaesarCipher.pri)
include(../RibiClasses/CppLoopReader/CppLoopReader.pri)

SOURCES += main.cpp

# QResources give this error
QMAKE_CXXFLAGS += -Wno-unused-variable
