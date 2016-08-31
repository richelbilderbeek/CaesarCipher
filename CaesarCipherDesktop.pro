include(../RibiLibraries/DesktopApplicationNoWeffcpp.pri)
include(../RibiLibraries/Boost.pri)
include(../RibiLibraries/GeneralConsole.pri)
include(../RibiLibraries/GeneralDesktop.pri)

include(CppCaesarCipher.pri)
include(../RibiClasses/CppLoopReader/CppLoopReader.pri)
include(CaesarCipherDesktop.pri)

SOURCES += qtmain.cpp

# QResources give this error
QMAKE_CXXFLAGS += -Wno-unused-variable
