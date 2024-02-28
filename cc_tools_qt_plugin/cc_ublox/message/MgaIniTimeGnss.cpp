// Generated by commsdsl2tools_qt v6.3.0

#include "MgaIniTimeGnss.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/GnssId.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Itow.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res2.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/MgaIniTimeGnss.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_type(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaIniTimeGnssFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Type;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .readOnly()
            .asMap();
}

static QVariantMap createProps_version(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaIniTimeGnssFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

struct RefMembers
{
    static QVariantMap createProps_source(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::MgaIniTimeGnssFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::RefMembers::Source;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add("None", 0)
                .add("EXTINT0", 1)
                .add("EXTINT1", 2)
                .asMap();
    }

    static QVariantMap createProps_bits(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::MgaIniTimeGnssFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::RefMembers::Bits;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(0U, "fall")
                .add(1U, "last")
                .asMap();
    }
}; // struct RefMembers

static QVariantMap createProps_ref(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaIniTimeGnssFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Ref;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(RefMembers::createProps_source(true))
            .add(RefMembers::createProps_bits(true))
            .asMap();
}

static QVariantMap createProps_gnssId(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaIniTimeGnssFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::GnssId;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_gnssId(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaIniTimeGnssFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res2(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_week(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaIniTimeGnssFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Week;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_tow(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaIniTimeGnssFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Tow;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_itow(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_ns(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaIniTimeGnssFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Ns;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_tAccS(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaIniTimeGnssFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::TAccS;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaIniTimeGnssFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved2;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res2(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_tAccNs(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaIniTimeGnssFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::TAccNs;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_type(false));
    props.append(createProps_version(false));
    props.append(createProps_ref(false));
    props.append(createProps_gnssId(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_week(false));
    props.append(createProps_tow(false));
    props.append(createProps_ns(false));
    props.append(createProps_tAccS(false));
    props.append(createProps_reserved2(false));
    props.append(createProps_tAccNs(false));
    return props;
}

} // namespace

class MgaIniTimeGnssImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::MgaIniTimeGnss<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        MgaIniTimeGnssImpl
    >
{
public:
    MgaIniTimeGnssImpl() = default;
    MgaIniTimeGnssImpl(const MgaIniTimeGnssImpl&) = delete;
    MgaIniTimeGnssImpl(MgaIniTimeGnssImpl&&) = delete;
    virtual ~MgaIniTimeGnssImpl() = default;
    MgaIniTimeGnssImpl& operator=(const MgaIniTimeGnssImpl&) = default;
    MgaIniTimeGnssImpl& operator=(MgaIniTimeGnssImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MgaIniTimeGnss::MgaIniTimeGnss() : m_pImpl(new MgaIniTimeGnssImpl) {}
MgaIniTimeGnss::~MgaIniTimeGnss() = default;

MgaIniTimeGnss& MgaIniTimeGnss::operator=(const MgaIniTimeGnss& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaIniTimeGnss& MgaIniTimeGnss::operator=(MgaIniTimeGnss&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

MgaIniTimeGnss::MsgIdParamType MgaIniTimeGnss::doGetId()
{
    return ::cc_ublox::message::MgaIniTimeGnss<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* MgaIniTimeGnss::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& MgaIniTimeGnss::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MgaIniTimeGnss::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void MgaIniTimeGnss::resetImpl()
{
    m_pImpl->reset();
}

bool MgaIniTimeGnss::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const MgaIniTimeGnss*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MgaIniTimeGnss::MsgIdParamType MgaIniTimeGnss::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MgaIniTimeGnss::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MgaIniTimeGnss::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MgaIniTimeGnss::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MgaIniTimeGnss::lengthImpl() const
{
    return m_pImpl->length();
}

bool MgaIniTimeGnss::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
