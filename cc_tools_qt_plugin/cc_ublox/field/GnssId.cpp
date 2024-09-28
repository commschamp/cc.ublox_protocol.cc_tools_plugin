// Generated by commsdsl2tools_qt v6.3.4

#include "GnssId.h"

#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/field/GnssId.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace field
{

QVariantMap createProps_gnssId(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::field::GnssId<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add("GPS", 0)
            .add("SBAS", 1)
            .add("Galileo", 2)
            .add("BeiDou", 3)
            .add("IMES", 4)
            .add("QZSS", 5)
            .add("GLONASS", 6)
            .asMap();
}

} // namespace field

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
