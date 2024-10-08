// Generated by commsdsl2tools_qt v6.3.4

#include "CfgPm2Flags.h"

#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/field/CfgPm2Flags.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace field
{

namespace
{

struct CfgPm2FlagsMembers
{
    static QVariantMap createProps_bitsLow(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::field::CfgPm2FlagsMembers<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::BitsLow;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(4U, "extintSel")
                .add(5U, "extintWake")
                .add(6U, "extintBackup")
                .add(7U, "extintInactive")
                .asMap();
    }

    static QVariantMap createProps_limitPeakCurr(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::field::CfgPm2FlagsMembers<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::LimitPeakCurr;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add("Desabled", 0)
                .add("Enabled", 1)
                .asMap();
    }

    static QVariantMap createProps_bitsMid(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::field::CfgPm2FlagsMembers<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::BitsMid;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(0U, "waitTimeFix")
                .add(1U, "updateRTC")
                .add(2U, "updateEPH")
                .add(6U, "doNotEnterOff")
                .asMap();
    }

    static QVariantMap createProps_mode(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::field::CfgPm2FlagsMembers<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Mode;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add("ON/OFF", 0)
                .add("Cyclic", 1)
                .asMap();
    }

    static QVariantMap createProps_reserved(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::field::CfgPm2FlagsMembers<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .hidden()
                .asMap();
    }
}; // struct CfgPm2FlagsMembers

} // namespace

QVariantMap createProps_cfgPm2Flags(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::field::CfgPm2Flags<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add(CfgPm2FlagsMembers::createProps_bitsLow(true))
            .add(CfgPm2FlagsMembers::createProps_limitPeakCurr(true))
            .add(CfgPm2FlagsMembers::createProps_bitsMid(true))
            .add(CfgPm2FlagsMembers::createProps_mode(true))
            .add(CfgPm2FlagsMembers::createProps_reserved(true))
            .asMap();
}

} // namespace field

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
