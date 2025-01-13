// Generated by commsdsl2tools_qt v7.0.0

#include "TimTm2.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/TimTm2.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class TimTm2Impl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::TimTm2,
        TimTm2Impl
    >
{
public:
    TimTm2Impl() = default;
    TimTm2Impl(const TimTm2Impl&) = default;
    TimTm2Impl(TimTm2Impl&&) = default;
    virtual ~TimTm2Impl() = default;
    TimTm2Impl& operator=(const TimTm2Impl&) = default;
    TimTm2Impl& operator=(TimTm2Impl&&) = default;
};

TimTm2::TimTm2() : m_pImpl(new TimTm2Impl) {}
TimTm2::~TimTm2() = default;

TimTm2& TimTm2::operator=(const TimTm2& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

TimTm2& TimTm2::operator=(TimTm2&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* TimTm2::nameImpl() const
{
    return m_pImpl->name();
}

bool TimTm2::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong TimTm2::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString TimTm2::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void TimTm2::resetImpl()
{
    m_pImpl->reset();
}

bool TimTm2::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const TimTm2*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool TimTm2::isValidImpl() const
{
    return m_pImpl->isValid();
}

TimTm2::DataSeq TimTm2::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool TimTm2::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

TimTm2::Ptr TimTm2::cloneImpl() const
{
    ImplPtr impl(static_cast<TimTm2Impl*>(m_pImpl->clone().release()));
    return Ptr(new TimTm2(std::move(impl)));
}

void TimTm2::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

TimTm2::DataSeq TimTm2::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

TimTm2::FieldsList TimTm2::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

TimTm2::FieldsList TimTm2::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

TimTm2::TimTm2(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
