DEFINES += WIN32 _WINDOWS
DESTDIR = $${TERRALIBPATH}/$${BUILDLOC}/win32-g++
LIBS += -L$${DESTDIR}
OBJECTS_DIR = $${DESTDIR}/obj/$${TARGET}