// Generated by commsdsl2tools_qt v7.1.0

#include "TimSvinPoll.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/TimSvinPoll.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class TimSvinPollImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::TimSvinPoll,
        TimSvinPollImpl
    >
{
public:
    TimSvinPollImpl() = default;
    TimSvinPollImpl(const TimSvinPollImpl&) = default;
    TimSvinPollImpl(TimSvinPollImpl&&) = default;
    virtual ~TimSvinPollImpl() = default;
    TimSvinPollImpl& operator=(const TimSvinPollImpl&) = default;
    TimSvinPollImpl& operator=(TimSvinPollImpl&&) = default;
};

TimSvinPoll::TimSvinPoll() : m_pImpl(new TimSvinPollImpl) {}
TimSvinPoll::~TimSvinPoll() = default;

TimSvinPoll& TimSvinPoll::operator=(const TimSvinPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

TimSvinPoll& TimSvinPoll::operator=(TimSvinPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* TimSvinPoll::nameImpl() const
{
    return m_pImpl->name();
}

bool TimSvinPoll::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong TimSvinPoll::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString TimSvinPoll::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void TimSvinPoll::resetImpl()
{
    m_pImpl->reset();
}

bool TimSvinPoll::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const TimSvinPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool TimSvinPoll::isValidImpl() const
{
    return m_pImpl->isValid();
}

TimSvinPoll::DataSeq TimSvinPoll::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool TimSvinPoll::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

TimSvinPoll::Ptr TimSvinPoll::cloneImpl() const
{
    ImplPtr impl(static_cast<TimSvinPollImpl*>(m_pImpl->clone().release()));
    return Ptr(new TimSvinPoll(std::move(impl)));
}

void TimSvinPoll::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

TimSvinPoll::DataSeq TimSvinPoll::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

TimSvinPoll::FieldsList TimSvinPoll::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

TimSvinPoll::FieldsList TimSvinPoll::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

TimSvinPoll::TimSvinPoll(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
