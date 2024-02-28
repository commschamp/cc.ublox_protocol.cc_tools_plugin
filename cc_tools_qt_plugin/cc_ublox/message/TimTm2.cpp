// Generated by commsdsl2tools_qt v6.3.0

#include "TimTm2.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/TimTm2.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_ch(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::TimTm2Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Ch;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

struct FlagsMembers
{
    static QVariantMap createProps_bitsLow(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::TimTm2Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FlagsMembers::BitsLow;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(0U, "mode")
                .add(1U, "run")
                .add(2U, "newFallingEdge")
                .asMap();
    }

    static QVariantMap createProps_timeBase(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::TimTm2Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FlagsMembers::TimeBase;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add("Receiver", 0)
                .add("GNSS", 1)
                .add("UTC", 2)
                .asMap();
    }

    static QVariantMap createProps_bitsHigh(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::TimTm2Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FlagsMembers::BitsHigh;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(0U, "utc")
                .add(1U, "time")
                .add(2U, "newRisingEdge")
                .asMap();
    }
}; // struct FlagsMembers

static QVariantMap createProps_flags(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::TimTm2Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Flags;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(FlagsMembers::createProps_bitsLow(true))
            .add(FlagsMembers::createProps_timeBase(true))
            .add(FlagsMembers::createProps_bitsHigh(true))
            .asMap();
}

static QVariantMap createProps_count(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::TimTm2Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Count;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_wnR(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::TimTm2Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::WnR;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_wnF(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::TimTm2Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::WnF;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_towMsR(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::TimTm2Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::TowMsR;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_towSubMsR(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::TimTm2Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::TowSubMsR;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_towMsF(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::TimTm2Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::TowMsF;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_towSubMsF(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::TimTm2Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::TowSubMsF;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_accEst(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::TimTm2Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::AccEst;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_ch(false));
    props.append(createProps_flags(false));
    props.append(createProps_count(false));
    props.append(createProps_wnR(false));
    props.append(createProps_wnF(false));
    props.append(createProps_towMsR(false));
    props.append(createProps_towSubMsR(false));
    props.append(createProps_towMsF(false));
    props.append(createProps_towSubMsF(false));
    props.append(createProps_accEst(false));
    return props;
}

} // namespace

class TimTm2Impl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::TimTm2<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        TimTm2Impl
    >
{
public:
    TimTm2Impl() = default;
    TimTm2Impl(const TimTm2Impl&) = delete;
    TimTm2Impl(TimTm2Impl&&) = delete;
    virtual ~TimTm2Impl() = default;
    TimTm2Impl& operator=(const TimTm2Impl&) = default;
    TimTm2Impl& operator=(TimTm2Impl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

TimTm2::TimTm2() : m_pImpl(new TimTm2Impl) {}
TimTm2::~TimTm2() = default;

TimTm2& TimTm2::operator=(const TimTm2& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

TimTm2& TimTm2::operator=(TimTm2&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

TimTm2::MsgIdParamType TimTm2::doGetId()
{
    return ::cc_ublox::message::TimTm2<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* TimTm2::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& TimTm2::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void TimTm2::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void TimTm2::resetImpl()
{
    m_pImpl->reset();
}

bool TimTm2::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const TimTm2*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

TimTm2::MsgIdParamType TimTm2::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus TimTm2::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus TimTm2::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool TimTm2::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t TimTm2::lengthImpl() const
{
    return m_pImpl->length();
}

bool TimTm2::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
