// Generated by commsdsl2tools_qt v7.1.0

#include "TimSvin.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/TimSvin.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class TimSvinImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::TimSvin,
        TimSvinImpl
    >
{
public:
    TimSvinImpl() = default;
    TimSvinImpl(const TimSvinImpl&) = default;
    TimSvinImpl(TimSvinImpl&&) = default;
    virtual ~TimSvinImpl() = default;
    TimSvinImpl& operator=(const TimSvinImpl&) = default;
    TimSvinImpl& operator=(TimSvinImpl&&) = default;
};

TimSvin::TimSvin() : m_pImpl(new TimSvinImpl) {}
TimSvin::~TimSvin() = default;

TimSvin& TimSvin::operator=(const TimSvin& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

TimSvin& TimSvin::operator=(TimSvin&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* TimSvin::nameImpl() const
{
    return m_pImpl->name();
}

bool TimSvin::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong TimSvin::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString TimSvin::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void TimSvin::resetImpl()
{
    m_pImpl->reset();
}

bool TimSvin::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const TimSvin*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool TimSvin::isValidImpl() const
{
    return m_pImpl->isValid();
}

TimSvin::DataSeq TimSvin::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool TimSvin::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

TimSvin::Ptr TimSvin::cloneImpl() const
{
    ImplPtr impl(static_cast<TimSvinImpl*>(m_pImpl->clone().release()));
    return Ptr(new TimSvin(std::move(impl)));
}

void TimSvin::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

TimSvin::DataSeq TimSvin::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

TimSvin::FieldsList TimSvin::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

TimSvin::FieldsList TimSvin::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

TimSvin::TimSvin(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
