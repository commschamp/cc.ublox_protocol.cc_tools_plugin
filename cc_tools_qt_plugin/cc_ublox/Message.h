// Generated by commsdsl2tools_qt v6.3.0

#pragma once

#include "cc_tools_qt/MessageBase.h"
#include "cc_tools_qt_plugin/cc_ublox/Version.h"
#include "cc_ublox/Message.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

class Message : public
    cc_tools_qt::MessageBase<
        ::cc_ublox::Message
    >
{
protected:
    virtual QString idAsStringImpl() const override;
    virtual const QVariantList& extraTransportFieldsPropertiesImpl() const override;
};

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
