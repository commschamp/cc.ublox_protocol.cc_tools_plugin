// Generated by commsdsl2tools_qt v6.3.0

#include "NavSvin.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Itow.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res1.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res2.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res3.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/NavSvin.h"

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
    using Field = ::cc_ublox::message::NavSvinFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSvinFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res3(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_itow(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSvinFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Itow;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_itow(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_dur(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSvinFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Dur;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_meanX(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSvinFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::MeanX;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_meanY(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSvinFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::MeanY;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_meanZ(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSvinFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::MeanZ;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_meanXHP(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSvinFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::MeanXHP;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(1U)
            .asMap();
}

static QVariantMap createProps_meanYHP(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSvinFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::MeanYHP;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(1U)
            .asMap();
}

static QVariantMap createProps_meanZHP(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSvinFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::MeanZHP;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(1U)
            .asMap();
}

static QVariantMap createProps_reserved2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSvinFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved2;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res1(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_meanAcc(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSvinFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::MeanAcc;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .scaledDecimals(1U)
            .asMap();
}

static QVariantMap createProps_obs(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSvinFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Obs;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_valid(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSvinFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Valid;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_active(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSvinFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Active;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved3(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavSvinFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved3;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res2(Field::name(), serHidden);
    return props;
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_itow(false));
    props.append(createProps_dur(false));
    props.append(createProps_meanX(false));
    props.append(createProps_meanY(false));
    props.append(createProps_meanZ(false));
    props.append(createProps_meanXHP(false));
    props.append(createProps_meanYHP(false));
    props.append(createProps_meanZHP(false));
    props.append(createProps_reserved2(false));
    props.append(createProps_meanAcc(false));
    props.append(createProps_obs(false));
    props.append(createProps_valid(false));
    props.append(createProps_active(false));
    props.append(createProps_reserved3(false));
    return props;
}

} // namespace

class NavSvinImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::NavSvin<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        NavSvinImpl
    >
{
public:
    NavSvinImpl() = default;
    NavSvinImpl(const NavSvinImpl&) = delete;
    NavSvinImpl(NavSvinImpl&&) = delete;
    virtual ~NavSvinImpl() = default;
    NavSvinImpl& operator=(const NavSvinImpl&) = default;
    NavSvinImpl& operator=(NavSvinImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavSvin::NavSvin() : m_pImpl(new NavSvinImpl) {}
NavSvin::~NavSvin() = default;

NavSvin& NavSvin::operator=(const NavSvin& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavSvin& NavSvin::operator=(NavSvin&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

NavSvin::MsgIdParamType NavSvin::doGetId()
{
    return ::cc_ublox::message::NavSvin<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* NavSvin::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavSvin::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavSvin::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavSvin::resetImpl()
{
    m_pImpl->reset();
}

bool NavSvin::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const NavSvin*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavSvin::MsgIdParamType NavSvin::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavSvin::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavSvin::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavSvin::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavSvin::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavSvin::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin