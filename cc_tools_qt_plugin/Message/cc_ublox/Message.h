// Generated by commsdsl2tools_qt v7.0.0

#pragma once

#include "cc_tools_qt/ToolsMessage.h"
#include "cc_tools_qt/ToolsProtMsgInterface.h"
#include "cc_tools_qt_plugin/cc_ublox/Version.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/Message.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

class Message : public cc_tools_qt::ToolsMessage
{
public:
    using ProtInterface = cc_tools_qt::ToolsProtMsgInterface<::cc_ublox::Message>;
    using ProtOptions = cc_tools_qt_plugin::cc_ublox::options::DefaultOptions;
    Message();
    virtual ~Message() noexcept;

protected:
    virtual QString idAsStringImpl() const override;
};

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
