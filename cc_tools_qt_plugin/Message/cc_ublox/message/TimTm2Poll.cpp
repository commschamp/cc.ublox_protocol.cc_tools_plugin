// Generated by commsdsl2tools_qt v7.0.2

#include "TimTm2Poll.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/TimTm2Poll.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class TimTm2PollImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::TimTm2Poll,
        TimTm2PollImpl
    >
{
public:
    TimTm2PollImpl() = default;
    TimTm2PollImpl(const TimTm2PollImpl&) = default;
    TimTm2PollImpl(TimTm2PollImpl&&) = default;
    virtual ~TimTm2PollImpl() = default;
    TimTm2PollImpl& operator=(const TimTm2PollImpl&) = default;
    TimTm2PollImpl& operator=(TimTm2PollImpl&&) = default;
};

TimTm2Poll::TimTm2Poll() : m_pImpl(new TimTm2PollImpl) {}
TimTm2Poll::~TimTm2Poll() = default;

TimTm2Poll& TimTm2Poll::operator=(const TimTm2Poll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

TimTm2Poll& TimTm2Poll::operator=(TimTm2Poll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* TimTm2Poll::nameImpl() const
{
    return m_pImpl->name();
}

bool TimTm2Poll::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong TimTm2Poll::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString TimTm2Poll::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void TimTm2Poll::resetImpl()
{
    m_pImpl->reset();
}

bool TimTm2Poll::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const TimTm2Poll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool TimTm2Poll::isValidImpl() const
{
    return m_pImpl->isValid();
}

TimTm2Poll::DataSeq TimTm2Poll::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool TimTm2Poll::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

TimTm2Poll::Ptr TimTm2Poll::cloneImpl() const
{
    ImplPtr impl(static_cast<TimTm2PollImpl*>(m_pImpl->clone().release()));
    return Ptr(new TimTm2Poll(std::move(impl)));
}

void TimTm2Poll::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

TimTm2Poll::DataSeq TimTm2Poll::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

TimTm2Poll::FieldsList TimTm2Poll::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

TimTm2Poll::FieldsList TimTm2Poll::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

TimTm2Poll::TimTm2Poll(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
