// Generated by commsdsl2tools_qt v6.3.4

#include "CfgNavx5SigAttenCompMode.h"

#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/field/CfgNavx5SigAttenCompMode.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace field
{

QVariantMap createProps_cfgNavx5SigAttenCompMode(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::field::CfgNavx5SigAttenCompMode<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .addSpecial("Disabled", 0)
            .addSpecial("Automatic", 255)
            .asMap();
}

} // namespace field

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
