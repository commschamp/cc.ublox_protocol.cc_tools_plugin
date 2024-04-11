// Generated by commsdsl2tools_qt v6.3.2

#include "NavAtt.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Itow.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res3.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/NavAtt.h"

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
    using Field = ::cc_ublox::message::NavAttFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Itow;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_itow(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_version(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavAttFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavAttFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res3(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_roll(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavAttFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Roll;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(5U)
            .asMap();
}

static QVariantMap createProps_pitch(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavAttFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Pitch;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(5U)
            .asMap();
}

static QVariantMap createProps_heading(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavAttFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Heading;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(5U)
            .asMap();
}

static QVariantMap createProps_accRoll(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavAttFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::AccRoll;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(5U)
            .asMap();
}

static QVariantMap createProps_accPitch(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavAttFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::AccPitch;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(5U)
            .asMap();
}

static QVariantMap createProps_accHeading(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavAttFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::AccHeading;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(5U)
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_itow(false));
    props.append(createProps_version(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_roll(false));
    props.append(createProps_pitch(false));
    props.append(createProps_heading(false));
    props.append(createProps_accRoll(false));
    props.append(createProps_accPitch(false));
    props.append(createProps_accHeading(false));
    return props;
}

} // namespace

class NavAttImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::NavAtt<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        NavAttImpl
    >
{
public:
    NavAttImpl() = default;
    NavAttImpl(const NavAttImpl&) = delete;
    NavAttImpl(NavAttImpl&&) = delete;
    virtual ~NavAttImpl() = default;
    NavAttImpl& operator=(const NavAttImpl&) = default;
    NavAttImpl& operator=(NavAttImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavAtt::NavAtt() : m_pImpl(new NavAttImpl) {}
NavAtt::~NavAtt() = default;

NavAtt& NavAtt::operator=(const NavAtt& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavAtt& NavAtt::operator=(NavAtt&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

NavAtt::MsgIdParamType NavAtt::doGetId()
{
    return ::cc_ublox::message::NavAtt<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* NavAtt::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavAtt::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavAtt::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavAtt::resetImpl()
{
    m_pImpl->reset();
}

bool NavAtt::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const NavAtt*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavAtt::MsgIdParamType NavAtt::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavAtt::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavAtt::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavAtt::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavAtt::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavAtt::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
