// Generated by commsdsl2tools_qt v6.3.2

#include "Message.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace
{

QVariantList createProps()
{
    QVariantList props;
    return props;
}

} // namespace 

QString Message::idAsStringImpl() const
{
    return "0x" + QString("%1").arg(static_cast<unsigned long long>(getId()), 4, 16, QChar('0')).toUpper();
}

const QVariantList& Message::extraTransportFieldsPropertiesImpl() const
{
    static const QVariantList Props = createProps();
    return Props;
}

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
