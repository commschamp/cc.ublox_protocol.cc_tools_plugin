// Generated by commsdsl2tools_qt v6.3.3

#include "MgaIniTimeUtc.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Day.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Hour.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Min.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Month.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res1.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res2.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Sec.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Year.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/MgaIniTimeUtc.h"

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
    using Field = ::cc_ublox::message::MgaIniTimeUtcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Type;
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
    using Field = ::cc_ublox::message::MgaIniTimeUtcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
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
        using Field = ::cc_ublox::message::MgaIniTimeUtcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::RefMembers::Source;
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
        using Field = ::cc_ublox::message::MgaIniTimeUtcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::RefMembers::Bits;
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
    using Field = ::cc_ublox::message::MgaIniTimeUtcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Ref;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(RefMembers::createProps_source(true))
            .add(RefMembers::createProps_bits(true))
            .asMap();
}

static QVariantMap createProps_leapSecs(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaIniTimeUtcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::LeapSecs;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_year(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaIniTimeUtcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Year;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_year(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_month(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaIniTimeUtcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Month;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_month(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_day(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaIniTimeUtcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Day;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_day(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_hour(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaIniTimeUtcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Hour;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_hour(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_minute(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaIniTimeUtcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Minute;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_min(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_second(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaIniTimeUtcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Second;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_sec(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaIniTimeUtcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res1(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_ns(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaIniTimeUtcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Ns;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_tAccS(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaIniTimeUtcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::TAccS;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaIniTimeUtcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved2;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res2(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_tAccNs(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaIniTimeUtcFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::TAccNs;
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
    props.append(createProps_leapSecs(false));
    props.append(createProps_year(false));
    props.append(createProps_month(false));
    props.append(createProps_day(false));
    props.append(createProps_hour(false));
    props.append(createProps_minute(false));
    props.append(createProps_second(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_ns(false));
    props.append(createProps_tAccS(false));
    props.append(createProps_reserved2(false));
    props.append(createProps_tAccNs(false));
    return props;
}

} // namespace

class MgaIniTimeUtcImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::MgaIniTimeUtc<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        MgaIniTimeUtcImpl
    >
{
public:
    MgaIniTimeUtcImpl() = default;
    MgaIniTimeUtcImpl(const MgaIniTimeUtcImpl&) = delete;
    MgaIniTimeUtcImpl(MgaIniTimeUtcImpl&&) = delete;
    virtual ~MgaIniTimeUtcImpl() = default;
    MgaIniTimeUtcImpl& operator=(const MgaIniTimeUtcImpl&) = default;
    MgaIniTimeUtcImpl& operator=(MgaIniTimeUtcImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MgaIniTimeUtc::MgaIniTimeUtc() : m_pImpl(new MgaIniTimeUtcImpl) {}
MgaIniTimeUtc::~MgaIniTimeUtc() = default;

MgaIniTimeUtc& MgaIniTimeUtc::operator=(const MgaIniTimeUtc& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaIniTimeUtc& MgaIniTimeUtc::operator=(MgaIniTimeUtc&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

MgaIniTimeUtc::MsgIdParamType MgaIniTimeUtc::doGetId()
{
    return ::cc_ublox::message::MgaIniTimeUtc<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* MgaIniTimeUtc::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& MgaIniTimeUtc::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MgaIniTimeUtc::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void MgaIniTimeUtc::resetImpl()
{
    m_pImpl->reset();
}

bool MgaIniTimeUtc::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const MgaIniTimeUtc*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MgaIniTimeUtc::MsgIdParamType MgaIniTimeUtc::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MgaIniTimeUtc::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MgaIniTimeUtc::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MgaIniTimeUtc::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MgaIniTimeUtc::lengthImpl() const
{
    return m_pImpl->length();
}

bool MgaIniTimeUtc::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
