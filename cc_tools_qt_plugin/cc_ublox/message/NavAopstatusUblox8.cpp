// Generated by commsdsl2tools_qt v6.3.4

#include "NavAopstatusUblox8.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Itow.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res2.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res4.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/NavAopstatusUblox8.h"

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
    using Field = ::cc_ublox::message::NavAopstatusUblox8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Itow;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_itow(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_aopCfg(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavAopstatusUblox8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::AopCfg;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(0U, "useAOP")
            .asMap();
}

static QVariantMap createProps_status(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavAopstatusUblox8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Status;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavAopstatusUblox8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res2(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_reserved2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavAopstatusUblox8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved2;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res4(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_reserved3(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::NavAopstatusUblox8Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved3;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res4(Field::name(), serHidden);
    return props;
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_itow(false));
    props.append(createProps_aopCfg(false));
    props.append(createProps_status(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_reserved2(false));
    props.append(createProps_reserved3(false));
    return props;
}

} // namespace

class NavAopstatusUblox8Impl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::NavAopstatusUblox8<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        NavAopstatusUblox8Impl
    >
{
public:
    NavAopstatusUblox8Impl() = default;
    NavAopstatusUblox8Impl(const NavAopstatusUblox8Impl&) = delete;
    NavAopstatusUblox8Impl(NavAopstatusUblox8Impl&&) = delete;
    virtual ~NavAopstatusUblox8Impl() = default;
    NavAopstatusUblox8Impl& operator=(const NavAopstatusUblox8Impl&) = default;
    NavAopstatusUblox8Impl& operator=(NavAopstatusUblox8Impl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavAopstatusUblox8::NavAopstatusUblox8() : m_pImpl(new NavAopstatusUblox8Impl) {}
NavAopstatusUblox8::~NavAopstatusUblox8() = default;

NavAopstatusUblox8& NavAopstatusUblox8::operator=(const NavAopstatusUblox8& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavAopstatusUblox8& NavAopstatusUblox8::operator=(NavAopstatusUblox8&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

NavAopstatusUblox8::MsgIdParamType NavAopstatusUblox8::doGetId()
{
    return ::cc_ublox::message::NavAopstatusUblox8<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* NavAopstatusUblox8::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavAopstatusUblox8::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavAopstatusUblox8::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavAopstatusUblox8::resetImpl()
{
    m_pImpl->reset();
}

bool NavAopstatusUblox8::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const NavAopstatusUblox8*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavAopstatusUblox8::MsgIdParamType NavAopstatusUblox8::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavAopstatusUblox8::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavAopstatusUblox8::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavAopstatusUblox8::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavAopstatusUblox8::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavAopstatusUblox8::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
