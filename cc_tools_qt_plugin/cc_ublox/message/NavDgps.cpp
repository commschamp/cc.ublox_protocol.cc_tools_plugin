// Generated by commsdsl2tools_qt v6.3.3

#include "NavDgps.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Itow.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res2.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/NavDgps.h"

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
    using Field = ::cc_ublox::message::NavDgpsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Itow;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_itow(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_age(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavDgpsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Age;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_baseId(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavDgpsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::BaseId;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_baseHealth(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavDgpsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::BaseHealth;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_numCh(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavDgpsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::NumCh;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .readOnly()
            .asMap();
}

static QVariantMap createProps_status(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavDgpsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Status;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add("None", 0)
            .add("PR + PRR correction", 1)
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavDgpsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res2(Field::name(), serHidden);
    return props;
}

struct ListMembers
{
    struct ElementMembers
    {
        static QVariantMap createProps_svid(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::NavDgpsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Svid;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        struct FlagsMembers
        {
            static QVariantMap createProps_channel(bool serHidden)
            {
                static_cast<void>(serHidden);
                using Field = ::cc_ublox::message::NavDgpsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::FlagsMembers::Channel;
                return
                    cc_tools_qt::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden(serHidden)
                        .asMap();
            }

            static QVariantMap createProps_bits(bool serHidden)
            {
                static_cast<void>(serHidden);
                using Field = ::cc_ublox::message::NavDgpsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::FlagsMembers::Bits;
                return
                    cc_tools_qt::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden(serHidden)
                        .add(0U, "dgpsUsed")
                        .asMap();
            }
        }; // struct FlagsMembers

        static QVariantMap createProps_flags(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::NavDgpsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Flags;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .add(FlagsMembers::createProps_channel(true))
                    .add(FlagsMembers::createProps_bits(true))
                    .asMap();
        }

        static QVariantMap createProps_ageC(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::NavDgpsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::AgeC;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_prc(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::NavDgpsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Prc;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_prrc(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::NavDgpsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Prrc;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }
    }; // struct ElementMembers

    static QVariantMap createProps_element(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::NavDgpsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::Element;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(ElementMembers::createProps_svid(serHidden))
                .add(ElementMembers::createProps_flags(serHidden))
                .add(ElementMembers::createProps_ageC(serHidden))
                .add(ElementMembers::createProps_prc(serHidden))
                .add(ElementMembers::createProps_prrc(serHidden))
                .serialisedHidden()
                .asMap();
    }
}; // struct ListMembers

static QVariantMap createProps_list(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavDgpsFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::List;
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
    props.append(createProps_age(false));
    props.append(createProps_baseId(false));
    props.append(createProps_baseHealth(false));
    props.append(createProps_numCh(false));
    props.append(createProps_status(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_list(false));
    return props;
}

} // namespace

class NavDgpsImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::NavDgps<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        NavDgpsImpl
    >
{
public:
    NavDgpsImpl() = default;
    NavDgpsImpl(const NavDgpsImpl&) = delete;
    NavDgpsImpl(NavDgpsImpl&&) = delete;
    virtual ~NavDgpsImpl() = default;
    NavDgpsImpl& operator=(const NavDgpsImpl&) = default;
    NavDgpsImpl& operator=(NavDgpsImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavDgps::NavDgps() : m_pImpl(new NavDgpsImpl) {}
NavDgps::~NavDgps() = default;

NavDgps& NavDgps::operator=(const NavDgps& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavDgps& NavDgps::operator=(NavDgps&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

NavDgps::MsgIdParamType NavDgps::doGetId()
{
    return ::cc_ublox::message::NavDgps<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* NavDgps::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavDgps::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavDgps::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavDgps::resetImpl()
{
    m_pImpl->reset();
}

bool NavDgps::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const NavDgps*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavDgps::MsgIdParamType NavDgps::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavDgps::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavDgps::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavDgps::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavDgps::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavDgps::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
