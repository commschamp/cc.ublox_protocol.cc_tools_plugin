// Generated by commsdsl2tools_qt v6.3.0

#include "NavStatus.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/GpsFix.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Itow.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/NavStatus.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_itow(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavStatusFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Itow;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_itow(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_gpsFix(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavStatusFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::GpsFix;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_gpsFix(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_flags(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavStatusFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Flags;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(0U, "gpsFixOk")
            .add(1U, "diffSoln")
            .add(2U, "wknSet")
            .add(3U, "towSet")
            .asMap();
}

struct FixStatMembers
{
    static QVariantMap createProps_bits(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::NavStatusFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FixStatMembers::Bits;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(0U, "diffCorr")
                .add(1U, "carrSolnValid")
                .asMap();
    }

    static QVariantMap createProps_mapMatching(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::NavStatusFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FixStatMembers::MapMatching;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add("none", 0)
                .add("not used", 1)
                .add("used", 2)
                .add("used + dead reckon", 3)
                .asMap();
    }
}; // struct FixStatMembers

static QVariantMap createProps_fixStat(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavStatusFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FixStat;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(FixStatMembers::createProps_bits(true))
            .add(FixStatMembers::createProps_mapMatching(true))
            .asMap();
}

struct Flags2Members
{
    static QVariantMap createProps_psmState(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::NavStatusFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Flags2Members::PsmState;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add("ACQUISITION", 0)
                .add("TRAKING", 1)
                .add("POWER OPTIMIZED TRACKING", 2)
                .add("INACTIVE", 3)
                .asMap();
    }

    static QVariantMap createProps_res1(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::NavStatusFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Flags2Members::Res1;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .hidden()
                .asMap();
    }

    static QVariantMap createProps_spoofDetState(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::NavStatusFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Flags2Members::SpoofDetState;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add("Unknown", 0)
                .add("No spoofing", 1)
                .add("Spoofing", 2)
                .add("Multiple spoofing", 3)
                .asMap();
    }

    static QVariantMap createProps_res2(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::NavStatusFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Flags2Members::Res2;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .hidden()
                .asMap();
    }

    static QVariantMap createProps_carrSoln(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::NavStatusFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Flags2Members::CarrSoln;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add("NoCarrier", 0)
                .add("Float", 1)
                .add("Fixed", 2)
                .asMap();
    }
}; // struct Flags2Members

static QVariantMap createProps_flags2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavStatusFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Flags2;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(Flags2Members::createProps_psmState(true))
            .add(Flags2Members::createProps_res1(true))
            .add(Flags2Members::createProps_spoofDetState(true))
            .add(Flags2Members::createProps_res2(true))
            .add(Flags2Members::createProps_carrSoln(true))
            .asMap();
}

static QVariantMap createProps_ttff(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavStatusFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Ttff;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_msss(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavStatusFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Msss;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_itow(false));
    props.append(createProps_gpsFix(false));
    props.append(createProps_flags(false));
    props.append(createProps_fixStat(false));
    props.append(createProps_flags2(false));
    props.append(createProps_ttff(false));
    props.append(createProps_msss(false));
    return props;
}

} // namespace

class NavStatusImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::NavStatus<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        NavStatusImpl
    >
{
public:
    NavStatusImpl() = default;
    NavStatusImpl(const NavStatusImpl&) = delete;
    NavStatusImpl(NavStatusImpl&&) = delete;
    virtual ~NavStatusImpl() = default;
    NavStatusImpl& operator=(const NavStatusImpl&) = default;
    NavStatusImpl& operator=(NavStatusImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavStatus::NavStatus() : m_pImpl(new NavStatusImpl) {}
NavStatus::~NavStatus() = default;

NavStatus& NavStatus::operator=(const NavStatus& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavStatus& NavStatus::operator=(NavStatus&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

NavStatus::MsgIdParamType NavStatus::doGetId()
{
    return ::cc_ublox::message::NavStatus<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* NavStatus::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavStatus::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavStatus::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavStatus::resetImpl()
{
    m_pImpl->reset();
}

bool NavStatus::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const NavStatus*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavStatus::MsgIdParamType NavStatus::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavStatus::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavStatus::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavStatus::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavStatus::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavStatus::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin