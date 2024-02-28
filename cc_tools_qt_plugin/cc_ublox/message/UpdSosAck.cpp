// Generated by commsdsl2tools_qt v6.3.0

#include "UpdSosAck.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res3.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/UpdSosAck.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_cmd(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::UpdSosAckFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Cmd;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .readOnly()
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::UpdSosAckFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res3(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_response(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::UpdSosAckFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Response;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add("NotAcknowledged", 0)
            .add("Acknowledged", 1)
            .asMap();
}

static QVariantMap createProps_reserved2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::UpdSosAckFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved2;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res3(Field::name(), serHidden);
    return props;
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_cmd(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_response(false));
    props.append(createProps_reserved2(false));
    return props;
}

} // namespace

class UpdSosAckImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::UpdSosAck<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        UpdSosAckImpl
    >
{
public:
    UpdSosAckImpl() = default;
    UpdSosAckImpl(const UpdSosAckImpl&) = delete;
    UpdSosAckImpl(UpdSosAckImpl&&) = delete;
    virtual ~UpdSosAckImpl() = default;
    UpdSosAckImpl& operator=(const UpdSosAckImpl&) = default;
    UpdSosAckImpl& operator=(UpdSosAckImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

UpdSosAck::UpdSosAck() : m_pImpl(new UpdSosAckImpl) {}
UpdSosAck::~UpdSosAck() = default;

UpdSosAck& UpdSosAck::operator=(const UpdSosAck& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

UpdSosAck& UpdSosAck::operator=(UpdSosAck&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

UpdSosAck::MsgIdParamType UpdSosAck::doGetId()
{
    return ::cc_ublox::message::UpdSosAck<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* UpdSosAck::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& UpdSosAck::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void UpdSosAck::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void UpdSosAck::resetImpl()
{
    m_pImpl->reset();
}

bool UpdSosAck::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const UpdSosAck*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

UpdSosAck::MsgIdParamType UpdSosAck::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus UpdSosAck::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus UpdSosAck::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool UpdSosAck::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t UpdSosAck::lengthImpl() const
{
    return m_pImpl->length();
}

bool UpdSosAck::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
