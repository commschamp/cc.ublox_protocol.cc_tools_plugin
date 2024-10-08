// Generated by commsdsl2tools_qt v6.3.4

#include "NavSlas.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/GnssId.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Itow.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res3.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res4.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/NavSlas.h"

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
    using Field = ::cc_ublox::message::NavSlasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Itow;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_itow(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_version(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSlasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved0(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSlasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved0;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res3(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_gmsLon(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSlasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::GmsLon;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(3U)
            .asMap();
}

static QVariantMap createProps_gmsLat(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSlasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::GmsLat;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(3U)
            .asMap();
}

static QVariantMap createProps_gmsCode(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSlasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::GmsCode;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_qzssSvId(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSlasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::QzssSvId;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_serviceFlags(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSlasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ServiceFlags;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(0U, "gmsAvailable")
            .add(1U, "qzssSvAvailable")
            .add(2U, "testMode")
            .asMap();
}

static QVariantMap createProps_cnt(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSlasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Cnt;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .readOnly()
            .asMap();
}

struct ListMembers
{
    struct ElementMembers
    {
        static QVariantMap createProps_gnssId(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::NavSlasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::GnssId;
            auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_gnssId(Field::name(), serHidden);
            return props;
        }

        static QVariantMap createProps_svid(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::NavSlasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Svid;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_sigId(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::NavSlasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::SigId;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_reserved1(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::NavSlasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Reserved1;
            auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res4(Field::name(), serHidden);
            return props;
        }

        static QVariantMap createProps_prc(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::NavSlasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::ElementMembers::Prc;
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
        using Field = ::cc_ublox::message::NavSlasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ListMembers::Element;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(ElementMembers::createProps_gnssId(serHidden))
                .add(ElementMembers::createProps_svid(serHidden))
                .add(ElementMembers::createProps_sigId(serHidden))
                .add(ElementMembers::createProps_reserved1(serHidden))
                .add(ElementMembers::createProps_prc(serHidden))
                .serialisedHidden()
                .asMap();
    }
}; // struct ListMembers

static QVariantMap createProps_list(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSlasFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::List;
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
    props.append(createProps_reserved0(false));
    props.append(createProps_gmsLon(false));
    props.append(createProps_gmsLat(false));
    props.append(createProps_gmsCode(false));
    props.append(createProps_qzssSvId(false));
    props.append(createProps_serviceFlags(false));
    props.append(createProps_cnt(false));
    props.append(createProps_list(false));
    return props;
}

} // namespace

class NavSlasImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::NavSlas<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        NavSlasImpl
    >
{
public:
    NavSlasImpl() = default;
    NavSlasImpl(const NavSlasImpl&) = delete;
    NavSlasImpl(NavSlasImpl&&) = delete;
    virtual ~NavSlasImpl() = default;
    NavSlasImpl& operator=(const NavSlasImpl&) = default;
    NavSlasImpl& operator=(NavSlasImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavSlas::NavSlas() : m_pImpl(new NavSlasImpl) {}
NavSlas::~NavSlas() = default;

NavSlas& NavSlas::operator=(const NavSlas& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavSlas& NavSlas::operator=(NavSlas&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

NavSlas::MsgIdParamType NavSlas::doGetId()
{
    return ::cc_ublox::message::NavSlas<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* NavSlas::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavSlas::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavSlas::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavSlas::resetImpl()
{
    m_pImpl->reset();
}

bool NavSlas::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const NavSlas*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavSlas::MsgIdParamType NavSlas::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavSlas::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavSlas::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavSlas::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavSlas::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavSlas::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
