// Generated by commsdsl2tools_qt v6.3.0

#include "CfgNavx5Mask1.h"

#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/field/CfgNavx5Mask1.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace field
{

QVariantMap createProps_cfgNavx5Mask1(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::field::CfgNavx5Mask1<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add(2U, "minMax")
            .add(3U, "minCno")
            .add(6U, "initial3dfix")
            .add(9U, "wknRoll")
            .add(10U, "ackAid")
            .add(13U, "ppp")
            .add(14U, "aop")
            .asMap();
}

} // namespace field

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin