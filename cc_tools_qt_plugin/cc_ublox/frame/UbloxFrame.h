// Generated by commsdsl2tools_qt v6.3.2

#pragma once

#include "cc_tools_qt_plugin/cc_ublox/Message.h"
#include "cc_tools_qt_plugin/cc_ublox/Version.h"
#include "cc_tools_qt_plugin/cc_ublox/input/AllMessages.h"
#include "cc_tools_qt_plugin/cc_ublox/options/MsgFactoryFrameOptions.h"
#include "cc_ublox/frame/UbloxFrame.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace frame
{

using UbloxFrame =
    ::cc_ublox::frame::UbloxFrame<
        cc_tools_qt_plugin::cc_ublox::Message,
        cc_tools_qt_plugin::cc_ublox::input::AllMessages,
        cc_tools_qt_plugin::cc_ublox::options::MsgFactoryFrameOptions
    >;

} // namespace frame

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
