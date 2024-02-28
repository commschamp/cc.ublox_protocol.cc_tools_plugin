// Generated by commsdsl2tools_qt v6.3.0

#include "NavOdo.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Itow.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res3.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/NavOdo.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_version(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavOdoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavOdoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res3(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_itow(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavOdoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Itow;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_itow(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_distance(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavOdoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Distance;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_totalDistance(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavOdoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::TotalDistance;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_distanceStd(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavOdoFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::DistanceStd;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_itow(false));
    props.append(createProps_distance(false));
    props.append(createProps_totalDistance(false));
    props.append(createProps_distanceStd(false));
    return props;
}

} // namespace

class NavOdoImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::NavOdo<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        NavOdoImpl
    >
{
public:
    NavOdoImpl() = default;
    NavOdoImpl(const NavOdoImpl&) = delete;
    NavOdoImpl(NavOdoImpl&&) = delete;
    virtual ~NavOdoImpl() = default;
    NavOdoImpl& operator=(const NavOdoImpl&) = default;
    NavOdoImpl& operator=(NavOdoImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavOdo::NavOdo() : m_pImpl(new NavOdoImpl) {}
NavOdo::~NavOdo() = default;

NavOdo& NavOdo::operator=(const NavOdo& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavOdo& NavOdo::operator=(NavOdo&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

NavOdo::MsgIdParamType NavOdo::doGetId()
{
    return ::cc_ublox::message::NavOdo<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* NavOdo::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavOdo::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavOdo::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavOdo::resetImpl()
{
    m_pImpl->reset();
}

bool NavOdo::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const NavOdo*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavOdo::MsgIdParamType NavOdo::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavOdo::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavOdo::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavOdo::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavOdo::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavOdo::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
