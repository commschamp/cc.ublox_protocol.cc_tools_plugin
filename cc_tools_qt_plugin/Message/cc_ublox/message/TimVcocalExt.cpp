// Generated by commsdsl2tools_qt v7.0.2

#include "TimVcocalExt.h"

#include "cc_tools_qt/ToolsMessageBase.h"
#include "cc_tools_qt_plugin/Message/cc_ublox/Message.h"
#include "cc_ublox/message/TimVcocalExt.h"

namespace cc_tools_qt_plugin
{

namespace Message
{

namespace cc_ublox
{

namespace message
{

class TimVcocalExtImpl : public
    cc_tools_qt::ToolsMessageBase<
        cc_tools_qt_plugin::Message::cc_ublox::Message,
        ::cc_ublox::message::TimVcocalExt,
        TimVcocalExtImpl
    >
{
public:
    TimVcocalExtImpl() = default;
    TimVcocalExtImpl(const TimVcocalExtImpl&) = default;
    TimVcocalExtImpl(TimVcocalExtImpl&&) = default;
    virtual ~TimVcocalExtImpl() = default;
    TimVcocalExtImpl& operator=(const TimVcocalExtImpl&) = default;
    TimVcocalExtImpl& operator=(TimVcocalExtImpl&&) = default;
};

TimVcocalExt::TimVcocalExt() : m_pImpl(new TimVcocalExtImpl) {}
TimVcocalExt::~TimVcocalExt() = default;

TimVcocalExt& TimVcocalExt::operator=(const TimVcocalExt& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

TimVcocalExt& TimVcocalExt::operator=(TimVcocalExt&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* TimVcocalExt::nameImpl() const
{
    return m_pImpl->name();
}

bool TimVcocalExt::refreshMsgImpl()
{
    return m_pImpl->refreshMsg();
}

qlonglong TimVcocalExt::numericIdImpl() const
{
    return m_pImpl->numericId();
}

QString TimVcocalExt::idAsStringImpl() const
{
    return m_pImpl->idAsString();
}

void TimVcocalExt::resetImpl()
{
    m_pImpl->reset();
}

bool TimVcocalExt::assignImpl(const cc_tools_qt::ToolsMessage& other)
{
    auto* castedOther = dynamic_cast<const TimVcocalExt*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

bool TimVcocalExt::isValidImpl() const
{
    return m_pImpl->isValid();
}

TimVcocalExt::DataSeq TimVcocalExt::encodeDataImpl() const
{
    return m_pImpl->encodeData();
}

bool TimVcocalExt::decodeDataImpl(const DataSeq& data)
{
    return m_pImpl->decodeData(data);
}

TimVcocalExt::Ptr TimVcocalExt::cloneImpl() const
{
    ImplPtr impl(static_cast<TimVcocalExtImpl*>(m_pImpl->clone().release()));
    return Ptr(new TimVcocalExt(std::move(impl)));
}

void TimVcocalExt::assignProtMessageImpl(void* protMsg)
{
    m_pImpl->assignProtMessage(protMsg);
}

TimVcocalExt::DataSeq TimVcocalExt::encodeFramedImpl(cc_tools_qt::ToolsFrame& frame) const
{
    return m_pImpl->encodeFramed(frame);
}

TimVcocalExt::FieldsList TimVcocalExt::transportFieldsImpl()
{
    return m_pImpl->transportFields();
}

TimVcocalExt::FieldsList TimVcocalExt::payloadFieldsImpl()
{
    return m_pImpl->payloadFields();
}

TimVcocalExt::TimVcocalExt(ImplPtr&& impl) :
    m_pImpl(std::move(impl))
{
}

} // namespace message

} // namespace cc_ublox

} // namespace Message

} // namespace cc_tools_qt_plugin
