// Generated by commsdsl2tools_qt v6.3.4

#include "RxmRlmLong.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res1.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res3.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/RxmRlmLong.h"

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
    using Field = ::cc_ublox::message::RxmRlmLongFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_type(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmRlmLongFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Type;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .readOnly()
            .asMap();
}

static QVariantMap createProps_svid(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmRlmLongFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Svid;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmRlmLongFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res1(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_beacon(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmRlmLongFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Beacon;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_message(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmRlmLongFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Message;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_params(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmRlmLongFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Params;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmRlmLongFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved2;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res3(Field::name(), serHidden);
    return props;
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version(false));
    props.append(createProps_type(false));
    props.append(createProps_svid(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_beacon(false));
    props.append(createProps_message(false));
    props.append(createProps_params(false));
    props.append(createProps_reserved2(false));
    return props;
}

} // namespace

class RxmRlmLongImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::RxmRlmLong<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        RxmRlmLongImpl
    >
{
public:
    RxmRlmLongImpl() = default;
    RxmRlmLongImpl(const RxmRlmLongImpl&) = delete;
    RxmRlmLongImpl(RxmRlmLongImpl&&) = delete;
    virtual ~RxmRlmLongImpl() = default;
    RxmRlmLongImpl& operator=(const RxmRlmLongImpl&) = default;
    RxmRlmLongImpl& operator=(RxmRlmLongImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

RxmRlmLong::RxmRlmLong() : m_pImpl(new RxmRlmLongImpl) {}
RxmRlmLong::~RxmRlmLong() = default;

RxmRlmLong& RxmRlmLong::operator=(const RxmRlmLong& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

RxmRlmLong& RxmRlmLong::operator=(RxmRlmLong&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

RxmRlmLong::MsgIdParamType RxmRlmLong::doGetId()
{
    return ::cc_ublox::message::RxmRlmLong<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* RxmRlmLong::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& RxmRlmLong::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void RxmRlmLong::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void RxmRlmLong::resetImpl()
{
    m_pImpl->reset();
}

bool RxmRlmLong::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const RxmRlmLong*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

RxmRlmLong::MsgIdParamType RxmRlmLong::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus RxmRlmLong::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus RxmRlmLong::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool RxmRlmLong::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t RxmRlmLong::lengthImpl() const
{
    return m_pImpl->length();
}

bool RxmRlmLong::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
