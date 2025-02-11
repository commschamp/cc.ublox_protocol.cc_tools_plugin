// Generated by commsdsl2tools_qt v7.0.3

#include "AckAck.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/AckAck.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class AckAckImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::AckAck,
        AckAckImpl
    >
{
public:
    AckAckImpl() = default;
    AckAckImpl(const AckAckImpl&) = default;
    AckAckImpl(AckAckImpl&&) = default;
    virtual ~AckAckImpl() = default;
    AckAckImpl& operator=(const AckAckImpl&) = default;
    AckAckImpl& operator=(AckAckImpl&&) = default;
};

AckAck::AckAck() : m_pImpl(new AckAckImpl) {}
AckAck::~AckAck() = default;

AckAck& AckAck::operator=(const AckAck& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

AckAck& AckAck::operator=(AckAck&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* AckAck::nameImpl() const
{
    return m_pImpl->name();
}

bool AckAck::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong AckAck::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString AckAck::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void AckAck::resetImpl()
{
    m_pImpl->reset();
}

bool AckAck::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const AckAck*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool AckAck::isValidImpl() const
{
    return m_pImpl->isValid();
}

AckAck::DataSeq AckAck::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool AckAck::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

AckAck::Ptr AckAck::cloneImpl() const
{
    ImplPtr impl(static_cast<AckAckImpl*>(m_pImpl->clone().release()));
    return Ptr(new AckAck(std::move(impl)));
}

void AckAck::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

AckAck::DataSeq AckAck::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

AckAck::FieldsList AckAck::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

AckAck::FieldsList AckAck::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

AckAck::AckAck(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
