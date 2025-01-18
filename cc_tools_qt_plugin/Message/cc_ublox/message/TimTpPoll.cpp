// Generated by commsdsl2tools_qt v7.0.2

#include "TimTpPoll.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/TimTpPoll.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class TimTpPollImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::TimTpPoll,
        TimTpPollImpl
    >
{
public:
    TimTpPollImpl() = default;
    TimTpPollImpl(const TimTpPollImpl&) = default;
    TimTpPollImpl(TimTpPollImpl&&) = default;
    virtual ~TimTpPollImpl() = default;
    TimTpPollImpl& operator=(const TimTpPollImpl&) = default;
    TimTpPollImpl& operator=(TimTpPollImpl&&) = default;
};

TimTpPoll::TimTpPoll() : m_pImpl(new TimTpPollImpl) {}
TimTpPoll::~TimTpPoll() = default;

TimTpPoll& TimTpPoll::operator=(const TimTpPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

TimTpPoll& TimTpPoll::operator=(TimTpPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* TimTpPoll::nameImpl() const
{
    return m_pImpl->name();
}

bool TimTpPoll::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong TimTpPoll::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString TimTpPoll::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void TimTpPoll::resetImpl()
{
    m_pImpl->reset();
}

bool TimTpPoll::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const TimTpPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool TimTpPoll::isValidImpl() const
{
    return m_pImpl->isValid();
}

TimTpPoll::DataSeq TimTpPoll::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool TimTpPoll::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

TimTpPoll::Ptr TimTpPoll::cloneImpl() const
{
    ImplPtr impl(static_cast<TimTpPollImpl*>(m_pImpl->clone().release()));
    return Ptr(new TimTpPoll(std::move(impl)));
}

void TimTpPoll::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

TimTpPoll::DataSeq TimTpPoll::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

TimTpPoll::FieldsList TimTpPoll::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

TimTpPoll::FieldsList TimTpPoll::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

TimTpPoll::TimTpPoll(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
