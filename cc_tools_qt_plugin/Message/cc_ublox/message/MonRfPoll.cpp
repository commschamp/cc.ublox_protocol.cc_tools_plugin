// Generated by commsdsl2tools_qt v7.0.0

#include "MonRfPoll.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/MonRfPoll.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class MonRfPollImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::MonRfPoll,
        MonRfPollImpl
    >
{
public:
    MonRfPollImpl() = default;
    MonRfPollImpl(const MonRfPollImpl&) = default;
    MonRfPollImpl(MonRfPollImpl&&) = default;
    virtual ~MonRfPollImpl() = default;
    MonRfPollImpl& operator=(const MonRfPollImpl&) = default;
    MonRfPollImpl& operator=(MonRfPollImpl&&) = default;
};

MonRfPoll::MonRfPoll() : m_pImpl(new MonRfPollImpl) {}
MonRfPoll::~MonRfPoll() = default;

MonRfPoll& MonRfPoll::operator=(const MonRfPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonRfPoll& MonRfPoll::operator=(MonRfPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MonRfPoll::nameImpl() const
{
    return m_pImpl->name();
}

bool MonRfPoll::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong MonRfPoll::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString MonRfPoll::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void MonRfPoll::resetImpl()
{
    m_pImpl->reset();
}

bool MonRfPoll::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const MonRfPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool MonRfPoll::isValidImpl() const
{
    return m_pImpl->isValid();
}

MonRfPoll::DataSeq MonRfPoll::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool MonRfPoll::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

MonRfPoll::Ptr MonRfPoll::cloneImpl() const
{
    ImplPtr impl(static_cast<MonRfPollImpl*>(m_pImpl->clone().release()));
    return Ptr(new MonRfPoll(std::move(impl)));
}

void MonRfPoll::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

MonRfPoll::DataSeq MonRfPoll::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

MonRfPoll::FieldsList MonRfPoll::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

MonRfPoll::FieldsList MonRfPoll::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

MonRfPoll::MonRfPoll(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
