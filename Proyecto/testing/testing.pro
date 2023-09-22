TEMPLATE = app

CONFIG += c++17

isEmpty(CATCH_INCLUDE_DIR): CATCH_INCLUDE_DIR=$$(CATCH_INCLUDE_DIR)
# set by Qt Creator wizard
isEmpty(CATCH_INCLUDE_DIR): CATCH_INCLUDE_DIR="../../Proyecto/ExternalLibs"
!isEmpty(CATCH_INCLUDE_DIR): INCLUDEPATH *= $${CATCH_INCLUDE_DIR}

isEmpty(CATCH_INCLUDE_DIR): {
    message("CATCH_INCLUDE_DIR is not set, assuming Catch2 can be found automatically in your system")
}

SOURCES += \
    main.cpp \
    tst_proyecto.cpp

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../libreria/release/ -llibreria
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../libreria/debug/ -llibreria
else:unix: LIBS += -L$$OUT_PWD/../libreria/ -llibreria

INCLUDEPATH += $$PWD/../libreria
DEPENDPATH += $$PWD/../libreria
