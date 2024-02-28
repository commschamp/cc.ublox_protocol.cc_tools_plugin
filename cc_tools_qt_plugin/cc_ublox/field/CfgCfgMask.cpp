// Generated by commsdsl2tools_qt v6.3.0

#include "CfgCfgMask.h"

#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/field/CfgCfgMask.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace field
{

QVariantMap createProps_cfgCfgMask(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::field::CfgCfgMask<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add(0U, "ioPort")
            .add(1U, "msgConf")
            .add(2U, "infMsg")
            .add(3U, "navConf")
            .add(4U, "rxmConf")
            .add(8U, "senConf")
            .add(9U, "rinvConf")
            .add(10U, "antConf")
            .add(11U, "logConf")
            .add(12U, "ftsConf")
            .asMap();
}

} // namespace field

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
