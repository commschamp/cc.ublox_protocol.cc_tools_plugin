// Generated by commsdsl2tools_qt v6.3.0

#include "RxmRlmShort.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res1.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/RxmRlmShort.h"

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
    using Field = ::cc_ublox::message::RxmRlmShortFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_type(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmRlmShortFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Type;
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
    using Field = ::cc_ublox::message::RxmRlmShortFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Svid;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmRlmShortFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res1(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_beacon(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmRlmShortFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Beacon;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_message(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmRlmShortFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Message;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_params(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmRlmShortFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Params;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::RxmRlmShortFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved2;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res1(Field::name(), serHidden);
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

class RxmRlmShortImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::RxmRlmShort<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        RxmRlmShortImpl
    >
{
public:
    RxmRlmShortImpl() = default;
    RxmRlmShortImpl(const RxmRlmShortImpl&) = delete;
    RxmRlmShortImpl(RxmRlmShortImpl&&) = delete;
    virtual ~RxmRlmShortImpl() = default;
    RxmRlmShortImpl& operator=(const RxmRlmShortImpl&) = default;
    RxmRlmShortImpl& operator=(RxmRlmShortImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

RxmRlmShort::RxmRlmShort() : m_pImpl(new RxmRlmShortImpl) {}
RxmRlmShort::~RxmRlmShort() = default;

RxmRlmShort& RxmRlmShort::operator=(const RxmRlmShort& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

RxmRlmShort& RxmRlmShort::operator=(RxmRlmShort&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

RxmRlmShort::MsgIdParamType RxmRlmShort::doGetId()
{
    return ::cc_ublox::message::RxmRlmShort<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* RxmRlmShort::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& RxmRlmShort::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void RxmRlmShort::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void RxmRlmShort::resetImpl()
{
    m_pImpl->reset();
}

bool RxmRlmShort::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const RxmRlmShort*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

RxmRlmShort::MsgIdParamType RxmRlmShort::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus RxmRlmShort::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus RxmRlmShort::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool RxmRlmShort::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t RxmRlmShort::lengthImpl() const
{
    return m_pImpl->length();
}

bool RxmRlmShort::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
