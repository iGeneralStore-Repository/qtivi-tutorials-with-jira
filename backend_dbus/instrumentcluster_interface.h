/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -i dbus_conversion.h -p instrumentcluster_interface.h: ../dbus_server/instrumentcluster.xml
 *
 * qdbusxml2cpp is Copyright (C) 2019 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef INSTRUMENTCLUSTER_INTERFACE_H
#define INSTRUMENTCLUSTER_INTERFACE_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>
#include "dbus_conversion.h"

/*
 * Proxy class for interface Example.IVI.InstrumentCluster
 */
class ExampleIVIInstrumentClusterInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "Example.IVI.InstrumentCluster"; }

public:
    ExampleIVIInstrumentClusterInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~ExampleIVIInstrumentClusterInterface();

    Q_PROPERTY(Warning currentWarning READ currentWarning)
    inline Warning currentWarning() const
    { return qvariant_cast< Warning >(property("currentWarning")); }

    Q_PROPERTY(double fuel READ fuel)
    inline double fuel() const
    { return qvariant_cast< double >(property("fuel")); }

    Q_PROPERTY(int rpm READ rpm)
    inline int rpm() const
    { return qvariant_cast< int >(property("rpm")); }

    Q_PROPERTY(int speed READ speed)
    inline int speed() const
    { return qvariant_cast< int >(property("speed")); }

    Q_PROPERTY(InstrumentClusterModule::SystemType systemType READ systemType)
    inline InstrumentClusterModule::SystemType systemType() const
    { return qvariant_cast< InstrumentClusterModule::SystemType >(property("systemType")); }

    Q_PROPERTY(double temperature READ temperature)
    inline double temperature() const
    { return qvariant_cast< double >(property("temperature")); }

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<Warning> currentWarning()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("currentWarning"), argumentList);
    }

    inline QDBusPendingReply<double> fuel()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("fuel"), argumentList);
    }

    inline QDBusPendingReply<int> rpm()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("rpm"), argumentList);
    }

    inline QDBusPendingReply<int> speed()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("speed"), argumentList);
    }

    inline QDBusPendingReply<InstrumentClusterModule::SystemType> systemType()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("systemType"), argumentList);
    }

    inline QDBusPendingReply<double> temperature()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("temperature"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void currentWarningChanged(Warning currentWarning);
    void fuelChanged(double fuel);
    void rpmChanged(int rpm);
    void speedChanged(int speed);
    void systemTypeChanged(InstrumentClusterModule::SystemType systemType);
    void temperatureChanged(double temperature);
};

namespace Example {
  namespace IVI {
    typedef ::ExampleIVIInstrumentClusterInterface InstrumentCluster;
  }
}
#endif
