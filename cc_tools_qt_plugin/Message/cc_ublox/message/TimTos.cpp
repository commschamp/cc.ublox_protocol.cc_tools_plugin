// Generated by commsdsl2tools_qt v7.1.0

#include "TimTos.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/TimTos.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class TimTosImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::TimTos,
        TimTosImpl
    >
{
public:
    TimTosImpl() = default;
    TimTosImpl(const TimTosImpl&) = default;
    TimTosImpl(TimTosImpl&&) = default;
    virtual ~TimTosImpl() = default;
    TimTosImpl& operator=(const TimTosImpl&) = default;
    TimTosImpl& operator=(TimTosImpl&&) = default;
};

TimTos::TimTos() : m_pImpl(new TimTosImpl) {}
TimTos::~TimTos() = default;

TimTos& TimTos::operator=(const TimTos& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

TimTos& TimTos::operator=(TimTos&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* TimTos::nameImpl() const
{
    return m_pImpl->name();
}

bool TimTos::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong TimTos::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString TimTos::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void TimTos::resetImpl()
{
    m_pImpl->reset();
}

bool TimTos::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const TimTos*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool TimTos::isValidImpl() const
{
    return m_pImpl->isValid();
}

TimTos::DataSeq TimTos::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool TimTos::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

TimTos::Ptr TimTos::cloneImpl() const
{
    ImplPtr impl(static_cast<TimTosImpl*>(m_pImpl->clone().release()));
    return Ptr(new TimTos(std::move(impl)));
}

void TimTos::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

TimTos::DataSeq TimTos::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

TimTos::FieldsList TimTos::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

TimTos::FieldsList TimTos::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

TimTos::TimTos(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
