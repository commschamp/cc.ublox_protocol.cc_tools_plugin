// Generated by commsdsl2tools_qt v7.1.0

#include "SecUniqidPoll.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/SecUniqidPoll.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class SecUniqidPollImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::SecUniqidPoll,
        SecUniqidPollImpl
    >
{
public:
    SecUniqidPollImpl() = default;
    SecUniqidPollImpl(const SecUniqidPollImpl&) = default;
    SecUniqidPollImpl(SecUniqidPollImpl&&) = default;
    virtual ~SecUniqidPollImpl() = default;
    SecUniqidPollImpl& operator=(const SecUniqidPollImpl&) = default;
    SecUniqidPollImpl& operator=(SecUniqidPollImpl&&) = default;
};

SecUniqidPoll::SecUniqidPoll() : m_pImpl(new SecUniqidPollImpl) {}
SecUniqidPoll::~SecUniqidPoll() = default;

SecUniqidPoll& SecUniqidPoll::operator=(const SecUniqidPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

SecUniqidPoll& SecUniqidPoll::operator=(SecUniqidPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* SecUniqidPoll::nameImpl() const
{
    return m_pImpl->name();
}

bool SecUniqidPoll::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong SecUniqidPoll::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString SecUniqidPoll::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void SecUniqidPoll::resetImpl()
{
    m_pImpl->reset();
}

bool SecUniqidPoll::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const SecUniqidPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool SecUniqidPoll::isValidImpl() const
{
    return m_pImpl->isValid();
}

SecUniqidPoll::DataSeq SecUniqidPoll::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool SecUniqidPoll::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

SecUniqidPoll::Ptr SecUniqidPoll::cloneImpl() const
{
    ImplPtr impl(static_cast<SecUniqidPollImpl*>(m_pImpl->clone().release()));
    return Ptr(new SecUniqidPoll(std::move(impl)));
}

void SecUniqidPoll::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

SecUniqidPoll::DataSeq SecUniqidPoll::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

SecUniqidPoll::FieldsList SecUniqidPoll::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

SecUniqidPoll::FieldsList SecUniqidPoll::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

SecUniqidPoll::SecUniqidPoll(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
