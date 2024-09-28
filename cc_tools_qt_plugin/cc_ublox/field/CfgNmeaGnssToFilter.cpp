// Generated by commsdsl2tools_qt v6.3.4

#include "CfgNmeaGnssToFilter.h"

#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/field/CfgNmeaGnssToFilter.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace field
{

QVariantMap createProps_cfgNmeaGnssToFilter(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::field::CfgNmeaGnssToFilter<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add(0U, "gps")
            .add(1U, "sbas")
            .add(4U, "qzss")
            .add(5U, "glonass")
            .add(6U, "beidou")
            .asMap();
}

} // namespace field

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
