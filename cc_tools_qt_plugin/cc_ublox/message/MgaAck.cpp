// Generated by commsdsl2tools_qt v6.3.4

#include "MgaAck.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/MgaAck.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_type(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaAckFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Type;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add("NotUsed", 0)
            .add("Accepted", 1)
            .asMap();
}

static QVariantMap createProps_version(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaAckFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_infoCode(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaAckFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::InfoCode;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add("Accepted", 0)
            .add("TimeNotKnown", 1)
            .add("BadVersion", 2)
            .add("BadSize", 3)
            .add("StorageError", 4)
            .add("NotReady", 5)
            .add("UnknownType", 6)
            .asMap();
}

static QVariantMap createProps_msgId(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaAckFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::MsgId;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_msgPayloadStart(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::MgaAckFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::MsgPayloadStart;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_type(false));
    props.append(createProps_version(false));
    props.append(createProps_infoCode(false));
    props.append(createProps_msgId(false));
    props.append(createProps_msgPayloadStart(false));
    return props;
}

} // namespace

class MgaAckImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::MgaAck<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        MgaAckImpl
    >
{
public:
    MgaAckImpl() = default;
    MgaAckImpl(const MgaAckImpl&) = delete;
    MgaAckImpl(MgaAckImpl&&) = delete;
    virtual ~MgaAckImpl() = default;
    MgaAckImpl& operator=(const MgaAckImpl&) = default;
    MgaAckImpl& operator=(MgaAckImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MgaAck::MgaAck() : m_pImpl(new MgaAckImpl) {}
MgaAck::~MgaAck() = default;

MgaAck& MgaAck::operator=(const MgaAck& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaAck& MgaAck::operator=(MgaAck&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

MgaAck::MsgIdParamType MgaAck::doGetId()
{
    return ::cc_ublox::message::MgaAck<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* MgaAck::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& MgaAck::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MgaAck::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void MgaAck::resetImpl()
{
    m_pImpl->reset();
}

bool MgaAck::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const MgaAck*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MgaAck::MsgIdParamType MgaAck::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MgaAck::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MgaAck::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MgaAck::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MgaAck::lengthImpl() const
{
    return m_pImpl->length();
}

bool MgaAck::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
