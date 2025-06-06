// Generated by commsdsl2tools_qt v7.1.0

#include "TimFchgPoll.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/TimFchgPoll.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class TimFchgPollImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::TimFchgPoll,
        TimFchgPollImpl
    >
{
public:
    TimFchgPollImpl() = default;
    TimFchgPollImpl(const TimFchgPollImpl&) = default;
    TimFchgPollImpl(TimFchgPollImpl&&) = default;
    virtual ~TimFchgPollImpl() = default;
    TimFchgPollImpl& operator=(const TimFchgPollImpl&) = default;
    TimFchgPollImpl& operator=(TimFchgPollImpl&&) = default;
};

TimFchgPoll::TimFchgPoll() : m_pImpl(new TimFchgPollImpl) {}
TimFchgPoll::~TimFchgPoll() = default;

TimFchgPoll& TimFchgPoll::operator=(const TimFchgPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

TimFchgPoll& TimFchgPoll::operator=(TimFchgPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* TimFchgPoll::nameImpl() const
{
    return m_pImpl->name();
}

bool TimFchgPoll::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong TimFchgPoll::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString TimFchgPoll::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void TimFchgPoll::resetImpl()
{
    m_pImpl->reset();
}

bool TimFchgPoll::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const TimFchgPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool TimFchgPoll::isValidImpl() const
{
    return m_pImpl->isValid();
}

TimFchgPoll::DataSeq TimFchgPoll::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool TimFchgPoll::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

TimFchgPoll::Ptr TimFchgPoll::cloneImpl() const
{
    ImplPtr impl(static_cast<TimFchgPollImpl*>(m_pImpl->clone().release()));
    return Ptr(new TimFchgPoll(std::move(impl)));
}

void TimFchgPoll::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

TimFchgPoll::DataSeq TimFchgPoll::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

TimFchgPoll::FieldsList TimFchgPoll::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

TimFchgPoll::FieldsList TimFchgPoll::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

TimFchgPoll::TimFchgPoll(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
