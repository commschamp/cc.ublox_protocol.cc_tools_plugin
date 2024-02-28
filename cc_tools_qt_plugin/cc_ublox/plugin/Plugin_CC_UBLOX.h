// Generated by commsdsl2tools_qt v6.3.0

#pragma once

#include <QtCore/QObject>
#include <QtCore/QtPlugin>
#include "cc_tools_qt/Plugin.h"
#include "cc_tools_qt/Protocol.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace plugin
{

class Plugin_CC_UBLOX : public cc_tools_qt::Plugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "cc.UbloxProtocolPlugin" FILE "Plugin_CC_UBLOX.json")
    Q_INTERFACES(cc_tools_qt::Plugin)

public:
    Plugin_CC_UBLOX();
    virtual ~Plugin_CC_UBLOX();

private:
    cc_tools_qt::ProtocolPtr m_protocol;
};

} // namespace plugin

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
