DEFINES += WIN64 _WINDOWS
DESTDIR = $${TERRALIBPATH}/$${BUILDLOC}/win64-g++
OBJECTS_DIR = $${DESTDIR}/obj/$${TARGET}
LIBS += -L$${DESTDIR}
