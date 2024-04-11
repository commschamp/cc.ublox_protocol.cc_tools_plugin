// Generated by commsdsl2tools_qt v6.3.2

#include "NavGeofence.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/GeofenceState.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Itow.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/NavGeofence.h"

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
    using Field = ::cc_ublox::message::NavGeofenceFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Itow;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_itow(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_version(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavGeofenceFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_status(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavGeofenceFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Status;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add("Not available", 0)
            .add("Active", 1)
            .asMap();
}

static QVariantMap createProps_numFences(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavGeofenceFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::NumFences;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .readOnly()
            .asMap();
}

static QVariantMap createProps_combState(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavGeofenceFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::CombState;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_geofenceState(Field::name(), serHidden);
    return props;
}

struct ListMembers
{
    struct ElementMembers
    {
        static QVariantMap createProps_state(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::NavGeofenceFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::State;
            auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_geofenceState(Field::name(), serHidden);
            return props;
        }

        static QVariantMap createProps_id(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::NavGeofenceFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Id;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .addSpecial("NotAvailable", 0)
                    .asMap();
        }
    }; // struct ElementMembers

    static QVariantMap createProps_element(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::NavGeofenceFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::Element;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(ElementMembers::createProps_state(serHidden))
                .add(ElementMembers::createProps_id(serHidden))
                .serialisedHidden()
                .asMap();
    }
}; // struct ListMembers

static QVariantMap createProps_list(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavGeofenceFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::List;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .serialisedHidden()
            .add(ListMembers::createProps_element(serHidden))
            .appendIndexToElementName()
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_itow(false));
    props.append(createProps_version(false));
    props.append(createProps_status(false));
    props.append(createProps_numFences(false));
    props.append(createProps_combState(false));
    props.append(createProps_list(false));
    return props;
}

} // namespace

class NavGeofenceImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::NavGeofence<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        NavGeofenceImpl
    >
{
public:
    NavGeofenceImpl() = default;
    NavGeofenceImpl(const NavGeofenceImpl&) = delete;
    NavGeofenceImpl(NavGeofenceImpl&&) = delete;
    virtual ~NavGeofenceImpl() = default;
    NavGeofenceImpl& operator=(const NavGeofenceImpl&) = default;
    NavGeofenceImpl& operator=(NavGeofenceImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavGeofence::NavGeofence() : m_pImpl(new NavGeofenceImpl) {}
NavGeofence::~NavGeofence() = default;

NavGeofence& NavGeofence::operator=(const NavGeofence& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavGeofence& NavGeofence::operator=(NavGeofence&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

NavGeofence::MsgIdParamType NavGeofence::doGetId()
{
    return ::cc_ublox::message::NavGeofence<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* NavGeofence::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavGeofence::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavGeofence::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavGeofence::resetImpl()
{
    m_pImpl->reset();
}

bool NavGeofence::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const NavGeofence*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavGeofence::MsgIdParamType NavGeofence::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavGeofence::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavGeofence::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavGeofence::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavGeofence::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavGeofence::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
