// Generated by commsdsl2tools_qt v7.1.0

#include "Message.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

Message::Message() = default;

Message::~Message() noexcept = default;

QString Message::idAsStringImpl() const
{
    return QString("0x%1").arg(numericIdImpl(), 4, 16, QChar('0')).toUpper();
}

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
