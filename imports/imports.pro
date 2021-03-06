TEMPLATE = lib
CONFIG += plugin
QT += ivicore

LIBS += -L$$OUT_PWD/../ -l$$qtLibraryTarget(QtIviInstrumentCluster)
INCLUDEPATH += $$OUT_PWD/../frontend

QFACE_FORMAT = qmlplugin
QFACE_SOURCES = ../instrument-cluster.qface

load(ivigenerator)

DESTDIR = $$OUT_PWD/$$replace(URI, \\., /)

exists($$OUT_PWD/qmldir) {
    cpqmldir.files = $$OUT_PWD/qmldir \
                     $$OUT_PWD/plugins.qmltypes
    cpqmldir.path = $$DESTDIR
    cpqmldir.CONFIG = no_check_exist
    COPIES += cpqmldir
}
