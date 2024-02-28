// Generated by commsdsl2tools_qt v6.3.0

#include "NavPosllh.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/HAcc.h"
#include "cc_tools_qt_plugin/cc_ublox/field/HMSL.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Height.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Itow.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Lat.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Lon.h"
#include "cc_tools_qt_plugin/cc_ublox/field/VAcc.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/NavPosllh.h"

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
    using Field = ::cc_ublox::message::NavPosllhFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Itow;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_itow(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_lon(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavPosllhFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Lon;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_lon(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_lat(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavPosllhFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Lat;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_lat(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_height(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavPosllhFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Height;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_height(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_hMSL(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavPosllhFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::HMSL;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_hMSL(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_hAcc(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavPosllhFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::HAcc;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_hAcc(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_vAcc(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavPosllhFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::VAcc;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_vAcc(Field::name(), serHidden);
    return props;
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_itow(false));
    props.append(createProps_lon(false));
    props.append(createProps_lat(false));
    props.append(createProps_height(false));
    props.append(createProps_hMSL(false));
    props.append(createProps_hAcc(false));
    props.append(createProps_vAcc(false));
    return props;
}

} // namespace

class NavPosllhImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::NavPosllh<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        NavPosllhImpl
    >
{
public:
    NavPosllhImpl() = default;
    NavPosllhImpl(const NavPosllhImpl&) = delete;
    NavPosllhImpl(NavPosllhImpl&&) = delete;
    virtual ~NavPosllhImpl() = default;
    NavPosllhImpl& operator=(const NavPosllhImpl&) = default;
    NavPosllhImpl& operator=(NavPosllhImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavPosllh::NavPosllh() : m_pImpl(new NavPosllhImpl) {}
NavPosllh::~NavPosllh() = default;

NavPosllh& NavPosllh::operator=(const NavPosllh& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavPosllh& NavPosllh::operator=(NavPosllh&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

NavPosllh::MsgIdParamType NavPosllh::doGetId()
{
    return ::cc_ublox::message::NavPosllh<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* NavPosllh::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavPosllh::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavPosllh::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavPosllh::resetImpl()
{
    m_pImpl->reset();
}

bool NavPosllh::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const NavPosllh*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavPosllh::MsgIdParamType NavPosllh::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavPosllh::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavPosllh::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavPosllh::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavPosllh::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavPosllh::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
