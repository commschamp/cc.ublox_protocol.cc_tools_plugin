// Generated by commsdsl2tools_qt v6.3.0

#include "Res7.h"

#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/field/Res7.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace field
{

QVariantMap createProps_res7(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::field::Res7<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .asMap();
}

} // namespace field

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
