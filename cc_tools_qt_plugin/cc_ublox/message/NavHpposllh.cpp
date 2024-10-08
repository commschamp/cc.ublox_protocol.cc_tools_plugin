// Generated by commsdsl2tools_qt v6.3.4

#include "NavHpposllh.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/HMSL.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Height.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Itow.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Lat.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Lon.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res2.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/NavHpposllh.h"

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
    using Field = ::cc_ublox::message::NavHpposllhFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavHpposllhFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res2(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_flags(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavHpposllhFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Flags;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(0U, "invalidLlh")
            .asMap();
}

static QVariantMap createProps_itow(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavHpposllhFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Itow;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_itow(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_lon(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavHpposllhFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Lon;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_lon(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_lat(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavHpposllhFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Lat;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_lat(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_height(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavHpposllhFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Height;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_height(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_hMSL(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavHpposllhFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::HMSL;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_hMSL(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_lonHp(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavHpposllhFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::LonHp;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(9U)
            .asMap();
}

static QVariantMap createProps_latHp(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavHpposllhFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::LatHp;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(9U)
            .asMap();
}

static QVariantMap createProps_heigthHp(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavHpposllhFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::HeigthHp;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(1U)
            .asMap();
}

static QVariantMap createProps_hMSLHp(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavHpposllhFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::HMSLHp;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(1U)
            .asMap();
}

static QVariantMap createProps_hAcc(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavHpposllhFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::HAcc;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(1U)
            .asMap();
}

static QVariantMap createProps_vAcc(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavHpposllhFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::VAcc;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(1U)
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_flags(false));
    props.append(createProps_itow(false));
    props.append(createProps_lon(false));
    props.append(createProps_lat(false));
    props.append(createProps_height(false));
    props.append(createProps_hMSL(false));
    props.append(createProps_lonHp(false));
    props.append(createProps_latHp(false));
    props.append(createProps_heigthHp(false));
    props.append(createProps_hMSLHp(false));
    props.append(createProps_hAcc(false));
    props.append(createProps_vAcc(false));
    return props;
}

} // namespace

class NavHpposllhImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::NavHpposllh<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        NavHpposllhImpl
    >
{
public:
    NavHpposllhImpl() = default;
    NavHpposllhImpl(const NavHpposllhImpl&) = delete;
    NavHpposllhImpl(NavHpposllhImpl&&) = delete;
    virtual ~NavHpposllhImpl() = default;
    NavHpposllhImpl& operator=(const NavHpposllhImpl&) = default;
    NavHpposllhImpl& operator=(NavHpposllhImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavHpposllh::NavHpposllh() : m_pImpl(new NavHpposllhImpl) {}
NavHpposllh::~NavHpposllh() = default;

NavHpposllh& NavHpposllh::operator=(const NavHpposllh& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavHpposllh& NavHpposllh::operator=(NavHpposllh&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

NavHpposllh::MsgIdParamType NavHpposllh::doGetId()
{
    return ::cc_ublox::message::NavHpposllh<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* NavHpposllh::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavHpposllh::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavHpposllh::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavHpposllh::resetImpl()
{
    m_pImpl->reset();
}

bool NavHpposllh::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const NavHpposllh*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavHpposllh::MsgIdParamType NavHpposllh::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavHpposllh::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavHpposllh::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavHpposllh::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavHpposllh::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavHpposllh::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
