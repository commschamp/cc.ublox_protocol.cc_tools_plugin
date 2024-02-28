// Generated by commsdsl2tools_qt v6.3.0

#include "InfMask.h"

#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/field/InfMask.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace field
{

QVariantMap createProps_infMask(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::field::InfMask<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add(0U, "ERROR")
            .add(1U, "WARNING")
            .add(2U, "NOTICE")
            .add(3U, "TEST")
            .add(4U, "DEBUG")
            .asMap();
}

} // namespace field

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
