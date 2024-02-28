// Generated by commsdsl2tools_qt v6.3.0

#include "NavClock.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Itow.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/NavClock.h"

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
    using Field = ::cc_ublox::message::NavClockFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Itow;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_itow(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_clkB(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavClockFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ClkB;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_clkD(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavClockFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ClkD;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_tAcc(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavClockFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::TAcc;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_fAcc(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavClockFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::FAcc;
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
    props.append(createProps_clkB(false));
    props.append(createProps_clkD(false));
    props.append(createProps_tAcc(false));
    props.append(createProps_fAcc(false));
    return props;
}

} // namespace

class NavClockImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::NavClock<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        NavClockImpl
    >
{
public:
    NavClockImpl() = default;
    NavClockImpl(const NavClockImpl&) = delete;
    NavClockImpl(NavClockImpl&&) = delete;
    virtual ~NavClockImpl() = default;
    NavClockImpl& operator=(const NavClockImpl&) = default;
    NavClockImpl& operator=(NavClockImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavClock::NavClock() : m_pImpl(new NavClockImpl) {}
NavClock::~NavClock() = default;

NavClock& NavClock::operator=(const NavClock& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavClock& NavClock::operator=(NavClock&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

NavClock::MsgIdParamType NavClock::doGetId()
{
    return ::cc_ublox::message::NavClock<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* NavClock::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavClock::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavClock::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavClock::resetImpl()
{
    m_pImpl->reset();
}

bool NavClock::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const NavClock*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavClock::MsgIdParamType NavClock::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavClock::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavClock::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavClock::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavClock::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavClock::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin